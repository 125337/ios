// FUN_0057f4bc @ 0057f4bc

void FUN_0057f4bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  long local_b0;
  long local_a8;
  long local_40;
  ulong local_30;
  ulong local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_b0 = *(long *)(param_1 + 0x30);
  lVar2 = *(long *)(param_1 + 0x38);
  local_a8 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_integerValue_026ca750);
  if (lVar2 < local_a8) {
    local_a8 = lVar2;
  }
  if (local_b0 < local_a8) {
    local_b0 = local_a8;
  }
  local_40 = local_b0;
  if (local_b0 < *(long *)(param_1 + 0x30)) {
    local_40 = *(long *)(param_1 + 0x30);
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),local_40);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_resignFirstResponder_0269ea18);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_resignFirstResponder_0269ea18);
  }
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_dismissWithAnimated__0269e420);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_dismissWithAnimated__0269e420,1);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}

