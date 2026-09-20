// FUN_000694f8 @ 000694f8

byte FUN_000694f8(undefined8 param_1)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined *local_188;
  undefined *local_180;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  undefined8 local_100;
  ulong local_f8;
  int local_f0;
  undefined1 local_e9;
  ulong local_e8;
  ulong local_e0;
  byte local_d1;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e0 = 0;
  _objc_storeStrong(&local_e0,param_1);
  uVar4 = local_e0;
  puVar3 = PTR__OBJC_CLASS___UIScrollView_026ce1a0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIScrollView_026ce1a0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_e9 = 0;
  bVar2 = true;
  uVar1 = (uVar4 & 1) != 0;
  if ((bool)uVar1) {
    uVar4 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = uVar4 == 0;
    local_e9 = uVar1;
    local_e8 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar1 = local_e9;
  }
  local_e9 = uVar1;
  uVar4 = local_e0;
  if (bVar2) {
    local_d1 = 0;
    local_f0 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UITextView_026ce1b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITextView_026ce1b8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar4 & 1) == 0) {
      uVar4 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_isPagingEnabled_0269dce8);
      if ((uVar4 & 1) == 0) {
        uVar4 = local_e0;
        FUN_00067434();
        if ((uVar4 & 1) == 0) {
          uVar4 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_class_0269cd60);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          local_f8 = uVar4;
          _memset(auStack_140,0,0x40);
          local_d0 = &cf_UIKB;
          local_c8 = &cf__UIKB;
          local_c0 = &cf_UIInputSet;
          local_b8 = &cf_UICompatibilityInput;
          local_b0 = &cf_UIRemoteKeyboard;
          puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_d0,5);
          _objc_retainAutoreleasedReturnValue();
          local_180 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_180 != (undefined *)0x0) {
            lVar5 = *local_130;
            local_188 = (undefined *)0x0;
            do {
              do {
                if (*local_130 - lVar5 != 0) {
                  _objc_enumerationMutation(*local_130 - lVar5,puVar3);
                }
                local_100 = *(undefined8 *)(local_138 + (long)local_188 * 8);
                uVar4 = local_f8;
                (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_hasPrefix__0269d320,local_100);
                if ((uVar4 & 1) != 0) {
                  local_d1 = 0;
                  local_f0 = 1;
                  goto LAB_000698cc;
                }
                local_188 = local_188 + 1;
              } while (local_188 < local_180);
              local_180 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,
                         auStack_a8,0x10);
              local_188 = (undefined *)0x0;
            } while (local_180 != (undefined *)0x0);
          }
          local_f0 = 0;
LAB_000698cc:
          (*(code *)PTR__objc_release_02578630)(puVar3);
          if (local_f0 == 0) {
            local_d1 = 1;
            local_f0 = 1;
          }
          _objc_storeStrong(&local_f8,0);
        }
        else {
          local_d1 = 0;
          local_f0 = 1;
        }
      }
      else {
        local_d1 = 0;
        local_f0 = 1;
      }
    }
    else {
      local_d1 = 0;
      local_f0 = 1;
    }
  }
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_d1 & 1;
}

