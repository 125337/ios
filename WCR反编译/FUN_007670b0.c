// FUN_007670b0 @ 007670b0

void FUN_007670b0(undefined8 param_1,byte param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong local_278;
  ulong local_270;
  undefined *local_230;
  undefined *local_228;
  undefined1 auStack_1f0 [8];
  long local_1e8;
  long *local_1e0;
  ulong local_1b0;
  cfstringStruct *local_1a8;
  ulong local_1a0;
  undefined8 local_198;
  undefined1 auStack_190 [8];
  long local_188;
  long *local_180;
  undefined8 local_150;
  undefined4 local_148;
  byte local_141;
  ulong local_140;
  undefined1 auStack_138 [128];
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = 0;
  _objc_storeStrong(&local_140,param_1);
  uVar2 = local_140;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_141 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_148 = 1;
  }
  else {
    _memset(auStack_190,0,0x40);
    local_b8 = &cf_placeholderTransitionFromView;
    local_b0 = &cf_placeholderTransitionToView;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b8,2
              );
    _objc_retainAutoreleasedReturnValue();
    local_228 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_228 != (undefined *)0x0) {
      lVar5 = *local_180;
      local_230 = (undefined *)0x0;
      do {
        do {
          if (*local_180 - lVar5 != 0) {
            _objc_enumerationMutation(*local_180 - lVar5,puVar1);
          }
          uVar6 = *(undefined8 *)(local_188 + (long)local_230 * 8);
          local_150 = uVar6;
          _NSSelectorFromString();
          uVar2 = local_140;
          local_198 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_respondsToSelector__026ca818,uVar6);
          if ((uVar2 & 1) != 0) {
            uVar2 = local_140;
            (*(code *)PTR__objc_msgSend_02578628)(local_140,local_198);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
            local_1a0 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
            if ((uVar2 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1a0,PTR_s_setHidden__026ca970,local_141 & 1);
            }
            _objc_storeStrong(&local_1a0,0);
          }
          local_230 = local_230 + 1;
        } while (local_230 < local_228);
        local_228 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,
                   0x10);
        local_230 = (undefined *)0x0;
      } while (local_228 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    pcVar4 = &cf_MMTextPlaceholderView;
    _NSClassFromString();
    local_1a8 = pcVar4;
    if (pcVar4 != (cfstringStruct *)0x0) {
      _memset(auStack_1f0,0,0x40);
      uVar2 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_270 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_270 != 0) {
        lVar5 = *local_1e0;
        local_278 = 0;
        do {
          do {
            if (*local_1e0 - lVar5 != 0) {
              _objc_enumerationMutation(*local_1e0 - lVar5,uVar2);
            }
            uVar7 = *(ulong *)(local_1e8 + local_278 * 8);
            local_1b0 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,local_1a8);
            if ((uVar7 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1b0,PTR_s_setHidden__026ca970,local_141 & 1);
            }
            local_278 = local_278 + 1;
          } while (local_278 < local_270);
          local_270 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_138,
                     0x10);
          local_278 = 0;
        } while (local_270 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    if ((local_141 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_setNeedsDisplay_026a3050);
    }
    local_148 = 0;
  }
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

