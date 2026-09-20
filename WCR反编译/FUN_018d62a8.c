// FUN_018d62a8 @ 018d62a8

void FUN_018d62a8(byte param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_190;
  ulong local_168;
  ulong local_160;
  undefined *local_130;
  cfstringStruct *local_128;
  undefined4 local_11c;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  cfstringStruct *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_a9 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_b8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar2;
  _memset(auStack_108,0,0x40);
  uVar3 = 0;
  _WCRChatToolbarRefreshActions();
  _objc_retainAutoreleasedReturnValue();
  local_160 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_160 != 0) {
    lVar4 = *local_f8;
    local_168 = 0;
    do {
      do {
        if (*local_f8 - lVar4 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar4,uVar3);
        }
        pcVar5 = *(cfstringStruct **)(local_100 + local_168 * 8);
        local_c8 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,PTR_s_objectForKeyedSubscript__0269d098,_WCRChatToolbarActionKey);
        _objc_retainAutoreleasedReturnValue();
        local_190 = pcVar5;
        if (pcVar5 == (cfstringStruct *)0x0) {
          local_190 = &cf___;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_110 = local_190;
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        pcVar5 = local_110;
        FUN_018db148();
        if (((ulong)pcVar5 & 1) == 0) {
          pcVar5 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_mutableCopy_0269d8a0);
          puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_128 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_a9 & 1
                    );
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_128,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,
                     _WCRChatToolbarEnabledKey);
          (*(code *)PTR__objc_release_02578630)(puVar1);
          if ((local_a9 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addObject__0269d180,local_128);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_addObject__0269d180,local_128);
          }
          _objc_storeStrong(&local_128,0);
          local_11c = 0;
        }
        else {
          if ((local_a9 & 1) != 0) {
            pcVar5 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_mutableCopy_0269d8a0);
            puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
            local_118 = pcVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_118,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,
                       _WCRChatToolbarEnabledKey);
            (*(code *)PTR__objc_release_02578630)(puVar1);
            (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_addObject__0269d180,local_118);
            _objc_storeStrong(&local_118,0);
          }
          local_11c = 3;
        }
        _objc_storeStrong(&local_110,0);
        local_168 = local_168 + 1;
      } while (local_168 < local_160);
      local_160 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
      local_168 = 0;
    } while (local_160 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar3);
  puVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_mutableCopy_0269d8a0);
  local_130 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObjectsFromArray__0269d540,local_c0);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  FUN_018ca37c();
  _objc_storeStrong(&local_130);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

