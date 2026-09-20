// FUN_01d780e0 @ 01d780e0

void FUN_01d780e0(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined *local_298;
  undefined *local_290;
  ulong local_250;
  ulong local_248;
  ulong local_208 [3];
  ulong local_1f0;
  undefined1 auStack_1e8 [8];
  long local_1e0;
  long *local_1d8;
  undefined8 local_1a8;
  ulong local_1a0;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  ulong local_158;
  uint local_14c;
  ulong local_148;
  ulong local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_148 = 0;
  _objc_storeStrong(&local_148,param_1);
  uVar2 = local_148;
  puVar1 = PTR__OBJC_CLASS___UITextView_026ce1b8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UITextView_026ce1b8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar4 = local_148;
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar4 & 1) != 0) {
      _memset(auStack_198,0,0x40);
      uVar2 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_248 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_248 != 0) {
        lVar3 = *local_188;
        local_250 = 0;
        do {
          do {
            if (*local_188 - lVar3 != 0) {
              _objc_enumerationMutation(*local_188 - lVar3,uVar2);
            }
            uVar4 = *(ulong *)(local_190 + local_250 * 8);
            local_158 = uVar4;
            FUN_01d780e0();
            _objc_retainAutoreleasedReturnValue();
            local_1a0 = uVar4;
            if (uVar4 != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_140 = uVar4;
            }
            local_14c = (uint)(uVar4 != 0);
            _objc_storeStrong(&local_1a0,0);
            if (local_14c != 0) goto LAB_01d78360;
            local_250 = local_250 + 1;
          } while (local_250 < local_248);
          local_248 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,
                     0x10);
          local_250 = 0;
        } while (local_248 != 0);
      }
      local_14c = 0;
LAB_01d78360:
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if (local_14c != 0) goto LAB_01d78658;
    }
    _memset(auStack_1e8,0,0x40);
    local_138 = &cf_textView;
    local_130 = &cf__textView;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_138,
               2);
    _objc_retainAutoreleasedReturnValue();
    local_290 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_290 != (undefined *)0x0) {
      lVar3 = *local_1d8;
      local_298 = (undefined *)0x0;
      do {
        do {
          if (*local_1d8 - lVar3 != 0) {
            _objc_enumerationMutation(*local_1d8 - lVar3,puVar1);
          }
          local_1a8 = *(undefined8 *)(local_1e0 + (long)local_298 * 8);
          uVar2 = local_148;
          (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_valueForKey__0269d128,local_1a8);
          _objc_retainAutoreleasedReturnValue();
          local_1f0 = uVar2;
          if ((uVar2 == 0) || (uVar2 - local_148 == 0)) {
            local_14c = 5;
          }
          else {
            FUN_01d780e0(uVar2 - local_148);
            _objc_retainAutoreleasedReturnValue();
            local_208[0] = uVar2;
            if (uVar2 != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_140 = uVar2;
            }
            local_14c = (uint)(uVar2 != 0);
            _objc_storeStrong(local_208,0);
          }
          _objc_storeStrong(&local_1f0,0);
          if ((local_14c != 0) && (local_14c != 5)) goto LAB_01d785f4;
          local_298 = local_298 + 1;
        } while (local_298 < local_290);
        local_290 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,auStack_128,
                   0x10);
        local_298 = (undefined *)0x0;
      } while (local_290 != (undefined *)0x0);
    }
    local_14c = 0;
LAB_01d785f4:
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_14c == 0) {
      local_140 = 0;
      local_14c = 1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_140 = uVar4;
    local_14c = 1;
  }
LAB_01d78658:
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_140);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

