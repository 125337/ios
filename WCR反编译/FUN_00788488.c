// FUN_00788488 @ 00788488

void FUN_00788488(undefined8 param_1)

{
  ulong uVar1;
  ulong local_88;
  ulong local_80;
  ulong local_78 [3];
  undefined *local_60;
  ulong local_58;
  uint local_4c;
  ulong local_48;
  ulong local_40;
  undefined *local_38 [4];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = 0;
  _objc_storeStrong(&local_48,param_1);
  if (local_48 == 0) {
    local_40 = 0;
    local_4c = 1;
  }
  else {
    local_38[0] = PTR_s_getCurrentMessageWrap_0269d060;
    local_38[1] = PTR_s_getMessageWrap_0269d068;
    local_38[2] = PTR_s_messageWrap_0269d070;
    local_38[3] = PTR_s_msgWrap_0269d078;
    for (local_58 = 0; local_58 < 4; local_58 = local_58 + 1) {
      local_60 = local_38[local_58];
      uVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_respondsToSelector__026ca818,local_60);
      if ((uVar1 & 1) != 0) {
        uVar1 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,local_60);
        _objc_retainAutoreleasedReturnValue();
        local_78[0] = uVar1;
        if (uVar1 != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_40 = uVar1;
        }
        local_4c = (uint)(uVar1 != 0);
        _objc_storeStrong(local_78,0);
        if (local_4c != 0) goto LAB_00788808;
      }
    }
    uVar1 = local_48;
    FUN_0077b4f8(local_58 - 4);
    if (((uVar1 & 1) != 0) &&
       (uVar1 = local_48,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_getMediaWrap_026a4328),
       (uVar1 & 1) != 0)) {
      uVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_getMediaWrap_026a4328);
      _objc_retainAutoreleasedReturnValue();
      local_80 = uVar1;
      if (uVar1 != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_40 = uVar1;
      }
      local_4c = (uint)(uVar1 != 0);
      _objc_storeStrong(&local_80,0);
      if (local_4c != 0) goto LAB_00788808;
    }
    uVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_viewModel_0269d080);
    if ((uVar1 & 1) != 0) {
      uVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_viewModel_0269d080);
      _objc_retainAutoreleasedReturnValue();
      local_88 = uVar1;
      if ((uVar1 == 0) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_messageWrap_0269d070),
         (uVar1 & 1) == 0)) {
        local_4c = 0;
      }
      else {
        uVar1 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_messageWrap_0269d070);
        _objc_retainAutoreleasedReturnValue();
        local_4c = 1;
        local_40 = uVar1;
      }
      _objc_storeStrong(&local_88,0);
      if (local_4c != 0) goto LAB_00788808;
    }
    local_40 = 0;
    local_4c = 1;
  }
LAB_00788808:
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_18) {
    _objc_autoreleaseReturnValue(0,local_40);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

