// FUN_0067fa24 @ 0067fa24

void FUN_0067fa24(void)

{
  u_int32_t uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  long lVar5;
  cfstringStruct *local_180;
  cfstringStruct *local_178;
  cfstringStruct *local_148;
  long local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  long local_d8;
  cfstringStruct *local_d0 [3];
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_148 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_148 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_b8 = local_148;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_d0[0] = pcVar2;
  _memset(auStack_118,0,0x40);
  pcVar2 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
  _objc_retainAutoreleasedReturnValue();
  local_178 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_178 != (cfstringStruct *)0x0) {
    lVar4 = *local_108;
    local_180 = (cfstringStruct *)0x0;
    do {
      do {
        if (*local_108 - lVar4 != 0) {
          _objc_enumerationMutation(*local_108 - lVar4,pcVar2);
        }
        lVar5 = *(long *)(local_110 + (long)local_180 * 8);
        local_d8 = lVar5;
        FUN_0067d82c();
        _objc_retainAutoreleasedReturnValue();
        local_120 = lVar5;
        (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
        if (lVar5 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_d0[0],PTR_s_addObject__0269d180,local_120);
        }
        _objc_storeStrong(&local_120,0);
        local_180 = (cfstringStruct *)((long)&local_180->field0_0x0 + 1);
      } while (local_180 < local_178);
      local_178 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10)
      ;
      local_180 = (cfstringStruct *)0x0;
    } while (local_178 != (cfstringStruct *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_d0[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_d0[0],PTR_s_count_0269cfe0);
  local_b0 = local_d0[0];
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &cf___;
  }
  else {
    pcVar2 = local_d0[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_d0[0],PTR_s_count_0269cfe0);
    uVar1 = _arc4random_uniform((u_int32_t)pcVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_objectAtIndexedSubscript__0269cc78,uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_storeStrong(local_d0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

