class Rifle_Short_Base_F;
class Pistol_Base_F;
class amf_aanf1_base_f;
class amf_aanf1_01_f: amf_aanf1_base_f {
    ACE_barrelLength = 600;
    ACE_barrelTwist = 304.8;
    magazineWell[] += {"CBA_762x51_LINKS","M240_762x51"};
    UiPicture = "\a3\weapons_f\data\ui\icon_mg_ca.paa";
};

class amf_mag58_01_f: Rifle_Long_Base_F {
    ACE_barrelLength = 630;
    ACE_barrelTwist = 304.8;
    magazineWell[] += {"CBA_762x51_LINKS","M240_762x51"};
    UiPicture = "\a3\weapons_f\data\ui\icon_mg_ca.paa";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 255.2;
    };
};

class AMF_RFF2_01_F: Rifle_Long_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        delete CowsSlot;
        class CowsSlot: asdg_OpticRail1913 {};
    };
};

class AMF_Weapons_HK_MP5_01_base_f: Rifle_Short_Base_F {
    ACE_barrelLength = 228.6;
    ACE_barrelTwist = 254;
    magazineWell[] += {"CBA_9x19_MP5"};
    class WeaponSlotsInfo;
};
class amf_hk_mp5_01_f: AMF_Weapons_HK_MP5_01_base_f {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 63.8;
        delete MuzzleSlot;
        class MuzzleSlot: asdg_MuzzleSlot_9MM_SMG {};
    };
};
class amf_hk_mp5_02_f: AMF_Weapons_HK_MP5_01_base_f {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 64.8;
        delete MuzzleSlot;
        class MuzzleSlot: asdg_MuzzleSlot_9MM_SMG {};
    };
};

class amf_mini_mg_01_base_f: Rifle_Long_Base_F {
    ACE_barrelLength = 349;
    ACE_barrelTwist = 178;
    magazineWell[] += {"CBA_556x45_MINIMI","M249_556x45"};
    class WeaponSlotsInfo;
};
class amf_mini_mg_01_f: amf_mini_mg_01_base_f {
    UiPicture = "\a3\weapons_f\data\ui\icon_mg_ca.paa";
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 157.5;
    };
};
class amf_mini_mg_tactical_mk3: amf_mini_mg_01_base_f {
    UiPicture = "\a3\weapons_f\data\ui\icon_mg_ca.paa";
};

class AMF_Perseis_II_01_F: Rifle_Long_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        delete CowsSlot;
        class CowsSlot: asdg_OpticRail1913 {};
    };
};
class amf_perseis_ii_poly_02_F: Rifle_Long_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        delete CowsSlot;
        class CowsSlot: asdg_OpticRail1913 {};
    };
};
class AMF_PGM_ULTIMA_RATIO_01_F: Rifle_Long_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        delete CowsSlot;
        delete UnderBarrelSlot;
        class CowsSlot: asdg_OpticRail1913_long {};
        class UnderBarrelSlot: asdg_UnderSlot {};
    };
};

class amf_sig552_01_Base_F: Rifle_Base_F {
    ACE_barrelLength = 226;
    ACE_barrelTwist = 254;
    magazineWell[] = {"CBA_556x45_STANAG","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","STANAG_556x45_Large"};
    class WeaponSlotsInfo;
};
class amf_sig552: amf_sig552_01_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        delete MuzzleSlot;
        class MuzzleSlot: asdg_MuzzleSlot_556 {};
    };
};

class AMF_Glock_17: Pistol_Base_F {
    magazineWell[] += {"CBA_9x19_Glock_Full"};
};
