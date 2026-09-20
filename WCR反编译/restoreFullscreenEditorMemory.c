// restoreFullscreenEditorMemory @ 0166e564

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::restoreFullscreenEditorMemory(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined *local_158;
  undefined *local_150;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  undefined4 local_d8;
  byte local_d1;
  ID local_d0;
  undefined *local_c8;
  undefined *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  FUN_0163fcbc();
  if ((param_1 & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_arrayForKey__026aac40,&cf_WCRSFCropFSRememberEffects);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_b0;
    local_c8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_rememberedLastAnnotateTool_026b25b0);
    puVar1 = local_c8;
    local_d1 = IVar2 == 8;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_d0 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((((ulong)puVar1 & 1) == 0) ||
        (puVar1 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0),
        puVar1 == (undefined *)0x0)) && ((local_d1 & 1) == 0)) {
      local_d8 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_setRestoringFullscreenEditorMemo_026b25b8,1);
      puVar1 = local_c8;
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
      if (((ulong)puVar1 & 1) != 0) {
        _memset(auStack_120,0,0x40);
        puVar1 = local_c8;
        (*(code *)PTR__objc_retain_02578638)();
        local_150 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                   0x10);
        if (local_150 != (undefined *)0x0) {
          lVar4 = *local_110;
          local_158 = (undefined *)0x0;
          do {
            do {
              if (*local_110 - lVar4 != 0) {
                _objc_enumerationMutation(*local_110 - lVar4,puVar1);
              }
              uVar5 = *(ulong *)(local_118 + (long)local_158 * 8);
              puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
              local_e0 = uVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
              if ((uVar5 & 1) != 0) {
                uVar5 = local_e0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_e0,PTR_s_isEqualToString__0269ccc8,&cf_watermark);
                if ((uVar5 & 1) == 0) {
                  uVar5 = local_e0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_e0,PTR_s_isEqualToString__0269ccc8,&cf_shell);
                  if ((uVar5 & 1) != 0) {
                    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_applyShellFrame_026b1d90);
                  }
                }
                else {
                  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_applyWatermark_026b1da8);
                }
              }
              local_158 = local_158 + 1;
            } while (local_158 < local_150);
            local_150 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8
                       ,0x10);
            local_158 = (undefined *)0x0;
          } while (local_150 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
      if ((local_d1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_enterAnnotateModeWithTool__026b25c0,8);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_setRestoringFullscreenEditorMemo_026b25b8,0);
      local_d8 = 0;
    }
    _objc_storeStrong(&local_c8);
    _objc_storeStrong(&local_c0,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

