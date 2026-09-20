// FUN_019fcb88 @ 019fcb88

void FUN_019fcb88(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_190;
  undefined *local_168;
  undefined *local_160;
  bool local_129;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  cfstringStruct *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  long local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  local_b0 = param_1;
  _objc_storeStrong(&local_b8);
  puVar1 = PTR_WCRefineFriendRelationChecker_026ceb00;
  local_c0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineFriendRelationChecker_026ceb00,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar1;
  _memset(auStack_118,0,0x40);
  puVar1 = local_c8;
  (*(code *)PTR__objc_retain_02578638)();
  local_160 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
  if (local_160 != (undefined *)0x0) {
    lVar4 = *local_108;
    local_168 = (undefined *)0x0;
    do {
      do {
        if (*local_108 - lVar4 != 0) {
          _objc_enumerationMutation(*local_108 - lVar4,puVar1);
        }
        pcVar5 = *(cfstringStruct **)(local_110 + (long)local_168 * 8);
        local_d8 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,PTR_s_objectForKeyedSubscript__0269d098,&cf_userName);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        pcVar3 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
        local_129 = ((ulong)pcVar3 & 1) == 0;
        if (local_129) {
          local_190 = &cf___;
        }
        else {
          local_190 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_userName);
          _objc_retainAutoreleasedReturnValue();
          local_128 = local_190;
        }
        local_129 = !local_129;
        (*(code *)PTR__objc_retain_02578638)();
        local_120 = local_190;
        if (local_129) {
          (*(code *)PTR__objc_release_02578630)(local_128);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        pcVar3 = local_120;
        (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_length_0269cca0);
        if (pcVar3 != (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_addObject__0269d180,local_120);
        }
        _objc_storeStrong(&local_120,0);
        local_168 = local_168 + 1;
      } while (local_168 < local_160);
      local_160 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10)
      ;
      local_168 = (undefined *)0x0;
    } while (local_160 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

