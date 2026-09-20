// FUN_0023f4c0 @ 0023f4c0

void FUN_0023f4c0(ulong param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong local_58;
  ulong local_40;
  bool local_31;
  ulong local_30;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028c9310)(param_1,param_2);
  uVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_contact_026a0d10);
  local_31 = false;
  bVar1 = (uVar2 & 1) == 0;
  if (bVar1) {
    local_58 = 0;
  }
  else {
    local_58 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_contact_026a0d10);
    _objc_retainAutoreleasedReturnValue();
    local_30 = local_58;
  }
  local_31 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_58;
  if ((local_31 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  uVar2 = local_28;
  FUN_0023fa84();
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar2;
  FUN_002406e8(0,uVar2,&cf_receiver_load,local_18);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_28,0);
  return;
}

