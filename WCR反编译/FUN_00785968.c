// FUN_00785968 @ 00785968

void FUN_00785968(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  ulong local_a8 [3];
  ulong local_90;
  ulong local_88;
  uint local_7c;
  ulong local_78;
  ulong local_70;
  undefined *local_68 [4];
  undefined *local_48 [4];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_78 = 0;
  _objc_storeStrong(&local_78,param_1);
  if (local_78 == 0) {
    local_70 = 0;
    local_7c = 1;
  }
  else {
    local_48[0] = PTR_s_getTextMessageCellView_026a8048;
    local_48[1] = PTR_s_textMessageCellView_026a8050;
    local_48[2] = PTR_s_contentView_026ca5a8;
    local_48[3] = PTR_s_bubbleView_026a8058;
    for (local_88 = 0; local_88 < 4; local_88 = local_88 + 1) {
      uVar2 = local_78;
      FUN_00786e84(local_78,local_48[local_88],local_78);
      _objc_retainAutoreleasedReturnValue();
      local_90 = uVar2;
      if (((uVar2 == 0) || (uVar2 - local_78 == 0)) ||
         (FUN_00787124(uVar2 - local_78), uVar1 = local_90, (uVar2 & 1) != 0)) {
        local_7c = 0;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_70 = uVar1;
        local_7c = 1;
      }
      _objc_storeStrong(&local_90,0);
      if (local_7c != 0) goto LAB_00785d8c;
    }
    uVar2 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_respondsToSelector__026ca818,PTR_s_viewModel_0269d080);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_viewModel_0269d080);
      _objc_retainAutoreleasedReturnValue();
      local_68[0] = PTR_s_getTextMessageCellView_026a8048;
      local_68[1] = PTR_s_textMessageCellView_026a8050;
      local_68[2] = PTR_s_contentView_026ca5a8;
      local_68[3] = PTR_s_bubbleView_026a8058;
      local_a8[0] = uVar2;
      for (local_b0 = 0; uVar2 = local_b0 - 4, local_b0 < 4; local_b0 = local_b0 + 1) {
        uVar2 = local_a8[0];
        FUN_00786e84(local_a8[0],local_68[local_b0],local_78);
        _objc_retainAutoreleasedReturnValue();
        local_b8 = uVar2;
        if (((uVar2 == 0) || (uVar2 - local_78 == 0)) ||
           (FUN_00787124(uVar2 - local_78), uVar1 = local_b8, (uVar2 & 1) != 0)) {
          local_7c = 0;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_70 = uVar1;
          local_7c = 1;
        }
        _objc_storeStrong(&local_b8,0);
        uVar2 = (ulong)local_7c;
        if (local_7c != 0) goto LAB_00785c98;
      }
      local_7c = 0;
LAB_00785c98:
      _objc_storeStrong(uVar2,local_a8,0);
      if (local_7c != 0) goto LAB_00785d8c;
    }
    uVar2 = local_78;
    FUN_00787390(local_78,local_78,0);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = uVar2;
    if ((uVar2 == 0) ||
       ((FUN_00787124(), uVar1 = local_c0, (uVar2 & 1) != 0 && (local_c0 == local_78)))) {
      local_70 = 0;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_70 = uVar1;
    }
    local_7c = 1;
    _objc_storeStrong(&local_c0,0);
  }
LAB_00785d8c:
  _objc_storeStrong(&local_78,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_70);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

