// FUN_018de38c @ 018de38c

byte FUN_018de38c(undefined8 param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uVar5;
  uint local_224;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1e0;
  cfstringStruct *local_1c8;
  undefined1 *local_180;
  undefined1 *local_178;
  byte local_169;
  undefined1 *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined4 local_14c;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  undefined8 local_108;
  undefined1 *local_100;
  long *local_f8;
  long *local_f0;
  long *local_e8;
  undefined *local_e0;
  cfstringStruct *local_d8;
  byte local_c9;
  undefined1 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_d8,param_1);
  local_e0 = (undefined1 *)0x0;
  _objc_storeStrong(&local_e0,param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_f8 = param_5;
  local_f0 = param_4;
  local_e8 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_100 = puVar1;
  _memset(auStack_148,0,0x40);
  if (local_d8 == (cfstringStruct *)0x0) {
    local_1c8 = &cf___;
  }
  else {
    local_1c8 = local_d8;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_componentsSeparatedByString__0269d3c0,&cf__)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_1e0 = local_1c8;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_1e0 != (cfstringStruct *)0x0) {
    lVar4 = *local_138;
    local_1e8 = (cfstringStruct *)0x0;
    do {
      do {
        if (*local_138 - lVar4 != 0) {
          _objc_enumerationMutation(*local_138 - lVar4,local_1c8);
        }
        puVar2 = local_100;
        uVar5 = *(undefined8 *)(local_140 + (long)local_1e8 * 8);
        puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
        local_108 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                   PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_stringByTrimmingCharactersInSet__0269d0c0)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(uVar5);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        local_1e8 = (cfstringStruct *)((long)&local_1e8->field0_0x0 + 1);
      } while (local_1e8 < local_1e0);
      local_1e0 = local_1c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1c8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,
                 0x10);
      local_1e8 = (cfstringStruct *)0x0;
    } while (local_1e0 != (cfstringStruct *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(local_1c8);
  puVar2 = local_100;
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_count_0269cfe0);
  puVar1 = local_e0;
  if (puVar2 < (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
    local_c9 = 0;
    local_14c = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_158 = puVar1;
    puVar2 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_count_0269cfe0);
    puVar3 = local_100;
    local_160 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_count_0269cfe0);
    local_169 = 0;
    local_224 = 0;
    if ((undefined1 *)((long)&MACH_HEADER.magic + 2) < puVar3) {
      puVar2 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_lastObject_0269d200);
      _objc_retainAutoreleasedReturnValue();
      local_169 = 1;
      local_168 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_224 = (uint)puVar2;
    }
    if ((local_169 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_168);
    }
    if ((local_224 & 1) != 0) {
      puVar3 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_lastObject_0269d200);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_158;
      local_158 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_160 = local_160 + -1;
    }
    puVar2 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_firstObject_0269d1f8);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = local_160 + -1;
    local_c0 = 1;
    local_b8 = 1;
    puVar3 = local_100;
    local_178 = puVar2;
    local_b0 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_subarrayWithRange__0269d848,1,local_c8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_180 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar2 = local_178;
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_length_0269cca0);
    if ((puVar2 == (undefined1 *)0x0) ||
       (puVar3 = local_180, (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_length_0269cca0),
       puVar2 = local_178, puVar3 == (undefined1 *)0x0)) {
      local_c9 = 0;
    }
    else {
      if (local_e8 != (long *)0x0) {
        _objc_retainAutorelease();
        *local_e8 = (long)puVar2;
      }
      puVar2 = local_180;
      if (local_f0 != (long *)0x0) {
        _objc_retainAutorelease();
        *local_f0 = (long)puVar2;
      }
      puVar2 = local_158;
      if (local_f8 != (long *)0x0) {
        _objc_retainAutorelease();
        *local_f8 = (long)puVar2;
      }
      local_c9 = 1;
    }
    local_14c = 1;
    _objc_storeStrong(&local_180);
    _objc_storeStrong(&local_178,0);
    _objc_storeStrong(&local_158,0);
  }
  _objc_storeStrong(&local_100);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_c9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

