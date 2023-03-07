#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "amf_aanf1",
            "AMF_Backpack",
            "AMF_FAMAS",
            "AMF_Glock_17",
            "amf_mag58_mg",
            "amf_mini_mg",
            "AMF_PERSEIS_II",
            "amf_perseis_ii_poly",
            "AMF_PGM_ULTIMA_RATIO",
            "AMF_RFF2",
            "AMF_weapon_F",
            "AMF_weapon_F_scar",
            "AMF_weapon_F_S",
            "AMF_Weapons_HK_MP5_01"
        };
        author = "johnb43";
        authors[] = {"johnb43"};
        url = "https://github.com/johnb432/Weapons-Balance-AMF";
        VERSION_CONFIG;
    };
};

#include "CfgAcc.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgVehicles.hpp"

class asdg_UnderSlot;
class asdg_MuzzleSlot_762;
class asdg_MuzzleSlot_9MM_SMG;
class asdg_FrontSideRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_long;

class Mode_FullAuto;

class CfgWeapons {
    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo;
    };
    class Rifle_Long_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo;
    };

    #include "weapons\CfgWeapMisc.hpp"
    #include "weapons\CfgWeapFAMAS.hpp"
    #include "weapons\CfgWeapHK416.hpp"
    #include "weapons\CfgWeapHK417.hpp"
    #include "weapons\CfgWeapSCAR.hpp"
};

class BettIR_Config {
    class CompatibleAttachments {
        class amf_acc_laserpirat {
            offset[] = {0.15, 0.22, 0.25};
        };

        class amf_an_peq_15_black {
            offset[] = {0.15, 0.22, 0.25};
        };
        class amf_an_peq_15_green {
            offset[] = {0.15, 0.22, 0.25};
        };
        class amf_an_peq_15_painted {
            offset[] = {0.15, 0.22, 0.25};
        };
        class amf_an_peq_15_tan {
            offset[] = {0.15, 0.22, 0.25};
        };
    };
};
