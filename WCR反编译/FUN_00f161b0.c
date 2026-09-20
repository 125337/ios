// FUN_00f161b0 @ 00f161b0

void FUN_00f161b0(undefined8 param_1)

{
  ulong uVar1;
  ulong local_60;
  undefined *local_58;
  ulong local_50;
  uint local_44;
  ulong local_40;
  ulong local_38;
  undefined *local_30 [3];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = 0;
  _objc_storeStrong(&local_40,param_1);
  if (local_40 == 0) {
    local_38 = 0;
    local_44 = 1;
  }
  else {
    local_30[0] = PTR_s_m_oWCPayInfoItem_0269d6f0;
    local_30[1] = PTR_s_m_payInfoItem_026abd68;
    local_30[2] = PTR_s_payInfoItem_026abd70;
    for (local_50 = 0; local_50 < 3; local_50 = local_50 + 1) {
      local_58 = local_30[local_50];
      uVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_respondsToSelector__026ca818,local_58);
      if ((uVar1 & 1) != 0) {
        uVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,local_58);
        _objc_retainAutoreleasedReturnValue();
        local_60 = uVar1;
        if (uVar1 != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_38 = uVar1;
        }
        local_44 = (uint)(uVar1 != 0);
        _objc_storeStrong(&local_60,0);
        if (local_44 != 0) goto LAB_00f16304;
      }
    }
    local_38 = 0;
    local_44 = 1;
  }
LAB_00f16304:
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_18) {
    _objc_autoreleaseReturnValue(0,local_38);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

