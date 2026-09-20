// processLocalWatermarkResults: @ 017fe5bc

/* Function Stack Size: 0x18 bytes */

void WCRefineAssistFunctionViewController::processLocalWatermarkResults_
               (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *local_320;
  undefined *local_318;
  ulong local_2b0;
  ulong local_2a8;
  undefined *local_288;
  undefined4 local_280;
  undefined4 local_27c;
  code *local_278;
  undefined *local_270;
  undefined8 *local_268;
  undefined8 *local_260;
  undefined8 *local_258;
  undefined1 auStack_250 [8];
  long local_248;
  long *local_240;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 *local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined8 local_1f0;
  undefined8 local_1d8;
  undefined8 *local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined *local_1c0;
  undefined8 local_1b8;
  undefined8 *local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined4 local_194;
  undefined1 auStack_190 [8];
  long local_188;
  long *local_180;
  ulong local_150;
  undefined *local_148;
  ulong local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = 0;
  local_138 = param_2;
  local_130 = param_1;
  _objc_storeStrong(&local_140,param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_148 = puVar2;
  _memset(auStack_190,0,0x40);
  uVar1 = local_140;
  (*(code *)PTR__objc_retain_02578638)();
  local_2a8 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,0x10);
  if (local_2a8 != 0) {
    lVar7 = *local_180;
    local_2b0 = 0;
    do {
      do {
        if (*local_180 - lVar7 != 0) {
          _objc_enumerationMutation(*local_180 - lVar7,uVar1);
        }
        uVar8 = *(ulong *)(local_188 + local_2b0 * 8);
        local_150 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_itemProvider_026b3100);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
        uVar3 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_canLoadObjectOfClass__026b3108,puVar2);
        (*(code *)PTR__objc_release_02578630)(uVar8);
        if ((uVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_addObject__0269d180,local_150);
        }
        local_2b0 = local_2b0 + 1;
      } while (local_2b0 < local_2a8);
      local_2a8 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,0x10);
      local_2b0 = 0;
    } while (local_2a8 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar2 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_count_0269cfe0);
  if (puVar2 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__gbVGr);
    local_194 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_captureMediaDarkModeSnapshot_026a1f00);
    local_1b0 = &local_1b8;
    local_1b8 = 0;
    local_1a8 = 0x20000000;
    local_1a4 = 0x20;
    local_1a0 = 0;
    local_1d0 = &local_1d8;
    local_1d8 = 0;
    local_1c8 = 0x20000000;
    local_1c4 = 0x20;
    puVar4 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_count_0269cfe0);
    puVar2 = PTR_WCRefineHelper_026ce000;
    local_200 = &local_208;
    local_208 = 0;
    local_1f8 = 0x20000000;
    local_1f4 = 0x20;
    local_1f0 = 0;
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_1c0 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf___);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_showModernToast__0269ce78);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _memset(auStack_250,0,0x40);
    puVar2 = local_148;
    (*(code *)PTR__objc_retain_02578638)();
    local_318 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_250,auStack_128,0x10);
    if (local_318 != (undefined *)0x0) {
      lVar7 = *local_240;
      local_320 = (undefined *)0x0;
      do {
        do {
          if (*local_240 - lVar7 != 0) {
            _objc_enumerationMutation(*local_240 - lVar7,puVar2);
          }
          uVar9 = *(undefined8 *)(local_248 + (long)local_320 * 8);
          local_210 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_itemProvider_026b3100);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___UIImage_026cdfd0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
          local_288 = PTR___NSConcreteStackBlock_02578660;
          local_280 = 0xc2000000;
          local_27c = 0;
          local_278 = FUN_017fec58;
          local_270 = &DAT_025896c8;
          local_268 = &local_1b8;
          local_260 = &local_1d8;
          local_258 = &local_208;
          uVar6 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar9,PTR_s_loadObjectOfClass_completionHand_026b3118,puVar4,&local_288);
          _objc_unsafeClaimAutoreleasedReturnValue(uVar6);
          (*(code *)PTR__objc_release_02578630)(uVar9);
          local_320 = local_320 + 1;
        } while (local_320 < local_318);
        local_318 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_250,auStack_128,
                   0x10);
        local_320 = (undefined *)0x0;
      } while (local_318 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    __Block_object_dispose(&local_208,8);
    __Block_object_dispose(&local_1d8,8);
    __Block_object_dispose(&local_1b8,8);
    local_194 = 0;
  }
  _objc_storeStrong(&local_148);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

