// FUN_00629684 @ 00629684

void FUN_00629684(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong *param_4)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong local_1c0;
  ulong local_1b8;
  uint local_174;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  undefined8 local_100;
  byte local_f1;
  ulong local_f0;
  ulong local_e8 [3];
  uint local_cc;
  ulong *local_c8;
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
  uVar3 = local_c0;
  local_c8 = param_4;
  if (*param_4 == 0) {
    pcVar2 = &cf_TextMessageCellView;
    _NSClassFromString();
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,pcVar2);
    uVar4 = local_c0;
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_e8[0] = uVar4;
      local_f1 = 0;
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_accessibilityLabel_0269e1c8);
      _objc_retainAutoreleasedReturnValue();
      local_174 = 0;
      if (uVar4 != 0) {
        uVar3 = local_e8[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_e8[0],PTR_s_accessibilityLabel_0269e1c8);
        _objc_retainAutoreleasedReturnValue();
        local_f1 = 1;
        local_f0 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_174 = (uint)uVar3 ^ 1;
      }
      if ((local_f1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_f0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar4);
      uVar3 = local_e8[0];
      bVar1 = (local_174 & 1) != 0;
      if (bVar1) {
        _objc_retainAutorelease();
        *local_c8 = uVar3;
      }
      local_cc = (uint)bVar1;
      _objc_storeStrong(local_e8,0);
      if (local_cc != 0) goto LAB_00629ab0;
    }
    _memset(auStack_140,0,0x40);
    uVar3 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_1b8 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1b8 != 0) {
      lVar5 = *local_130;
      local_1c0 = 0;
      do {
        do {
          if (*local_130 - lVar5 != 0) {
            _objc_enumerationMutation(*local_130 - lVar5,uVar3);
          }
          local_100 = *(undefined8 *)(local_138 + local_1c0 * 8);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b0,PTR_s_findTextMessageCell_result__026a6020,local_100,local_c8);
          local_1c0 = local_1c0 + 1;
        } while (local_1c0 < local_1b8);
        local_1b8 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10
                  );
        local_1c0 = 0;
      } while (local_1b8 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    local_cc = 0;
  }
  else {
    local_cc = 1;
  }
LAB_00629ab0:
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

