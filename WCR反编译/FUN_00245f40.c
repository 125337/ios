// FUN_00245f40 @ 00245f40

void FUN_00245f40(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *local_d0;
  ulong local_48;
  ulong local_40 [3];
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  FUN_00245dbc(local_20,&cf_m_nsFromUsr);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  FUN_00245428();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_20;
  FUN_00245dbc(local_20,&cf_m_nsToUsr);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  FUN_00245428();
  _objc_retainAutoreleasedReturnValue();
  local_40[0] = uVar1;
  (*(code *)PTR__objc_release_02578630)();
  FUN_00246a38();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_28;
  local_48 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf__chatroom);
  uVar2 = local_28;
  if ((uVar1 & 1) == 0) {
    uVar1 = local_40[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_containsString__0269d0b0,&cf__chatroom);
    uVar2 = local_40[0];
    if ((uVar1 & 1) == 0) {
      uVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
      if (uVar2 != 0) {
        uVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,local_48);
        uVar2 = local_40[0];
        if ((uVar1 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = uVar2;
          goto LAB_00246270;
        }
      }
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
      if (uVar2 == 0) {
        local_d0 = local_40;
      }
      else {
        local_d0 = &local_28;
      }
      uVar2 = *local_d0;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar2;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar2;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar2;
  }
LAB_00246270:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(local_40,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

