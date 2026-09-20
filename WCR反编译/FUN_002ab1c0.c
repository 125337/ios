// FUN_002ab1c0 @ 002ab1c0

void FUN_002ab1c0(ulong param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_50;
  ulong local_48 [3];
  byte local_29;
  undefined8 local_28;
  ulong local_20;
  ulong local_18;
  
  local_29 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  FUN_002bad18();
  if ((param_1 & 1) == 0) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    uVar4 = local_20;
    if (((ulong)puVar2 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_48[0] = uVar4;
      FUN_002b7184(uVar4,&cf_MMTabBar_snapshot_beforeOverride);
      uVar4 = local_48[0];
      uVar3 = local_48[0];
      FUN_0029cc70();
      _objc_retainAutoreleasedReturnValue();
      FUN_002bb194(uVar4,uVar3,0);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar4 = local_48[0];
      FUN_002db4f8(local_48[0],local_29 & 1,&cf_MMTabBar_snapshotViewAfterScreenUpdates);
      _objc_retainAutoreleasedReturnValue();
      local_50 = uVar4;
      if (uVar4 != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar4;
      }
      _objc_storeStrong(&local_50);
      _objc_storeStrong(local_48,0);
      if (uVar4 != 0) goto LAB_002ab424;
    }
    uVar4 = local_20;
    (*DAT_028c9798)(local_20,local_28,local_29 & 1);
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar4;
  }
  else {
    uVar4 = local_20;
    (*DAT_028c9798)(local_20,local_28,local_29 & 1);
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar4;
  }
LAB_002ab424:
  _objc_autoreleaseReturnValue(local_18);
  return;
}

