// FUN_00789f4c @ 00789f4c

void FUN_00789f4c(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong local_58;
  ulong local_48;
  ulong local_40;
  undefined *local_38 [4];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = 0;
  _objc_storeStrong(&local_48,param_1);
  if (local_48 == 0) {
    local_40 = 0;
  }
  else {
    local_38[0] = PTR_s_getCurrentMessageWrap_0269d060;
    local_38[1] = PTR_s_getMessageWrap_0269d068;
    local_38[2] = PTR_s_messageWrap_0269d070;
    local_38[3] = PTR_s_msgWrap_0269d078;
    for (local_58 = 0; local_58 < 4; local_58 = local_58 + 1) {
      puVar2 = local_38[local_58];
      uVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_respondsToSelector__026ca818,puVar2);
      if ((uVar1 & 1) != 0) {
        uVar1 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,puVar2);
        _objc_retainAutoreleasedReturnValue();
        local_40 = uVar1;
        goto LAB_0078a194;
      }
    }
    uVar1 = local_48;
    FUN_0077b4f8(local_58 - 4);
    if ((uVar1 & 1) != 0) {
      uVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_getMediaWrap_026a4328);
      if ((uVar1 & 1) != 0) {
        uVar1 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_getMediaWrap_026a4328);
        _objc_retainAutoreleasedReturnValue();
        local_40 = uVar1;
        goto LAB_0078a194;
      }
    }
    puVar2 = PTR_s_viewModel_0269d080;
    uVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_viewModel_0269d080);
    if ((uVar1 & 1) == 0) {
      local_40 = 0;
    }
    else {
      uVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,puVar2);
      _objc_retainAutoreleasedReturnValue();
      local_40 = uVar1;
    }
  }
LAB_0078a194:
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_40);
  return;
}

