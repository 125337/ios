// historyCandidateTextsForMessageWrap:record: @ 01b2c120

/* Function Stack Size: 0x20 bytes */

ID WCRefineKeywordAlertHistoryViewController::historyCandidateTextsForMessageWrap_record_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  ID IVar2;
  long lVar3;
  ID IVar4;
  long lVar5;
  ID IVar6;
  long lVar7;
  undefined *local_2e0;
  undefined *local_2d8;
  ulong local_248;
  ulong local_240;
  undefined1 auStack_210 [8];
  long local_208;
  long *local_200;
  undefined8 local_1d0;
  undefined *local_1c8;
  undefined1 auStack_1c0 [8];
  long local_1b8;
  long *local_1b0;
  undefined8 local_180;
  undefined *local_178;
  undefined4 local_16c;
  undefined8 local_168;
  long local_160;
  SEL local_158;
  ID local_150;
  undefined *local_148;
  undefined1 auStack_140 [128];
  ID local_c0;
  ID local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_160 = 0;
  local_158 = param_2;
  local_150 = param_1;
  _objc_storeStrong(&local_160,param_3);
  local_168 = 0;
  _objc_storeStrong(&local_168,param_4);
  if (local_160 == 0) {
    puVar1 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_16c = 1;
    local_148 = puVar1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_178 = puVar1;
    _memset(auStack_1c0,0,0x40);
    IVar2 = local_150;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_150,PTR_s_historyStructuredTextsForMessage_026bee50,local_160);
    _objc_retainAutoreleasedReturnValue();
    local_240 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_240 != 0) {
      lVar7 = *local_1b0;
      local_248 = 0;
      do {
        do {
          if (*local_1b0 - lVar7 != 0) {
            _objc_enumerationMutation(*local_1b0 - lVar7,IVar2);
          }
          local_180 = *(undefined8 *)(local_1b8 + local_248 * 8);
          FUN_01b2c020(local_178,local_180);
          local_248 = local_248 + 1;
        } while (local_248 < local_240);
        local_240 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c0,auStack_a8,0x10
                  );
        local_248 = 0;
      } while (local_240 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_150;
    lVar7 = local_160;
    (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_m_nsContent_0269d0a0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_historyPreparedCandidateText_rec_026bee58,lVar7,local_168);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_150;
    lVar3 = local_160;
    local_c0 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_m_nsPushContent_026a3790);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar4,PTR_s_historyPreparedCandidateText_rec_026bee58,lVar3,local_168);
    _objc_retainAutoreleasedReturnValue();
    IVar6 = local_150;
    lVar5 = local_160;
    local_b8 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_m_nsLastDisplayContent_026a3798);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar6,PTR_s_historyPreparedCandidateText_rec_026bee58,lVar5,local_168);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_b0 = IVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0,3
              );
    _objc_retainAutoreleasedReturnValue();
    local_1c8 = puVar1;
    (*(code *)PTR__objc_release_02578630)(IVar6);
    (*(code *)PTR__objc_release_02578630)(lVar5);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(lVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(lVar7);
    _memset(auStack_210,0,0x40);
    puVar1 = local_1c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_2d8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,auStack_140,0x10);
    if (local_2d8 != (undefined *)0x0) {
      lVar7 = *local_200;
      local_2e0 = (undefined *)0x0;
      do {
        do {
          if (*local_200 - lVar7 != 0) {
            _objc_enumerationMutation(*local_200 - lVar7,puVar1);
          }
          local_1d0 = *(undefined8 *)(local_208 + (long)local_2e0 * 8);
          FUN_01b2c020(local_178,local_1d0);
          local_2e0 = local_2e0 + 1;
        } while (local_2e0 < local_2d8);
        local_2d8 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,auStack_140,
                   0x10);
        local_2e0 = (undefined *)0x0;
      } while (local_2d8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_178;
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_copy_0269d150);
    local_16c = 1;
    local_148 = puVar1;
    _objc_storeStrong(&local_1c8);
    _objc_storeStrong(&local_178,0);
  }
  _objc_storeStrong(&local_168);
  _objc_storeStrong(&local_160,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_148;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

