// buildPendingChanges @ 01864eb0

/* Function Stack Size: 0x10 bytes */

ID WCRefineBatchRemarkViewController::buildPendingChanges(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  undefined *local_100;
  cfstringStruct *local_d0;
  uint local_b4;
  cfstringStruct *local_88;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined *local_60;
  SEL local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_58 = param_2;
  local_50 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_68 = (cfstringStruct *)0x0;
  local_60 = puVar2;
  while( true ) {
    pcVar5 = local_68;
    pcVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_selectedCandidates_026b6960);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    if (pcVar4 <= pcVar5) break;
    pcVar5 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_selectedCandidates_026b6960);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_70 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    pcVar5 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_newRemarkForCandidate_index__026b6b58,local_70,local_68);
    local_78 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_length_0269cca0);
    if (pcVar5 != (cfstringStruct *)0x0) {
      pcVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_skipUnchanged_026b6af8);
      pcVar5 = local_78;
      bVar1 = false;
      local_b4 = 0;
      if (((ulong)pcVar3 & 1) != 0) {
        local_88 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_currentRemark_026b6a58);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
        local_d0 = local_88;
        if (local_88 == (cfstringStruct *)0x0) {
          local_d0 = &::cf___;
        }
        (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isEqualToString__0269ccc8,local_d0);
        local_b4 = (uint)pcVar5;
      }
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_88);
      }
      puVar2 = local_60;
      if ((local_b4 & 1) == 0) {
        local_48 = &cf_candidate;
        local_38 = local_70;
        local_40 = &cf_newRemark;
        local_30 = local_78;
        puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_38,&local_48,2);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(puVar6);
      }
    }
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_70,0);
    local_68 = (cfstringStruct *)((long)&local_68->field0_0x0 + 1);
  }
  puVar2 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_copy_0269d150);
  local_100 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_100 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_100;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

