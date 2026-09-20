// FUN_0000ffec @ 0000ffec

void FUN_0000ffec(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  char *pcVar3;
  ulong uVar4;
  ulong local_70;
  uint local_68;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  undefined *local_38 [4];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = 0;
  _objc_storeStrong(&local_48,param_1);
  local_38[0] = PTR_s_getCurrentMessageWrap_0269d060;
  local_38[1] = PTR_s_getMessageWrap_0269d068;
  local_38[2] = PTR_s_messageWrap_0269d070;
  local_38[3] = PTR_s_msgWrap_0269d078;
  for (local_50 = 0; local_50 < 4; local_50 = local_50 + 1) {
    uVar2 = local_48;
    FUN_0001a198(local_48,local_38[local_50]);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = "CMessageWrap";
    local_58 = uVar2;
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,pcVar3);
    uVar4 = local_58;
    bVar1 = (uVar2 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_40 = uVar4;
    }
    local_68 = (uint)bVar1;
    _objc_storeStrong(&local_58,0);
    if (local_68 != 0) goto LAB_000101e4;
  }
  uVar4 = local_48;
  FUN_0001a198(local_48,PTR_s_viewModel_0269d080);
  _objc_retainAutoreleasedReturnValue();
  local_70 = uVar4;
  FUN_0001a198(uVar4,PTR_s_messageWrap_0269d070);
  _objc_retainAutoreleasedReturnValue();
  local_68 = 1;
  local_40 = uVar4;
  _objc_storeStrong(&local_70,0);
LAB_000101e4:
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_18) {
    _objc_autoreleaseReturnValue(0,local_40);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

