// FUN_0033d694 @ 0033d694

void FUN_0033d694(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  long lVar5;
  undefined *local_178;
  undefined *local_170;
  ulong local_150 [3];
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  int local_ec;
  ulong local_e8;
  ulong local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e8 = 0;
  _objc_storeStrong(&local_e8,param_1);
  if ((local_e8 == 0) || (local_e8 < 0x1000)) {
    local_e0 = 0;
    local_ec = 1;
  }
  else {
    _memset(auStack_138,0,0x40);
    local_d8 = &cf_poster;
    local_d0 = &cf_m_poster;
    local_c8 = &cf_timelinePoster;
    local_c0 = &cf_m_timelinePoster;
    local_b8 = &cf_postSessionController;
    local_b0 = &cf_m_postSessionController;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_d8,6
              );
    _objc_retainAutoreleasedReturnValue();
    local_170 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_170 != (undefined *)0x0) {
      lVar5 = *local_128;
      local_178 = (undefined *)0x0;
      do {
        do {
          if (*local_128 - lVar5 != 0) {
            _objc_enumerationMutation(*local_128 - lVar5,puVar1);
          }
          local_f8 = *(undefined8 *)(local_130 + (long)local_178 * 8);
          uVar2 = local_e8;
          FUN_0033d258(local_e8,local_f8);
          _objc_retainAutoreleasedReturnValue();
          local_150[0] = uVar2;
          if (uVar2 == 0) {
            local_ec = 3;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar2,PTR_s_respondsToSelector__026ca818,
                       PTR_s_MMImagePickerManagerDidCancel__026a21f0);
            uVar4 = local_150[0];
            if ((uVar2 & 1) == 0) {
              pcVar3 = &cf_MMImagePickerManager_didFinishPickingImageWithInfo_;
              _NSSelectorFromString();
              (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_respondsToSelector__026ca818,pcVar3)
              ;
              if ((uVar4 & 1) == 0) {
                local_ec = 0;
                goto LAB_0033d948;
              }
            }
            uVar2 = local_150[0];
            (*(code *)PTR__objc_retain_02578638)();
            local_e0 = uVar2;
            local_ec = 1;
          }
LAB_0033d948:
          _objc_storeStrong(local_150,0);
          if ((local_ec != 0) && (local_ec != 3)) goto LAB_0033d9e8;
          local_178 = local_178 + 1;
        } while (local_178 < local_170);
        local_170 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                   0x10);
        local_178 = (undefined *)0x0;
      } while (local_170 != (undefined *)0x0);
    }
    local_ec = 0;
LAB_0033d9e8:
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_ec == 0) {
      uVar4 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e8,PTR_s_respondsToSelector__026ca818,
                 PTR_s_MMImagePickerManagerDidCancel__026a21f0);
      uVar2 = local_e8;
      if ((uVar4 & 1) == 0) {
        pcVar3 = &cf_MMImagePickerManager_didFinishPickingImageWithInfo_;
        _NSSelectorFromString();
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_respondsToSelector__026ca818,pcVar3);
        if ((uVar2 & 1) == 0) {
          local_e0 = 0;
          local_ec = 1;
          goto LAB_0033dad4;
        }
      }
      uVar2 = local_e8;
      (*(code *)PTR__objc_retain_02578638)();
      local_e0 = uVar2;
      local_ec = 1;
    }
  }
LAB_0033dad4:
  _objc_storeStrong(&local_e8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_e0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

