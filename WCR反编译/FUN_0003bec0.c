// FUN_0003bec0 @ 0003bec0

void FUN_0003bec0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *local_f0;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  undefined4 local_50;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  uVar1 = local_30;
  FUN_0003102c();
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  uVar2 = local_40;
  if (uVar1 != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar2;
    local_50 = 1;
    goto LAB_0003c23c;
  }
  FUN_0003c2b0(0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_38;
  local_58 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_m_nsFromUsr_0269d088);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  FUN_0003102c();
  _objc_retainAutoreleasedReturnValue();
  local_60 = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_m_nsToUsr_0269d090);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  FUN_0003102c();
  _objc_retainAutoreleasedReturnValue();
  local_68 = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
LAB_0003c17c:
    uVar2 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
    if (uVar2 == 0) {
      local_f0 = &local_60;
    }
    else {
      local_f0 = &local_68;
    }
    uVar2 = *local_f0;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar2;
  }
  else {
    uVar1 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_isEqualToString__0269ccc8,local_58);
    uVar2 = local_60;
    if ((uVar1 & 1) != 0) goto LAB_0003c17c;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar2;
  }
  local_50 = 1;
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
LAB_0003c23c:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

