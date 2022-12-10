#define MUZZLE_MASS_OPTIC_SCAR(item,parent,weight,barrelLength,barrelTwist)\
class item: parent {\
    ACE_barrelLength = barrelLength;\
    ACE_barrelTwist = barrelTwist;\
    class WeaponSlotsInfo: WeaponSlotsInfo {\
        mass = weight;\
        delete MuzzleSlot;\
        delete UnderBarrelSlot;\
        class CowsSlot: asdg_OpticRail1913_long {};\
        class MuzzleSlot: asdg_MuzzleSlot_762 {};\
        class UnderBarrelSlot: asdg_UnderSlot {};\
    };\
}

class AMF_SCAR_H_01_Base_F: Rifle_Base_F {
    magazineWell[] += {"CBA_762x51_SCAR"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 78.8;
    };
};

MUZZLE_MASS_OPTIC_SCAR(AMF_SCAR_H_01_F, AMF_SCAR_H_01_Base_F, 105.7, 510, 304.8);
MUZZLE_MASS_OPTIC_SCAR(AMF_SCAR_H_painted, AMF_SCAR_H_01_Base_F, 105.7, 510, 304.8);

MUZZLE_MASS_OPTIC_SCAR(AMF_SCAR_H_02_F, AMF_SCAR_H_01_Base_F, 78.8, 400, 304.8);
MUZZLE_MASS_OPTIC_SCAR(AMF_SCAR_H_02_F_BLK, AMF_SCAR_H_01_Base_F, 78.8, 400, 304.8);

MUZZLE_MASS_OPTIC_SCAR(AMF_SCAR_H_03_F, AMF_SCAR_H_01_Base_F, 76.8, 330, 304.8);
MUZZLE_MASS_OPTIC_SCAR(AMF_SCAR_H_03_F_BLK, AMF_SCAR_H_01_Base_F, 76.8, 330, 304.8);


class AMF_SCAR_L_01_Base_F: AMF_SCAR_H_01_Base_F {
    magazineWell[] = {"CBA_556x45_STANAG","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","STANAG_556x45_Large"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 71.7;
    };
};

MUZZLE_MASS_OPTIC_SCAR(AMF_SCAR_L_01_F, AMF_SCAR_L_01_Base_F, 68.45, 250, 178);
MUZZLE_MASS_OPTIC_SCAR(AMF_SCAR_L_01_F_TAN, AMF_SCAR_L_01_Base_F, 68.45, 250, 178);

MUZZLE_MASS_OPTIC_SCAR(AMF_SCAR_L_02_F, AMF_SCAR_L_01_Base_F, 71.7, 355, 178);
MUZZLE_MASS_OPTIC_SCAR(AMF_SCAR_L_02_F_TAN, AMF_SCAR_L_01_Base_F, 71.7, 355, 178);
