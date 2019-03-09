#pragma once

#include "BLI_shared_immutable.hpp"

namespace FN { namespace Types {

	template<typename T>
	class List;

	template<typename T>
	using SharedList = AutoRefCount<List<T>>;

	template<typename T>
	class List : public BLI::SharedImmutable {
	private:
		SmallVector<T> m_data;

		~List() {}

	public:
		List()
			: BLI::SharedImmutable() {}

		void append(T value)
		{
			this->assert_mutable();
			m_data.append(std::move(value));
		}

		List *copy() const
		{
			List *new_list = new List();
			for (T &value : m_data) {
				new_list->append(value);
			}
			BLI_assert(new_list->users() == 1);
			return new_list;
		}

		uint size() const
		{
			return m_data.size();
		}

		T operator[](int index) const
		{
			return m_data[index];
		}

		T &operator[](int index)
		{
			this->assert_mutable();
			return m_data[index];
		}

		SharedList<T> get_mutable()
		{
			if (this->is_mutable()) {
				return SharedList<T>::FromPointer(this);
			}
			else {
				List *new_list = this->copy();
				BLI_assert(new_list->is_mutable());
				return SharedList<T>::FromPointer(new_list);
			}
		}

		T *begin() const
		{
			return m_data.begin();
		}

		T *end() const
		{
			return m_data.end();
		}
	};

} } /* namespace FN::Types */