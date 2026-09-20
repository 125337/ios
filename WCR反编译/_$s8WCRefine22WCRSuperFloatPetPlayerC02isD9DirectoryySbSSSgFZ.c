// _$s8WCRefine22WCRSuperFloatPetPlayerC02isD9DirectoryySbSSSgFZ @ 021fea48

uint __s8WCRefine22WCRSuperFloatPetPlayerC02isD9DirectoryySbSSSgFZ(ulong param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  uint local_c4;
  undefined8 local_b8;
  byte local_51;
  ulong local_50;
  long local_48;
  
  lVar7 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = 0;
  local_48 = 0;
  local_51 = 0;
  _swift_bridgeObjectRetain();
  if (param_2 != 0) {
    uVar1 = param_1;
    local_50 = param_1;
    local_48 = param_2;
    __sSS7isEmptySbvg();
    if ((uVar1 & 1) == 0) {
      local_51 = 0;
      puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      _objc_opt_self();
      FUN_02222300();
      _objc_retainAutoreleasedReturnValue();
      _swift_bridgeObjectRetain(param_2);
      uVar1 = param_1;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
      _swift_bridgeObjectRelease(param_2);
      puVar3 = puVar2;
      FUN_02222420(puVar2,local_b8,uVar1,&local_51);
      (*(code *)PTR__objc_release_02578630)(uVar1);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if ((((ulong)puVar3 & 1) == 0) || ((local_51 & 1) == 0)) {
        _swift_bridgeObjectRelease(param_2);
        local_c4 = 0;
      }
      else {
        _swift_bridgeObjectRetain(param_2);
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
        _swift_bridgeObjectRelease(param_2);
        pcVar4 = "pet.json";
        uVar6 = 8;
        __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("pet.json",8,1);
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
        _swift_bridgeObjectRelease(uVar6);
        uVar1 = param_1;
        uVar6 = local_b8;
        FUN_02223800(param_1,local_b8,pcVar4);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        (*(code *)PTR__objc_release_02578630)(param_1);
        uVar5 = uVar1;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        (*(code *)PTR__objc_release_02578630)(uVar1);
        puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        _objc_opt_self();
        FUN_02222300();
        _objc_retainAutoreleasedReturnValue();
        _swift_bridgeObjectRetain(uVar6);
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar5,uVar6);
        _swift_bridgeObjectRelease(uVar6);
        puVar3 = puVar2;
        FUN_02222400(puVar2,local_b8,uVar5);
        local_c4 = (uint)puVar3;
        (*(code *)PTR__objc_release_02578630)(uVar5);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        _swift_bridgeObjectRelease(uVar6);
        _swift_bridgeObjectRelease(param_2);
      }
      goto LAB_021fed34;
    }
    _swift_bridgeObjectRelease(param_2);
  }
  local_c4 = 0;
LAB_021fed34:
  if (*(long *)PTR____stack_chk_guard_02578670 - lVar7 == 0) {
    return local_c4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - lVar7);
}

