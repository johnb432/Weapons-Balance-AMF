class AMF_714_short_01_Base_F: Rifle_Base_F {
    ACE_barrelLength = 330;
    ACE_barrelTwist = 304.8;
    magazineWell[] += {"CBA_762x51_HK417","CBA_762x51_HK417_L","CBA_762x51_HK417_XL"};
    modes[] += {"FullAuto"};

    class WeaponSlotsInfo;
    class FullAuto: Mode_FullAuto {
        reloadTime = 0.1;
        sounds[] = {"StandardSound","SilencedSound"};

        class BaseSoundModeType {
            closure1[] = {"\amf_714_short\Data\sounds\hk417_1.ogg",3.5,1,10};
            closure2[] = {"\amf_714_short\Data\sounds\hk417_2.ogg",3.5,1,10};
            closure3[] = {"\amf_714_short\Data\sounds\hk417_3.ogg",3.5,1,10};
            soundClosure[] = {"closure1",0.5,"closure2",0.5,"closure3",0.5};
            weaponSoundEffect = "DefaultRifle";
        };
        class SilencedSound: BaseSoundModeType {
            begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",1,1,100};
            begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",1,1,100};
            begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",1,1,100};
            soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
        };
        class StandardSound: BaseSoundModeType {
            begin1[] = {"\amf_714_short\Data\sounds\hk417_closeShot_01.ogg",3.5,1,1200};
            begin2[] = {"\amf_714_short\Data\sounds\hk417_closeShot_02.ogg",3.5,1,1200};
            begin3[] = {"\amf_714_short\Data\sounds\hk417_closeShot_03.ogg",3.5,1,1200};
            soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5};
        };
    };
};
class AMF_714_short_01_F: AMF_714_short_01_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 96.8;
        delete UnderBarrelSlot;
        class CowsSlot: asdg_OpticRail1913_long {};
        class UnderBarrelSlot: asdg_UnderSlot {};
    };
};
class AMF_714_short_tan_f: AMF_714_short_01_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 96.8;
        delete UnderBarrelSlot;
        class CowsSlot: asdg_OpticRail1913_long {};
        class UnderBarrelSlot: asdg_UnderSlot {};
    };
};

class AMF_714_Long_01_Base_F: Rifle_Base_F {
    ACE_barrelLength = 400;
    ACE_barrelTwist = 304.8;
    magazineWell[] += {"CBA_762x51_HK417","CBA_762x51_HK417_L","CBA_762x51_HK417_XL"};
    modes[] += {"FullAuto"};

    class WeaponSlotsInfo;
    class FullAuto: Mode_FullAuto {
        reloadTime = 0.1;
        sounds[] = {"StandardSound","SilencedSound"};

        class BaseSoundModeType {
            closure1[] = {"\amf_714_short\Data\sounds\hk417_1.ogg",3.5,1,10};
            closure2[] = {"\amf_714_short\Data\sounds\hk417_2.ogg",3.5,1,10};
            closure3[] = {"\amf_714_short\Data\sounds\hk417_3.ogg",3.5,1,10};
            soundClosure[] = {"closure1",0.5,"closure2",0.5,"closure3",0.5};
            weaponSoundEffect = "DefaultRifle";
        };
        class SilencedSound: BaseSoundModeType {
            begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",1,1,100};
            begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",1,1,100};
            begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",1,1,100};
            soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
        };
        class StandardSound: BaseSoundModeType {
            begin1[] = {"\amf_714_short\Data\sounds\hk417_closeShot_01.ogg",3.5,1,1200};
            begin2[] = {"\amf_714_short\Data\sounds\hk417_closeShot_02.ogg",3.5,1,1200};
            begin3[] = {"\amf_714_short\Data\sounds\hk417_closeShot_03.ogg",3.5,1,1200};
            soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5};
        };
    };
};
class AMF_714_Long_01_F: AMF_714_Long_01_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 98;
        delete UnderBarrelSlot;
        class CowsSlot: asdg_OpticRail1913_long {};
        class UnderBarrelSlot: asdg_UnderSlot {};
    };
};
class AMF_714_long_tan_f: AMF_714_Long_01_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 98;
        delete UnderBarrelSlot;
        class CowsSlot: asdg_OpticRail1913_long {};
        class UnderBarrelSlot: asdg_UnderSlot {};
    };
};
