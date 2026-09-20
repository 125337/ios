// FUN_00299a70 @ 00299a70

void FUN_00299a70(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_60;
  ulong local_58;
  uint local_4c;
  ulong local_48;
  ulong local_40 [3];
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_002992e0();
  _objc_retainAutoreleasedReturnValue();
  local_40[0] = 0;
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_dataItem_026a13c8);
  if ((uVar1 & 1) != 0) {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_dataItem_026a13c8);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_40[0];
    local_40[0] = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  if (local_40[0] != 0) {
    uVar1 = local_40[0];
    FUN_002774b0();
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar1;
    if (uVar1 != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar1;
    }
    local_4c = (uint)(uVar1 != 0);
    _objc_storeStrong(&local_48,0);
    if (local_4c != 0) goto LAB_00299d0c;
  }
  uVar1 = local_20;
  FUN_002993d8();
  _objc_retainAutoreleasedReturnValue();
  local_58 = uVar1;
  FUN_0029a48c();
  _objc_retainAutoreleasedReturnValue();
  local_60 = uVar1;
  if (uVar1 == 0) {
    local_18 = 0;
  }
  else {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_setDataItem__026a18b0);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setDataItem__026a18b0,local_60);
    }
    uVar1 = local_60;
    FUN_002774b0();
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar1;
  }
  local_4c = 1;
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
LAB_00299d0c:
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

