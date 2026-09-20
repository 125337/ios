// FUN_006b00f0 @ 006b00f0

void FUN_006b00f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong local_60;
  ulong local_38;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  if (DAT_028cbfe8 != (code *)0x0) {
    (*DAT_028cbfe8)(local_18,local_20,local_28);
  }
  uVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_likeMeUserList_026a6840);
  bVar1 = (uVar2 & 1) == 0;
  if (bVar1) {
    local_60 = 0;
  }
  else {
    local_60 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_likeMeUserList_026a6840);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_60;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_60;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  FUN_006a5acc(local_30);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return;
}

