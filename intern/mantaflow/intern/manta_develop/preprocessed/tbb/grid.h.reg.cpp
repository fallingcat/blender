




// DO NOT EDIT !
// This file is generated using the MantaFlow preprocessor (prep link).




#include "grid.h"
namespace Manta {
#ifdef _C_FlagGrid
 static const Pb::Register _R_26 ("FlagGrid","FlagGrid","Grid<int>"); template<> const char* Namify<FlagGrid >::S = "FlagGrid"; 
 static const Pb::Register _R_27 ("FlagGrid","FlagGrid",FlagGrid::_W_35); 
 static const Pb::Register _R_28 ("FlagGrid","initDomain",FlagGrid::_W_36); 
 static const Pb::Register _R_29 ("FlagGrid","updateFromLevelset",FlagGrid::_W_37); 
 static const Pb::Register _R_30 ("FlagGrid","fillGrid",FlagGrid::_W_38); 
 static const Pb::Register _R_31 ("FlagGrid","countCells",FlagGrid::_W_39); 
#endif
#ifdef _C_Grid
 static const Pb::Register _R_32 ("Grid<int>","Grid<int>","GridBase"); template<> const char* Namify<Grid<int> >::S = "Grid<int>"; 
 static const Pb::Register _R_33 ("Grid<int>","Grid",Grid<int>::_W_9); 
 static const Pb::Register _R_34 ("Grid<int>","save",Grid<int>::_W_10); 
 static const Pb::Register _R_35 ("Grid<int>","load",Grid<int>::_W_11); 
 static const Pb::Register _R_36 ("Grid<int>","clear",Grid<int>::_W_12); 
 static const Pb::Register _R_37 ("Grid<int>","copyFrom",Grid<int>::_W_13); 
 static const Pb::Register _R_38 ("Grid<int>","getGridType",Grid<int>::_W_14); 
 static const Pb::Register _R_39 ("Grid<int>","add",Grid<int>::_W_15); 
 static const Pb::Register _R_40 ("Grid<int>","sub",Grid<int>::_W_16); 
 static const Pb::Register _R_41 ("Grid<int>","setConst",Grid<int>::_W_17); 
 static const Pb::Register _R_42 ("Grid<int>","addConst",Grid<int>::_W_18); 
 static const Pb::Register _R_43 ("Grid<int>","addScaled",Grid<int>::_W_19); 
 static const Pb::Register _R_44 ("Grid<int>","mult",Grid<int>::_W_20); 
 static const Pb::Register _R_45 ("Grid<int>","multConst",Grid<int>::_W_21); 
 static const Pb::Register _R_46 ("Grid<int>","clamp",Grid<int>::_W_22); 
 static const Pb::Register _R_47 ("Grid<int>","stomp",Grid<int>::_W_23); 
 static const Pb::Register _R_48 ("Grid<int>","getMaxAbs",Grid<int>::_W_24); 
 static const Pb::Register _R_49 ("Grid<int>","getMax",Grid<int>::_W_25); 
 static const Pb::Register _R_50 ("Grid<int>","getMin",Grid<int>::_W_26); 
 static const Pb::Register _R_51 ("Grid<int>","getL1",Grid<int>::_W_27); 
 static const Pb::Register _R_52 ("Grid<int>","getL2",Grid<int>::_W_28); 
 static const Pb::Register _R_53 ("Grid<int>","setBound",Grid<int>::_W_29); 
 static const Pb::Register _R_54 ("Grid<int>","setBoundNeumann",Grid<int>::_W_30); 
 static const Pb::Register _R_55 ("Grid<int>","getDataPointer",Grid<int>::_W_31); 
 static const Pb::Register _R_56 ("Grid<int>","printGrid",Grid<int>::_W_32); 
 static const Pb::Register _R_57 ("Grid<Real>","Grid<Real>","GridBase"); template<> const char* Namify<Grid<Real> >::S = "Grid<Real>"; 
 static const Pb::Register _R_58 ("Grid<Real>","Grid",Grid<Real>::_W_9); 
 static const Pb::Register _R_59 ("Grid<Real>","save",Grid<Real>::_W_10); 
 static const Pb::Register _R_60 ("Grid<Real>","load",Grid<Real>::_W_11); 
 static const Pb::Register _R_61 ("Grid<Real>","clear",Grid<Real>::_W_12); 
 static const Pb::Register _R_62 ("Grid<Real>","copyFrom",Grid<Real>::_W_13); 
 static const Pb::Register _R_63 ("Grid<Real>","getGridType",Grid<Real>::_W_14); 
 static const Pb::Register _R_64 ("Grid<Real>","add",Grid<Real>::_W_15); 
 static const Pb::Register _R_65 ("Grid<Real>","sub",Grid<Real>::_W_16); 
 static const Pb::Register _R_66 ("Grid<Real>","setConst",Grid<Real>::_W_17); 
 static const Pb::Register _R_67 ("Grid<Real>","addConst",Grid<Real>::_W_18); 
 static const Pb::Register _R_68 ("Grid<Real>","addScaled",Grid<Real>::_W_19); 
 static const Pb::Register _R_69 ("Grid<Real>","mult",Grid<Real>::_W_20); 
 static const Pb::Register _R_70 ("Grid<Real>","multConst",Grid<Real>::_W_21); 
 static const Pb::Register _R_71 ("Grid<Real>","clamp",Grid<Real>::_W_22); 
 static const Pb::Register _R_72 ("Grid<Real>","stomp",Grid<Real>::_W_23); 
 static const Pb::Register _R_73 ("Grid<Real>","getMaxAbs",Grid<Real>::_W_24); 
 static const Pb::Register _R_74 ("Grid<Real>","getMax",Grid<Real>::_W_25); 
 static const Pb::Register _R_75 ("Grid<Real>","getMin",Grid<Real>::_W_26); 
 static const Pb::Register _R_76 ("Grid<Real>","getL1",Grid<Real>::_W_27); 
 static const Pb::Register _R_77 ("Grid<Real>","getL2",Grid<Real>::_W_28); 
 static const Pb::Register _R_78 ("Grid<Real>","setBound",Grid<Real>::_W_29); 
 static const Pb::Register _R_79 ("Grid<Real>","setBoundNeumann",Grid<Real>::_W_30); 
 static const Pb::Register _R_80 ("Grid<Real>","getDataPointer",Grid<Real>::_W_31); 
 static const Pb::Register _R_81 ("Grid<Real>","printGrid",Grid<Real>::_W_32); 
 static const Pb::Register _R_82 ("Grid<Vec3>","Grid<Vec3>","GridBase"); template<> const char* Namify<Grid<Vec3> >::S = "Grid<Vec3>"; 
 static const Pb::Register _R_83 ("Grid<Vec3>","Grid",Grid<Vec3>::_W_9); 
 static const Pb::Register _R_84 ("Grid<Vec3>","save",Grid<Vec3>::_W_10); 
 static const Pb::Register _R_85 ("Grid<Vec3>","load",Grid<Vec3>::_W_11); 
 static const Pb::Register _R_86 ("Grid<Vec3>","clear",Grid<Vec3>::_W_12); 
 static const Pb::Register _R_87 ("Grid<Vec3>","copyFrom",Grid<Vec3>::_W_13); 
 static const Pb::Register _R_88 ("Grid<Vec3>","getGridType",Grid<Vec3>::_W_14); 
 static const Pb::Register _R_89 ("Grid<Vec3>","add",Grid<Vec3>::_W_15); 
 static const Pb::Register _R_90 ("Grid<Vec3>","sub",Grid<Vec3>::_W_16); 
 static const Pb::Register _R_91 ("Grid<Vec3>","setConst",Grid<Vec3>::_W_17); 
 static const Pb::Register _R_92 ("Grid<Vec3>","addConst",Grid<Vec3>::_W_18); 
 static const Pb::Register _R_93 ("Grid<Vec3>","addScaled",Grid<Vec3>::_W_19); 
 static const Pb::Register _R_94 ("Grid<Vec3>","mult",Grid<Vec3>::_W_20); 
 static const Pb::Register _R_95 ("Grid<Vec3>","multConst",Grid<Vec3>::_W_21); 
 static const Pb::Register _R_96 ("Grid<Vec3>","clamp",Grid<Vec3>::_W_22); 
 static const Pb::Register _R_97 ("Grid<Vec3>","stomp",Grid<Vec3>::_W_23); 
 static const Pb::Register _R_98 ("Grid<Vec3>","getMaxAbs",Grid<Vec3>::_W_24); 
 static const Pb::Register _R_99 ("Grid<Vec3>","getMax",Grid<Vec3>::_W_25); 
 static const Pb::Register _R_100 ("Grid<Vec3>","getMin",Grid<Vec3>::_W_26); 
 static const Pb::Register _R_101 ("Grid<Vec3>","getL1",Grid<Vec3>::_W_27); 
 static const Pb::Register _R_102 ("Grid<Vec3>","getL2",Grid<Vec3>::_W_28); 
 static const Pb::Register _R_103 ("Grid<Vec3>","setBound",Grid<Vec3>::_W_29); 
 static const Pb::Register _R_104 ("Grid<Vec3>","setBoundNeumann",Grid<Vec3>::_W_30); 
 static const Pb::Register _R_105 ("Grid<Vec3>","getDataPointer",Grid<Vec3>::_W_31); 
 static const Pb::Register _R_106 ("Grid<Vec3>","printGrid",Grid<Vec3>::_W_32); 
#endif
#ifdef _C_GridBase
 static const Pb::Register _R_107 ("GridBase","GridBase","PbClass"); template<> const char* Namify<GridBase >::S = "GridBase"; 
 static const Pb::Register _R_108 ("GridBase","GridBase",GridBase::_W_0); 
 static const Pb::Register _R_109 ("GridBase","getSizeX",GridBase::_W_1); 
 static const Pb::Register _R_110 ("GridBase","getSizeY",GridBase::_W_2); 
 static const Pb::Register _R_111 ("GridBase","getSizeZ",GridBase::_W_3); 
 static const Pb::Register _R_112 ("GridBase","getSize",GridBase::_W_4); 
 static const Pb::Register _R_113 ("GridBase","is3D",GridBase::_W_5); 
 static const Pb::Register _R_114 ("GridBase","is4D",GridBase::_W_6); 
 static const Pb::Register _R_115 ("GridBase","getSizeT",GridBase::_W_7); 
 static const Pb::Register _R_116 ("GridBase","getStrideT",GridBase::_W_8); 
#endif
#ifdef _C_MACGrid
 static const Pb::Register _R_117 ("MACGrid","MACGrid","Grid<Vec3>"); template<> const char* Namify<MACGrid >::S = "MACGrid"; 
 static const Pb::Register _R_118 ("MACGrid","MACGrid",MACGrid::_W_33); 
 static const Pb::Register _R_119 ("MACGrid","setBoundMAC",MACGrid::_W_34); 
#endif
static const Pb::Register _R_7 ("GridType_TypeNone",0);
static const Pb::Register _R_8 ("GridType_TypeReal",1);
static const Pb::Register _R_9 ("GridType_TypeInt",2);
static const Pb::Register _R_10 ("GridType_TypeVec3",4);
static const Pb::Register _R_11 ("GridType_TypeMAC",8);
static const Pb::Register _R_12 ("GridType_TypeLevelset",16);
static const Pb::Register _R_13 ("GridType_TypeFlags",32);
static const Pb::Register _R_14 ("Grid<int>","IntGrid","");
static const Pb::Register _R_15 ("Grid<Real>","RealGrid","");
static const Pb::Register _R_16 ("Grid<Vec3>","VecGrid","");
static const Pb::Register _R_17 ("CellType_TypeNone",0);
static const Pb::Register _R_18 ("CellType_TypeFluid",1);
static const Pb::Register _R_19 ("CellType_TypeObstacle",2);
static const Pb::Register _R_20 ("CellType_TypeEmpty",4);
static const Pb::Register _R_21 ("CellType_TypeInflow",8);
static const Pb::Register _R_22 ("CellType_TypeOutflow",16);
static const Pb::Register _R_23 ("CellType_TypeOpen",32);
static const Pb::Register _R_24 ("CellType_TypeStick",64);
static const Pb::Register _R_25 ("CellType_TypeReserved",256);
extern "C" {
void PbRegister_file_7()
{
	KEEP_UNUSED(_R_26);
	KEEP_UNUSED(_R_27);
	KEEP_UNUSED(_R_28);
	KEEP_UNUSED(_R_29);
	KEEP_UNUSED(_R_30);
	KEEP_UNUSED(_R_31);
	KEEP_UNUSED(_R_32);
	KEEP_UNUSED(_R_33);
	KEEP_UNUSED(_R_34);
	KEEP_UNUSED(_R_35);
	KEEP_UNUSED(_R_36);
	KEEP_UNUSED(_R_37);
	KEEP_UNUSED(_R_38);
	KEEP_UNUSED(_R_39);
	KEEP_UNUSED(_R_40);
	KEEP_UNUSED(_R_41);
	KEEP_UNUSED(_R_42);
	KEEP_UNUSED(_R_43);
	KEEP_UNUSED(_R_44);
	KEEP_UNUSED(_R_45);
	KEEP_UNUSED(_R_46);
	KEEP_UNUSED(_R_47);
	KEEP_UNUSED(_R_48);
	KEEP_UNUSED(_R_49);
	KEEP_UNUSED(_R_50);
	KEEP_UNUSED(_R_51);
	KEEP_UNUSED(_R_52);
	KEEP_UNUSED(_R_53);
	KEEP_UNUSED(_R_54);
	KEEP_UNUSED(_R_55);
	KEEP_UNUSED(_R_56);
	KEEP_UNUSED(_R_57);
	KEEP_UNUSED(_R_58);
	KEEP_UNUSED(_R_59);
	KEEP_UNUSED(_R_60);
	KEEP_UNUSED(_R_61);
	KEEP_UNUSED(_R_62);
	KEEP_UNUSED(_R_63);
	KEEP_UNUSED(_R_64);
	KEEP_UNUSED(_R_65);
	KEEP_UNUSED(_R_66);
	KEEP_UNUSED(_R_67);
	KEEP_UNUSED(_R_68);
	KEEP_UNUSED(_R_69);
	KEEP_UNUSED(_R_70);
	KEEP_UNUSED(_R_71);
	KEEP_UNUSED(_R_72);
	KEEP_UNUSED(_R_73);
	KEEP_UNUSED(_R_74);
	KEEP_UNUSED(_R_75);
	KEEP_UNUSED(_R_76);
	KEEP_UNUSED(_R_77);
	KEEP_UNUSED(_R_78);
	KEEP_UNUSED(_R_79);
	KEEP_UNUSED(_R_80);
	KEEP_UNUSED(_R_81);
	KEEP_UNUSED(_R_82);
	KEEP_UNUSED(_R_83);
	KEEP_UNUSED(_R_84);
	KEEP_UNUSED(_R_85);
	KEEP_UNUSED(_R_86);
	KEEP_UNUSED(_R_87);
	KEEP_UNUSED(_R_88);
	KEEP_UNUSED(_R_89);
	KEEP_UNUSED(_R_90);
	KEEP_UNUSED(_R_91);
	KEEP_UNUSED(_R_92);
	KEEP_UNUSED(_R_93);
	KEEP_UNUSED(_R_94);
	KEEP_UNUSED(_R_95);
	KEEP_UNUSED(_R_96);
	KEEP_UNUSED(_R_97);
	KEEP_UNUSED(_R_98);
	KEEP_UNUSED(_R_99);
	KEEP_UNUSED(_R_100);
	KEEP_UNUSED(_R_101);
	KEEP_UNUSED(_R_102);
	KEEP_UNUSED(_R_103);
	KEEP_UNUSED(_R_104);
	KEEP_UNUSED(_R_105);
	KEEP_UNUSED(_R_106);
	KEEP_UNUSED(_R_107);
	KEEP_UNUSED(_R_108);
	KEEP_UNUSED(_R_109);
	KEEP_UNUSED(_R_110);
	KEEP_UNUSED(_R_111);
	KEEP_UNUSED(_R_112);
	KEEP_UNUSED(_R_113);
	KEEP_UNUSED(_R_114);
	KEEP_UNUSED(_R_115);
	KEEP_UNUSED(_R_116);
	KEEP_UNUSED(_R_117);
	KEEP_UNUSED(_R_118);
	KEEP_UNUSED(_R_119);
}
}}