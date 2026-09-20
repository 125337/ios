// FUN_00031e08 @ 00031e08

byte FUN_00031e08(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *local_48;
  undefined *local_40;
  undefined4 local_38;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar5 = local_20;
  FUN_000334bc();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar5;
  if (uVar5 == 0) {
    local_11 = 0;
    local_38 = 1;
    goto LAB_00032184;
  }
  puVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_00032774();
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar2;
  (*(code *)PTR__objc_release_02578630)();
  if (local_40 == (undefined *)0x0) {
    FUN_00032e7c();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    FUN_00032774();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_40;
    local_40 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  puVar1 = local_40;
  FUN_00033060();
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
  uVar5 = 0;
  if (puVar1 == (undefined *)0x0) {
LAB_000320e4:
    uVar4 = local_28;
    FUN_0003393c(uVar5);
    if ((uVar4 & 1) == 0) {
      uVar5 = local_28;
      FUN_00033648(local_28,0);
      local_11 = (byte)uVar5 & 1;
    }
    else {
      local_11 = 1;
    }
  }
  else {
    puVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,local_20);
    uVar4 = local_28;
    uVar5 = (ulong)puVar1 & 0xffffffff;
    if (((ulong)puVar1 & 1) != 0) goto LAB_000320e4;
    puVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    FUN_00033648();
    local_11 = (byte)uVar4 & 1;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  local_38 = 1;
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
LAB_00032184:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

