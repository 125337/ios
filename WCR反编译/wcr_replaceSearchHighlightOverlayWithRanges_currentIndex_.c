// wcr_replaceSearchHighlightOverlayWithRanges:currentIndex: @ 01967eb4

/* Function Stack Size: 0x20 bytes */

void WCRefineFileManagerPreviewViewController::
     wcr_replaceSearchHighlightOverlayWithRanges_currentIndex_
               (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *local_240;
  ulong local_228;
  undefined *local_1e0;
  undefined *local_1d8;
  undefined *local_1b0;
  undefined *local_190;
  ulong local_188;
  undefined *local_180;
  ulong local_178;
  undefined *local_170;
  ulong local_168;
  undefined8 local_160;
  ulong local_158;
  ulong local_150;
  undefined *local_148;
  undefined *local_140;
  long local_138;
  undefined *local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  long local_e8;
  undefined *local_e0;
  undefined4 local_d4;
  undefined *local_d0;
  long_long local_c8;
  ulong local_c0;
  SEL local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = (undefined *)param_1;
  _objc_storeStrong(&local_c0,param_3);
  puVar1 = local_b0;
  local_c8 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_editor_026b9fa0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (local_d0 == (undefined *)0x0) {
    local_d4 = 1;
  }
  else {
    puVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_searchHighlightRanges_026ba090);
    _objc_retainAutoreleasedReturnValue();
    local_1b0 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_1b0 = *(undefined **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_e0 = local_1b0;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_beginEditing_026b9ff8);
    _memset(auStack_128,0,0x40);
    puVar1 = local_e0;
    (*(code *)PTR__objc_retain_02578638)();
    local_1d8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
    if (local_1d8 != (undefined *)0x0) {
      lVar6 = *local_118;
      local_1e0 = (undefined *)0x0;
      do {
        do {
          if (*local_118 - lVar6 != 0) {
            _objc_enumerationMutation(*local_118 - lVar6,puVar1);
          }
          lVar7 = *(long *)(local_120 + (long)local_1e0 * 8);
          puVar5 = PTR_s_rangeValue_026ba098;
          local_e8 = lVar7;
          (*(code *)PTR__objc_msgSend_02578628)();
          puVar2 = local_d0;
          local_138 = lVar7;
          local_130 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
          if (puVar5 + lVar7 <= puVar2) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d0,PTR_s_removeAttribute_range__026ba0a0,
                       *(undefined8 *)PTR__NSBackgroundColorAttributeName_02578058,local_138,
                       local_130);
          }
          local_1e0 = local_1e0 + 1;
        } while (local_1e0 < local_1d8);
        local_1d8 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                   0x10);
        local_1e0 = (undefined *)0x0;
      } while (local_1d8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemYellowColor_0269f758);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_02323c78);
    _objc_retainAutoreleasedReturnValue();
    local_140 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemOrangeColor_026cab80);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_02323db8);
    _objc_retainAutoreleasedReturnValue();
    local_148 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    uVar3 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
    local_160 = 200;
    local_228 = uVar3;
    if (199 < uVar3) {
      local_228 = 200;
    }
    local_168 = local_228;
    local_150 = local_228;
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_158 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithCapacity__0269d9b8,local_228
              );
    _objc_retainAutoreleasedReturnValue();
    local_170 = puVar1;
    for (local_178 = 0; local_178 < local_150; local_178 = local_178 + 1) {
      uVar3 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_objectAtIndexedSubscript__0269cc78,local_178);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      puVar1 = PTR_s_rangeValue_026ba098;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_188 = uVar4;
      local_180 = puVar1;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      puVar1 = local_180 + local_188;
      puVar2 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
      if (puVar1 <= puVar2) {
        if (local_178 == local_c8) {
          local_240 = local_148;
        }
        else {
          local_240 = local_140;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_190 = local_240;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_addAttribute_value_range__026a1d88,
                   *(undefined8 *)PTR__NSBackgroundColorAttributeName_02578058,local_240,local_188,
                   local_180);
        puVar1 = local_170;
        uVar3 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_objectAtIndexedSubscript__0269cc78,local_178);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(uVar3);
        _objc_storeStrong(&local_190,0);
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_endEditing_026ba018);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_setSearchHighlightRanges__026b9e08,local_170);
    _objc_storeStrong(&local_170);
    _objc_storeStrong(&local_148,0);
    _objc_storeStrong(&local_140,0);
    _objc_storeStrong(&local_e0,0);
    local_d4 = 0;
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

