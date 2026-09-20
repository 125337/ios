// sessionUserNameFromWrap:sessionHint: @ 00f23884

/* Function Stack Size: 0x20 bytes */

ID WCRefineDoNotDisturbSupport::sessionUserNameFromWrap_sessionHint_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_b8;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  undefined4 local_44;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  uVar1 = local_38;
  FUN_00f21dc0();
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar1;
  FUN_00f222d0();
  uVar2 = local_40;
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar2;
    local_44 = 1;
    goto LAB_00f23bb8;
  }
  if (local_30 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar2;
    local_44 = 1;
    goto LAB_00f23bb8;
  }
  uVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_m_nsFromUsr);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  FUN_00f21dc0();
  _objc_retainAutoreleasedReturnValue();
  local_50 = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_m_nsToUsr);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  FUN_00f21dc0();
  _objc_retainAutoreleasedReturnValue();
  local_58 = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar1 = local_50;
  FUN_00f222d0();
  uVar2 = local_50;
  if ((uVar1 & 1) == 0) {
    uVar1 = local_58;
    FUN_00f222d0();
    uVar2 = local_58;
    if ((uVar1 & 1) == 0) {
      FUN_00f23bf0();
      _objc_retainAutoreleasedReturnValue();
      local_60 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
      if (uVar1 == 0) {
LAB_00f23b24:
        uVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
        if (uVar2 == 0) {
          local_b8 = local_58;
        }
        else {
          local_b8 = local_50;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = local_b8;
      }
      else {
        uVar1 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,local_60);
        uVar2 = local_58;
        if ((uVar1 & 1) == 0) {
          uVar1 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isEqualToString__0269ccc8,local_60);
          uVar2 = local_50;
          if ((uVar1 & 1) == 0) goto LAB_00f23b24;
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = uVar2;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = uVar2;
        }
      }
      local_44 = 1;
      _objc_storeStrong(&local_60,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar2;
      local_44 = 1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar2;
    local_44 = 1;
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
LAB_00f23bb8:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

