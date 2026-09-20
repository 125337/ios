// FUN_006c1ff4 @ 006c1ff4

void FUN_006c1ff4(undefined8 param_1)

{
  ulong uVar1;
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
    local_38[0] = PTR_s_messageWrap_0269d070;
    local_38[1] = PTR_s_getMessageWrap_0269d068;
    local_38[2] = PTR_s_getCurrentMessageWrap_0269d060;
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
        if (local_4c != 0) goto LAB_006c21dc;
      }
    }
    local_40 = 0;
    local_4c = 1;
  }
LAB_006c21dc:
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_18) {
    _objc_autoreleaseReturnValue(0,local_40);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

