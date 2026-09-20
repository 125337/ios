// FUN_005fea9c @ 005fea9c

void FUN_005fea9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4,
                 ulong *param_5,ulong *param_6)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong local_1d0;
  ulong local_1c8;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  undefined8 local_110;
  cfstringStruct *local_108;
  ulong local_100;
  byte local_f5;
  cfstringStruct *local_e8;
  uint local_dc;
  ulong *local_d8;
  ulong *local_d0;
  byte local_c1;
  ulong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  local_d8 = param_6;
  local_d0 = param_5;
  local_c1 = param_4;
  if (*param_5 == 0) {
    pcVar2 = &cf_CommonMessageCellView;
    _NSClassFromString();
    local_e8 = pcVar2;
    if ((pcVar2 != (cfstringStruct *)0x0) &&
       (uVar3 = local_c0,
       (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_isKindOfClass__0269cd68,pcVar2),
       uVar4 = local_c0, (uVar3 & 1) != 0)) {
      if (*local_d8 == 0) {
        _objc_retainAutorelease();
        *local_d8 = uVar4;
      }
      local_f5 = 0;
      local_100 = 0;
      pcVar2 = &cf_viewModel;
      _NSSelectorFromString();
      uVar4 = local_c0;
      local_108 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_respondsToSelector__026ca818,pcVar2);
      if ((uVar4 & 1) != 0) {
        uVar3 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)(local_c0,local_108);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = local_100;
        local_100 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar4);
      }
      if ((local_100 != 0) &&
         (uVar4 = local_100,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_100,PTR_s_respondsToSelector__026ca818,PTR_s_isSender_0269d1b0),
         (uVar4 & 1) != 0)) {
        uVar4 = local_100;
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_isSender_0269d1b0);
        local_f5 = (byte)uVar4;
      }
      uVar4 = local_c0;
      bVar1 = (local_f5 & 1) == (local_c1 & 1);
      if (bVar1) {
        _objc_retainAutorelease(0);
        *local_d0 = uVar4;
      }
      local_dc = (uint)bVar1;
      _objc_storeStrong(&local_100,0);
      if (local_dc != 0) goto LAB_005fef18;
    }
    _memset(auStack_150,0,0x40);
    uVar4 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_1c8 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1c8 != 0) {
      lVar5 = *local_140;
      local_1d0 = 0;
      do {
        do {
          if (*local_140 - lVar5 != 0) {
            _objc_enumerationMutation(*local_140 - lVar5,uVar4);
          }
          local_110 = *(undefined8 *)(local_148 + local_1d0 * 8);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b0,PTR_s_findCommonMessageCell_preferSend_026a5de0,local_110,local_c1 & 1
                     ,local_d0,local_d8);
          if (*local_d0 != 0) {
            local_dc = 1;
            goto LAB_005feef0;
          }
          local_1d0 = local_1d0 + 1;
        } while (local_1d0 < local_1c8);
        local_1c8 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,0x10
                  );
        local_1d0 = 0;
      } while (local_1c8 != 0);
    }
    local_dc = 0;
LAB_005feef0:
    (*(code *)PTR__objc_release_02578630)(uVar4);
    if (local_dc == 0) {
      local_dc = 0;
    }
  }
  else {
    local_dc = 1;
  }
LAB_005fef18:
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

