// FUN_00eacd04 @ 00eacd04

void FUN_00eacd04(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  uint local_c4;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  pcVar2 = local_b8;
  FUN_00eacbb0();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_containsString__0269d0b0,&cf__);
  pcVar3 = local_c0;
  if (((ulong)pcVar2 & 1) == 0) {
    if ((local_b8 == (cfstringStruct *)0x0) ||
       (pcVar3 = local_b8,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_b8,PTR_s_respondsToSelector__026ca818,PTR_s_subviews_026cab40),
       ((ulong)pcVar3 & 1) == 0)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = &cf___;
      local_c4 = 1;
    }
    else {
      pcVar3 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_d0 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
      if (((ulong)pcVar3 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = &cf___;
        local_c4 = 1;
      }
      else {
        _memset(auStack_118,0,0x40);
        pcVar3 = local_d0;
        (*(code *)PTR__objc_retain_02578638)();
        local_160 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                   0x10);
        if (local_160 != (cfstringStruct *)0x0) {
          lVar5 = *local_108;
          local_168 = (cfstringStruct *)0x0;
          do {
            do {
              if (*local_108 - lVar5 != 0) {
                _objc_enumerationMutation(*local_108 - lVar5,pcVar3);
              }
              pcVar6 = *(cfstringStruct **)(local_110 + (long)local_168 * 8);
              local_d8 = pcVar6;
              FUN_00eacbb0();
              _objc_retainAutoreleasedReturnValue();
              local_120 = pcVar6;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_containsString__0269d0b0,&cf__);
              pcVar2 = local_120;
              bVar1 = ((ulong)pcVar6 & 1) != 0;
              if (bVar1) {
                (*(code *)PTR__objc_retain_02578638)();
                local_b0 = pcVar2;
              }
              local_c4 = (uint)bVar1;
              _objc_storeStrong(&local_120,0);
              if (local_c4 != 0) goto LAB_00ead038;
              local_168 = (cfstringStruct *)((long)&local_168->field0_0x0 + 1);
            } while (local_168 < local_160);
            local_160 = pcVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8
                       ,0x10);
            local_168 = (cfstringStruct *)0x0;
          } while (local_160 != (cfstringStruct *)0x0);
        }
        local_c4 = 0;
LAB_00ead038:
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        if (local_c4 == 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = &cf___;
          local_c4 = 1;
        }
      }
      _objc_storeStrong(&local_d0,0);
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = pcVar3;
    local_c4 = 1;
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

