// _WCRefineForceRefreshTransferAmountLabelsInView @ 00f1c2b8

void _WCRefineForceRefreshTransferAmountLabelsInView(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong local_1a0;
  ulong local_198;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  ulong local_e8;
  byte local_d9;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  undefined4 local_bc;
  long local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  uVar3 = local_b0;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  uVar4 = local_b0;
  if ((uVar3 & 1) == 0) {
    local_bc = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar3 = local_b0;
    if ((uVar4 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_c8 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      local_d0 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
      local_d9 = 0;
      bVar1 = false;
      if (uVar3 == 0) {
        uVar3 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_attributedText_0269fcf8);
        _objc_retainAutoreleasedReturnValue();
        local_d9 = 1;
        local_d8 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = uVar3 != 0;
      }
      if ((local_d9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_d8);
      }
      if (bVar1) {
        uVar4 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_attributedText_0269fcf8);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_d0;
        local_d0 = uVar5;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        (*(code *)PTR__objc_release_02578630)(uVar4);
      }
      uVar3 = local_d0;
      _WCRefineTextLooksLikeWalletBalanceAmount();
      if ((uVar3 & 1) != 0) {
        local_e8 = 0;
        lVar6 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
        if (lVar6 != 0) {
          uVar4 = local_d0;
          _WCRefineApplyWalletBalanceReplacementToText(lVar6,local_d0,local_b8);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_e8;
          local_e8 = uVar4;
          (*(code *)PTR__objc_release_02578630)(uVar3);
        }
        uVar3 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
        if ((uVar3 == 0) ||
           (uVar3 = local_e8,
           (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_isEqualToString__0269ccc8,local_d0),
           (uVar3 & 1) != 0)) {
          lVar6 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
          if (lVar6 == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setText__026caa88,local_d0);
          }
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setText__026caa88,local_e8);
        }
        _objc_storeStrong(&local_e8,0);
      }
      _objc_storeStrong(&local_d0);
      _objc_storeStrong(&local_c8,0);
    }
    _memset(auStack_130,0,0x40);
    uVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_198 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_198 != 0) {
      lVar6 = *local_120;
      local_1a0 = 0;
      do {
        do {
          if (*local_120 - lVar6 != 0) {
            _objc_enumerationMutation(*local_120 - lVar6,uVar3);
          }
          local_f0 = *(undefined8 *)(local_128 + local_1a0 * 8);
          _WCRefineForceRefreshTransferAmountLabelsInView(local_f0,local_b8);
          local_1a0 = local_1a0 + 1;
        } while (local_1a0 < local_198);
        local_198 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10
                  );
        local_1a0 = 0;
      } while (local_198 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    local_bc = 0;
  }
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

