// FUN_00441cc4 @ 00441cc4

void FUN_00441cc4(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *local_a0;
  uint local_6c;
  undefined *local_60;
  undefined8 local_58;
  byte local_49;
  undefined8 local_48;
  undefined8 local_30;
  undefined8 local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_30 = 0;
  local_28 = param_3;
  local_20 = param_2;
  _objc_storeStrong(&local_30,param_4);
  local_49 = 0;
  puVar1 = PTR_WCRefineLocalEmoticonStore_026ce440;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_isEnabled_026a0ef0);
  local_6c = 0;
  if (((ulong)puVar1 & 1) != 0) {
    uVar2 = local_30;
    FUN_00450ff4();
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    local_48 = uVar2;
    FUN_004514e4();
    local_6c = (uint)uVar2;
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  if ((local_6c & 1) == 0) {
    puVar1 = local_20;
    (*DAT_028caa18)(local_20,local_28,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar1;
  }
  else {
    _CFAbsoluteTimeGetCurrent();
    puVar1 = PTR_WCRefineLocalEmoticonStore_026ce440;
    local_58 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_boardEmoticonWraps_026a3c88);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_a0 = *(undefined **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_a0;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_60;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar1;
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

