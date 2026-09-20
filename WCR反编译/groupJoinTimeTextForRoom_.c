// groupJoinTimeTextForRoom: @ 014e27a0

/* Function Stack Size: 0x18 bytes */

ID WCRefineSessionStatsEngine::groupJoinTimeTextForRoom_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  ulong uVar2;
  ID IVar3;
  undefined8 uVar4;
  ulong local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar2 = local_30;
  FUN_014e0fcc();
  iVar1 = (uint)uVar2 + 0xc4653600;
  if ((uint)uVar2 < 1000000000 || iVar1 == 0) {
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_manualGroupJoinTimeForRoom__026af798,local_30);
    FUN_014e2868();
    _objc_retainAutoreleasedReturnValue();
    local_18 = IVar3;
  }
  else {
    uVar4 = NEON_ucvtf(uVar2 & 0xffffffff);
    FUN_014e2868(iVar1,uVar4);
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar2;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

