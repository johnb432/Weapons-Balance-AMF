#define MASS_416_11 68.8
#define MASS_416_13 77

#define MUZZLE_MASS_416(item,parent,weight)\
class item: parent {\
    class WeaponSlotsInfo: WeaponSlotsInfo {\
        mass = weight;\
        delete MuzzleSlot;\
        class MuzzleSlot: asdg_MuzzleSlot_556 {};\
        class CowsSlot: asdg_OpticRail1913_long {};\
    };\
}

class AMF_614_short_01_Base_F: Rifle_Base_F {
    ACE_barrelLength = 264;
    ACE_barrelTwist = 177.8;
    magazineWell[] = {"CBA_556x45_STANAG","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","STANAG_556x45_Large"};
    class WeaponSlotsInfo;
};

MUZZLE_MASS_416(AMF_614_short_01_F, AMF_614_short_01_Base_F, MASS_416_11);

MUZZLE_MASS_416(AMF_614_short_fs2_blk, AMF_614_short_01_Base_F, MASS_416_11);
MUZZLE_MASS_416(AMF_614_short_fs2_paint, AMF_614_short_01_Base_F, MASS_416_11);
MUZZLE_MASS_416(AMF_614_short_fs2_tan, AMF_614_short_01_Base_F, MASS_416_11);

MUZZLE_MASS_416(AMF_614_short_FS_BLK, AMF_614_short_01_Base_F, MASS_416_11);
MUZZLE_MASS_416(AMF_614_short_fs_paint, AMF_614_short_01_Base_F, MASS_416_11);
MUZZLE_MASS_416(AMF_614_short_FS_TAN, AMF_614_short_01_Base_F, MASS_416_11);
MUZZLE_MASS_416(AMF_614_short_FS_TAN2, AMF_614_short_01_Base_F, MASS_416_11);

MUZZLE_MASS_416(AMF_614_short_FS4_BLK, AMF_614_short_01_Base_F, MASS_416_11);
MUZZLE_MASS_416(AMF_614_short_FS4_TAN, AMF_614_short_01_Base_F, MASS_416_11);
MUZZLE_MASS_416(AMF_614_short_FS4_tan2, AMF_614_short_01_Base_F, MASS_416_11);

MUZZLE_MASS_416(AMF_614_short_FS3_BLK, AMF_614_short_01_Base_F, MASS_416_11);
MUZZLE_MASS_416(AMF_614_short_FS3_TAN2, AMF_614_short_01_Base_F, MASS_416_11);
MUZZLE_MASS_416(AMF_614_short_FS3_TAN, AMF_614_short_01_Base_F, MASS_416_11);

MUZZLE_MASS_416(AMF_614_short_FS5_BLK, AMF_614_short_01_Base_F, MASS_416_11);
MUZZLE_MASS_416(AMF_614_short_FS5_TAN, AMF_614_short_01_Base_F, MASS_416_11);
MUZZLE_MASS_416(AMF_614_short_FS5_TAN2, AMF_614_short_01_Base_F, MASS_416_11);


class AMF_614_long_01_Base_F: Rifle_Base_F {
    ACE_barrelLength = 330;
    ACE_barrelTwist = 177.8;
    magazineWell[] = {"CBA_556x45_STANAG","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","STANAG_556x45_Large"};
    class WeaponSlotsInfo;
};
MUZZLE_MASS_416(AMF_614_long_01_F, AMF_614_long_01_Base_F, MASS_416_13);

MUZZLE_MASS_416(AMF_614_long_HK269_01_F, AMF_614_long_01_Base_F, 110);

MUZZLE_MASS_416(AMF_614_long_fs2_blk, AMF_614_long_01_Base_F, MASS_416_13);
MUZZLE_MASS_416(AMF_614_long_fs2_paint, AMF_614_long_01_Base_F, MASS_416_13);
MUZZLE_MASS_416(AMF_614_long_fs2_tan, AMF_614_long_01_Base_F, MASS_416_13);

MUZZLE_MASS_416(AMF_614_long_FS_BLK, AMF_614_long_01_Base_F, MASS_416_13);
MUZZLE_MASS_416(AMF_614_long_fs_paint, AMF_614_long_01_Base_F, MASS_416_13);
MUZZLE_MASS_416(AMF_614_long_FS_TAN, AMF_614_long_01_Base_F, MASS_416_13);
MUZZLE_MASS_416(AMF_614_long_FS_TAN2, AMF_614_long_01_Base_F, MASS_416_13);

MUZZLE_MASS_416(AMF_614_long_FS4_BLK, AMF_614_long_01_Base_F, MASS_416_13);
MUZZLE_MASS_416(AMF_614_long_FS4_tan2, AMF_614_long_01_Base_F, MASS_416_13);
MUZZLE_MASS_416(AMF_614_long_FS4_TAN, AMF_614_long_01_Base_F, MASS_416_13);

MUZZLE_MASS_416(AMF_614_long_FS3_BLK, AMF_614_long_01_Base_F, MASS_416_13);
MUZZLE_MASS_416(AMF_614_long_FS3_TAN, AMF_614_long_01_Base_F, MASS_416_13);
MUZZLE_MASS_416(AMF_614_long_FS3_TAN2, AMF_614_long_01_Base_F, MASS_416_13);

MUZZLE_MASS_416(AMF_614_long_FS5_BLK, AMF_614_long_01_Base_F, MASS_416_13);
MUZZLE_MASS_416(AMF_614_long_FS5_TAN2, AMF_614_long_01_Base_F, MASS_416_13);
MUZZLE_MASS_416(AMF_614_long_FS5_TAN, AMF_614_long_01_Base_F, MASS_416_13);
