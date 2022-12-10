class AMF_FAMAS_01_Base_F: Rifle_Base_F {
    ACE_barrelLength = 488;
    ACE_barrelTwist = 304.8;
    magazineWell[] += {"CBA_556x45_FAMAS"};
    class WeaponSlotsInfo;
};
class AMF_Samas_F1_01_F: AMF_FAMAS_01_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 81.6;
        delete MuzzleSlot;
        class MuzzleSlot: asdg_MuzzleSlot_556 {};
    };
};

class AMF_Samas_G2_01_F: AMF_FAMAS_01_Base_F {
    magazineWell[] = {"CBA_556x45_STANAG","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","STANAG_556x45_Large"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 84;
        delete MuzzleSlot;
        class MuzzleSlot: asdg_MuzzleSlot_556 {};
    };
};

class AMF_Samas_FELIN_01_F: AMF_FAMAS_01_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 81.6;
        delete MuzzleSlot;
        delete PointerSlot;
        class MuzzleSlot: asdg_MuzzleSlot_556 {};
        class PointerSlot: asdg_FrontSideRail {};
    };
};


class AMF_Samas_VALO_01_F: AMF_FAMAS_01_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 81.6;
        delete MuzzleSlot;
        delete PointerSlot;
        class MuzzleSlot: asdg_MuzzleSlot_556 {};
        class PointerSlot: asdg_FrontSideRail {};
    };
};
class AMF_Samas_VALO_painted: AMF_FAMAS_01_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 81.6;
        delete MuzzleSlot;
        delete PointerSlot;
        class MuzzleSlot: asdg_MuzzleSlot_556 {};
        class PointerSlot: asdg_FrontSideRail {};
    };
};
