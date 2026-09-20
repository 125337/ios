// wcr_deleteConfirmMessageForItems: @ 01f97324

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x18 bytes */

ID WCRefineVoicePackPickerViewController::wcr_deleteConfirmMessageForItems_
             (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong local_188;
  ulong local_180;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  ulong local_f8;
  long local_f0;
  undefined *local_e8;
  undefined *local_e0;
  ulong local_d8;
  undefined4 local_cc;
  ulong local_c8;
  SEL local_c0;
  ID local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  uVar1 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
  if (uVar1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &cf_nxRd;
    local_cc = 1;
  }
  else {
    uVar1 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
    if (uVar1 == 1) {
      uVar1 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      local_d8 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isDirectory_026b0ba0);
      puVar2 = PTR_WCRefineVoicePackStore_026cea20;
      if ((uVar1 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = &cf_nx_RddkeN;
      }
      else {
        uVar1 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_absolutePath_026ae300);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_audioCountInDirectory__026c9998);
        (*(code *)PTR__objc_release_02578630)(uVar1);
        pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        local_e0 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                   &cf_nx_RddkeN9Y);
        _objc_retainAutoreleasedReturnValue();
        local_b0 = pcVar3;
      }
      local_cc = 1;
      _objc_storeStrong(&local_d8,0);
    }
    else {
      local_e8 = (undefined *)0x0;
      local_f0 = 0;
      _memset(auStack_138,0,0x40);
      uVar1 = local_c8;
      (*(code *)PTR__objc_retain_02578638)();
      local_180 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
      if (local_180 != 0) {
        lVar4 = *local_128;
        local_188 = 0;
        do {
          do {
            if (*local_128 - lVar4 != 0) {
              _objc_enumerationMutation(*local_128 - lVar4,uVar1);
            }
            uVar5 = *(ulong *)(local_130 + local_188 * 8);
            local_f8 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isDirectory_026b0ba0);
            puVar2 = PTR_WCRefineVoicePackStore_026cea20;
            if ((uVar5 & 1) != 0) {
              local_f0 = local_f0 + 1;
              uVar5 = local_f8;
              (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_absolutePath_026ae300);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_audioCountInDirectory__026c9998);
              local_e8 = local_e8 + (long)puVar2;
              (*(code *)PTR__objc_release_02578630)(uVar5);
            }
            local_188 = local_188 + 1;
          } while (local_188 < local_180);
          local_180 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                     0x10);
          local_188 = 0;
        } while (local_180 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar1);
      pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      if (local_f0 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_stringWithFormat__0269cca8,&cf_nx_Rd);
        _objc_retainAutoreleasedReturnValue();
        local_cc = 1;
        local_b0 = pcVar3;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_stringWithFormat__0269cca8,&cf_nx_Rd);
        _objc_retainAutoreleasedReturnValue();
        local_cc = 1;
        local_b0 = pcVar3;
      }
    }
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

