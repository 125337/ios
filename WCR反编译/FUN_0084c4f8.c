// FUN_0084c4f8 @ 0084c4f8

void FUN_0084c4f8(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1a8;
  cfstringStruct *local_1a0;
  cfstringStruct *local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  cfstringStruct *local_f0;
  undefined *local_e8;
  int local_e0;
  byte local_d9;
  cfstringStruct *local_d8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  pcVar2 = local_b8;
  _objc_getAssociatedObject(local_b8,DAT_026f48b8);
  _objc_retainAutoreleasedReturnValue();
  local_d9 = 0;
  bVar1 = false;
  local_c0 = pcVar2;
  if (pcVar2 != (cfstringStruct *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    bVar1 = false;
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar2 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      local_d9 = 1;
      bVar1 = pcVar2 == local_b8;
      local_d8 = pcVar2;
    }
  }
  if ((local_d9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d8);
  }
  pcVar2 = local_c0;
  if (bVar1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = pcVar2;
    local_e0 = 1;
  }
  else {
    puVar3 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_localizedStringForKey__026a4498,
               &cf_Contacts_AcountCol_Domestic);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = puVar3;
    _memset(auStack_130,0,0x40);
    pcVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_1a0 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1a0 != (cfstringStruct *)0x0) {
      lVar4 = *local_120;
      local_1a8 = (cfstringStruct *)0x0;
      do {
        do {
          if (*local_120 - lVar4 != 0) {
            _objc_enumerationMutation(*local_120 - lVar4,pcVar2);
          }
          pcVar5 = *(cfstringStruct **)(local_128 + (long)local_1a8 * 8);
          puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
          local_f0 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
          if (((ulong)pcVar5 & 1) != 0) {
            pcVar5 = local_f0;
            (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_text_0269ce68);
            _objc_retainAutoreleasedReturnValue();
            local_1f0 = pcVar5;
            if (pcVar5 == (cfstringStruct *)0x0) {
              local_1f0 = &cf___;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_138 = local_1f0;
            (*(code *)PTR__objc_release_02578630)(pcVar5);
            puVar3 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
            if (((puVar3 == (undefined *)0x0) ||
                (pcVar5 = local_138,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_138,PTR_s_containsString__0269d0b0,local_e8),
                ((ulong)pcVar5 & 1) == 0)) &&
               (pcVar5 = local_138,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_138,PTR_s_containsString__0269d0b0,&cf__OS),
               ((ulong)pcVar5 & 1) == 0)) {
              local_e0 = 0;
            }
            else {
              _objc_setAssociatedObject(local_b8,DAT_026f48b8,local_f0,1);
              pcVar5 = local_f0;
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = pcVar5;
              local_e0 = 1;
            }
            _objc_storeStrong(&local_138,0);
            if (local_e0 != 0) goto LAB_0084ca44;
          }
          local_1a8 = (cfstringStruct *)((long)&local_1a8->field0_0x0 + 1);
        } while (local_1a8 < local_1a0);
        local_1a0 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                   0x10);
        local_1a8 = (cfstringStruct *)0x0;
      } while (local_1a0 != (cfstringStruct *)0x0);
    }
    local_e0 = 0;
LAB_0084ca44:
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    if (local_e0 == 0) {
      local_b0 = (cfstringStruct *)0x0;
      local_e0 = 1;
    }
    _objc_storeStrong(&local_e8,0);
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

