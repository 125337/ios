// _$s8WCRefine22WCRSuperFloatPetPlayerC19resolveAbsolutePathySSSgAEFZ @ 021fee60

undefined1  [16]
__s8WCRefine22WCRSuperFloatPetPlayerC19resolveAbsolutePathySSSgAEFZ(ulong param_1,long param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  char *pcVar7;
  undefined8 uVar8;
  ulong local_1e0;
  long local_1d8;
  long local_1c0;
  ulong local_120;
  long local_118;
  ulong local_110;
  long local_108;
  ulong local_90;
  undefined *puStack_88;
  ulong local_80;
  undefined *puStack_78;
  ulong local_70;
  undefined *local_68;
  ulong local_60;
  ulong local_58;
  undefined *local_50;
  ulong local_48;
  long local_40;
  
  local_48 = 0;
  local_40 = 0;
  _swift_bridgeObjectRetain();
  if (param_2 != 0) {
    uVar3 = param_1;
    local_48 = param_1;
    local_40 = param_2;
    __sSS7isEmptySbvg();
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
      uVar8 = 1;
      __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("/",1,1);
      __sSS9hasPrefixySbSSF();
      _swift_bridgeObjectRelease(uVar8);
      if ((uVar2 & 1) == 0) {
        uVar4 = 9;
        _NSSearchPathForDirectoriesInDomains(9,1,1);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar4;
        __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
        (*(code *)PTR__objc_release_02578630)(uVar4);
        puVar5 = &DAT_028c7238;
        local_60 = uVar3;
        FUN_021c77d4(&DAT_028c7238,&DAT_0233b1c0);
        puVar6 = puVar5;
        FUN_021fbd3c();
        __sSlsE5first7ElementQzSgvg(&local_70,puVar5);
        _swift_bridgeObjectRelease();
        local_80 = local_70;
        puStack_78 = local_68;
        puStack_88 = local_68;
        local_90 = local_70;
        if (local_68 == (undefined *)0x0) {
          _NSHomeDirectory();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
          (*(code *)PTR__objc_release_02578630)(uVar3);
          pcVar7 = "/Documents";
          uVar8 = 10;
          __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("/Documents",10,1);
          puVar5 = puVar6;
          __sSS1poiyS2S_SStFZ(uVar4,puVar6,pcVar7);
          _swift_bridgeObjectRelease(uVar8);
          _swift_bridgeObjectRelease(puVar6);
          local_58 = uVar4;
          local_50 = puVar5;
          if (puStack_88 != (undefined *)0x0) {
            FUN_021c811c(&local_90);
          }
        }
        else {
          local_58 = local_70;
          local_50 = local_68;
        }
        puVar5 = local_50;
        uVar3 = local_58;
        _swift_bridgeObjectRetain();
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,puVar5);
        _swift_bridgeObjectRelease(puVar5);
        _swift_bridgeObjectRetain(param_2);
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
        _swift_bridgeObjectRelease(param_2);
        uVar4 = uVar3;
        FUN_02223800(uVar3,local_1c0,param_1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)(param_1);
        (*(code *)PTR__objc_release_02578630)(uVar3);
        local_1e0 = uVar4;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        (*(code *)PTR__objc_release_02578630)(uVar4);
        _swift_bridgeObjectRetain();
        uVar3 = local_1e0;
        __s8WCRefine22WCRSuperFloatPetPlayerC02isD9DirectoryySbSSSgFZ(local_1e0,local_1c0);
        _swift_bridgeObjectRelease(local_1c0);
        if ((uVar3 & 1) == 0) {
          local_1e0 = 0;
          local_1d8 = 0;
        }
        else {
          _swift_bridgeObjectRetain(local_1c0);
          local_1d8 = local_1c0;
        }
        _swift_bridgeObjectRelease(local_1c0);
        _swift_bridgeObjectRelease(puVar5);
        _swift_bridgeObjectRelease(param_2);
        local_120 = local_1e0;
        local_118 = local_1d8;
      }
      else {
        _swift_bridgeObjectRetain(param_2);
        uVar3 = param_1;
        __s8WCRefine22WCRSuperFloatPetPlayerC02isD9DirectoryySbSSSgFZ(param_1,param_2);
        _swift_bridgeObjectRelease(param_2);
        if ((uVar3 & 1) == 0) {
          local_110 = 0;
          local_108 = 0;
        }
        else {
          _swift_bridgeObjectRetain(param_2);
          local_110 = param_1;
          local_108 = param_2;
        }
        _swift_bridgeObjectRelease(param_2);
        local_120 = local_110;
        local_118 = local_108;
      }
      goto LAB_021ff2e4;
    }
    _swift_bridgeObjectRelease(param_2);
  }
  local_120 = 0;
  local_118 = 0;
LAB_021ff2e4:
  auVar1._8_8_ = local_118;
  auVar1._0_8_ = local_120;
  return auVar1;
}

