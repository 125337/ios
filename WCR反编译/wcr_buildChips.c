// wcr_buildChips @ 01695c48

/* Function Stack Size: 0x10 bytes */

void WCRWordSegPickerController::wcr_buildChips(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ID IVar4;
  long lVar5;
  ulong local_2f0;
  ulong local_2e8;
  undefined *local_2b0;
  undefined *local_290;
  ulong local_260;
  ulong local_258;
  undefined *local_238;
  undefined1 auStack_230 [8];
  long local_228;
  long *local_220;
  undefined8 local_1f0;
  undefined *local_1e8;
  byte local_1d9;
  undefined *local_1d8;
  byte local_1c9;
  undefined *local_1c8;
  undefined *local_1c0;
  byte local_1b1;
  undefined *local_1b0;
  byte local_1a1;
  undefined *local_1a0;
  undefined *local_198;
  byte local_18d;
  undefined1 auStack_180 [8];
  long local_178;
  long *local_170;
  undefined8 local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = param_2;
  local_130 = param_1;
  _memset(auStack_180,0,0x40);
  IVar1 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_chipViews_026b29c8);
  _objc_retainAutoreleasedReturnValue();
  local_258 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_258 != 0) {
    lVar5 = *local_170;
    local_260 = 0;
    do {
      do {
        if (*local_170 - lVar5 != 0) {
          _objc_enumerationMutation(*local_170 - lVar5,IVar1);
        }
        local_140 = *(undefined8 *)(local_178 + local_260 * 8);
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_removeFromSuperview_026ca800);
        local_260 = local_260 + 1;
      } while (local_260 < local_258);
      local_258 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,0x10);
      local_260 = 0;
    } while (local_258 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_chipViews_026b29c8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_wcr_isDark_026b29d0);
  local_18d = (byte)IVar1;
  local_1a1 = 0;
  local_1b1 = 0;
  local_290 = PTR__OBJC_CLASS___UIColor_026cdf78;
  if ((IVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323d48,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_1b1 = 1;
    local_1b0 = local_290;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323da8,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_1a1 = 1;
    local_1a0 = local_290;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_198 = local_290;
  if ((local_1b1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1b0);
  }
  if ((local_1a1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1a0);
  }
  local_1c9 = 0;
  local_1d9 = 0;
  local_2b0 = PTR__OBJC_CLASS___UIColor_026cdf78;
  if ((local_18d & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323cc0,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_1d9 = 1;
    local_1d8 = local_2b0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323e70,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_1c9 = 1;
    local_1c8 = local_2b0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_1c0 = local_2b0;
  if ((local_1d9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1d8);
  }
  if ((local_1c9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1c8);
  }
  puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4030000000000000,*(undefined8 *)PTR__UIFontWeightMedium_02578150,
             PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
  _objc_retainAutoreleasedReturnValue();
  local_1e8 = puVar2;
  _memset(auStack_230,0,0x40);
  IVar1 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_tokens_026b29d8);
  _objc_retainAutoreleasedReturnValue();
  local_2e8 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_2e8 != 0) {
    lVar5 = *local_220;
    local_2f0 = 0;
    do {
      do {
        if (*local_220 - lVar5 != 0) {
          _objc_enumerationMutation(*local_220 - lVar5,IVar1);
        }
        local_1f0 = *(undefined8 *)(local_228 + local_2f0 * 8);
        puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
        _objc_alloc_init();
        uVar3 = local_1f0;
        local_238 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1f0,PTR_s_objectForKeyedSubscript__0269d098,&cf_text);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_setText__026caa88);
        (*(code *)PTR__objc_release_02578630)(uVar3);
        (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_setFont__026ca958,local_1e8);
        (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_setTextAlignment__026caa90,1);
        (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_setTextColor__026caa98,local_1c0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_238,PTR_s_setBackgroundColor__026ca888,local_198);
        puVar2 = local_238;
        (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(0x4020000000000000);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_setClipsToBounds__026ca8c8,1);
        (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_setUserInteractionEnabled__026caad8,0)
        ;
        IVar4 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_chipHost_026b29e0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar4);
        IVar4 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_chipViews_026b29c8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar4);
        _objc_storeStrong(&local_238,0);
        local_2f0 = local_2f0 + 1;
      } while (local_2f0 < local_2e8);
      local_2e8 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_230,auStack_128,0x10)
      ;
      local_2f0 = 0;
    } while (local_2e8 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(0,local_130,PTR_s_setLastChipWidth__026b29e8);
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_wcr_relayoutChipsIfNeeded_026b29c0);
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_wcr_refreshChipColors_026b29f0);
  _objc_storeStrong(&local_1e8);
  _objc_storeStrong(&local_1c0,0);
  _objc_storeStrong(&local_198,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

