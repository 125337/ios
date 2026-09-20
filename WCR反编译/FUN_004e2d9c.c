// FUN_004e2d9c @ 004e2d9c

void FUN_004e2d9c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  ulong local_a8 [2];
  ulong local_98 [2];
  ulong local_88 [3];
  ulong local_70;
  ulong local_68;
  uint local_5c;
  ulong local_58;
  ulong local_50;
  undefined *local_48 [4];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = 0;
  _objc_storeStrong(&local_58,param_1);
  if (local_58 == 0) {
    local_50 = 0;
    local_5c = 1;
    goto LAB_004e3228;
  }
  local_48[0] = PTR_s_getCurrentMessageWrap_0269d060;
  local_48[1] = PTR_s_getMessageWrap_0269d068;
  local_48[2] = PTR_s_messageWrap_0269d070;
  local_48[3] = PTR_s_msgWrap_0269d078;
  for (local_68 = 0; local_68 < 4; local_68 = local_68 + 1) {
    uVar1 = local_58;
    FUN_004e3288(local_58,local_48[local_68]);
    _objc_retainAutoreleasedReturnValue();
    local_70 = uVar1;
    if (uVar1 != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_50 = uVar1;
    }
    local_5c = (uint)(uVar1 != 0);
    _objc_storeStrong(&local_70,0);
    if (local_5c != 0) goto LAB_004e3228;
  }
  uVar1 = local_58;
  FUN_004e3288(local_58,PTR_s_viewModel_0269d080);
  _objc_retainAutoreleasedReturnValue();
  local_88[0] = uVar1;
  if (uVar1 == 0) {
    uVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_valueForKey__0269d128,&cf_viewModel);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_88[0];
    local_88[0] = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  if ((local_88[0] == 0) ||
     (uVar1 = local_88[0],
     (*(code *)PTR__objc_msgSend_02578628)
               (local_88[0],PTR_s_respondsToSelector__026ca818,PTR_s_messageWrap_0269d070),
     (uVar1 & 1) == 0)) {
LAB_004e30e0:
    uVar1 = local_58;
    FUN_004e3288(local_58,PTR_s_getMediaWrap_026a4328);
    _objc_retainAutoreleasedReturnValue();
    local_a8[0] = uVar1;
    if (uVar1 == 0) {
LAB_004e31e8:
      local_50 = 0;
    }
    else {
      pcVar3 = "CMessageWrap";
      _objc_getClass();
      if (((pcVar3 != (char *)0x0) &&
          (uVar1 = local_a8[0],
          (*(code *)PTR__objc_msgSend_02578628)(local_a8[0],PTR_s_isKindOfClass__0269cd68,pcVar3),
          (uVar1 & 1) == 0)) &&
         (uVar1 = local_a8[0],
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_a8[0],PTR_s_respondsToSelector__026ca818,PTR_s_m_uiMessageType_0269d0a8),
         (uVar1 & 1) == 0)) goto LAB_004e31e8;
      uVar1 = local_a8[0];
      (*(code *)PTR__objc_retain_02578638)();
      local_50 = uVar1;
    }
    local_5c = 1;
    _objc_storeStrong(local_a8,0);
  }
  else {
    uVar1 = local_88[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_88[0],PTR_s_messageWrap_0269d070);
    _objc_retainAutoreleasedReturnValue();
    local_98[0] = uVar1;
    if (uVar1 != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_50 = uVar1;
    }
    local_5c = (uint)(uVar1 != 0);
    _objc_storeStrong(local_98,0);
    if (local_5c == 0) goto LAB_004e30e0;
  }
  _objc_storeStrong(local_88,0);
LAB_004e3228:
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_50);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

