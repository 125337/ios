// FUN_006b30a8 @ 006b30a8

byte FUN_006b30a8(void)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  long lVar4;
  undefined *local_170;
  undefined *local_168;
  cfstringStruct *local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  int local_f0;
  bool local_e9;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  byte local_c9;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = (cfstringStruct *)PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
  _objc_retainAutoreleasedReturnValue();
  local_e9 = false;
  bVar1 = local_140 == (cfstringStruct *)0x0;
  local_d8 = local_140;
  if (bVar1) {
    local_140 = &cf___;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_e8 = local_140;
  }
  local_e9 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_e0 = local_140;
  if ((local_e9 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e8);
  }
  pcVar2 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_e0,PTR_s_isEqualToString__0269ccc8,&cf_NewMainFrameViewController);
  if (((((ulong)pcVar2 & 1) == 0) &&
      (pcVar2 = local_e0,
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e0,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineSearchSettingsViewController),
      ((ulong)pcVar2 & 1) == 0)) &&
     (pcVar2 = local_e0,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_e0,PTR_s_isEqualToString__0269ccc8,&cf_FTSHomeViewController),
     ((ulong)pcVar2 & 1) == 0)) {
    pcVar2 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_hasPrefix__0269d320,&cf_FTS);
    if ((((ulong)pcVar2 & 1) == 0) ||
       ((pcVar2 = local_e0,
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_containsString__0269d0b0,&cf_Search),
        ((ulong)pcVar2 & 1) == 0 &&
        (pcVar2 = local_e0,
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_containsString__0269d0b0,&cf_Home),
        ((ulong)pcVar2 & 1) == 0)))) {
      _memset(auStack_138,0,0x40);
      local_c8 = &cf_Search;
      local_c0 = &cf_FTS;
      local_b8 = &cf_AddFriendEntry;
      local_b0 = &cf_NewMainFrame;
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c8
                 ,4);
      _objc_retainAutoreleasedReturnValue();
      local_168 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_168 != (undefined *)0x0) {
        lVar4 = *local_128;
        local_170 = (undefined *)0x0;
        do {
          do {
            if (*local_128 - lVar4 != 0) {
              _objc_enumerationMutation(*local_128 - lVar4,puVar3);
            }
            local_f8 = *(undefined8 *)(local_130 + (long)local_170 * 8);
            pcVar2 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_containsString__0269d0b0,local_f8);
            if (((ulong)pcVar2 & 1) != 0) {
              local_c9 = 1;
              local_f0 = 1;
              goto LAB_006b3464;
            }
            local_170 = local_170 + 1;
          } while (local_170 < local_168);
          local_168 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                     0x10);
          local_170 = (undefined *)0x0;
        } while (local_168 != (undefined *)0x0);
      }
      local_f0 = 0;
LAB_006b3464:
      (*(code *)PTR__objc_release_02578630)(puVar3);
      if (local_f0 == 0) {
        local_c9 = 0;
        local_f0 = 1;
      }
    }
    else {
      local_c9 = 1;
      local_f0 = 1;
    }
  }
  else {
    local_c9 = 1;
    local_f0 = 1;
  }
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_c9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

