// FUN_008b80a8 @ 008b80a8

void FUN_008b80a8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *local_1a8;
  undefined *local_1a0;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  undefined8 local_108;
  undefined *local_100;
  undefined4 local_f8;
  long local_e8;
  long local_e0;
  undefined *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e0 = 0;
  _objc_storeStrong(&local_e0,param_1);
  lVar4 = local_e0;
  FUN_008b8570();
  _objc_retainAutoreleasedReturnValue();
  local_e8 = lVar4;
  (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
  if (lVar4 == 0) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_f8 = 1;
    local_d8 = puVar2;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,local_e8);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = local_e8;
    local_100 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_pathExtension_0269e090);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar4);
    if (lVar3 == 0) {
      _memset(auStack_148,0,0x40);
      local_d0 = &cf_aud;
      local_c8 = &cf_amr;
      local_c0 = &cf_silk;
      local_b8 = &cf_spx;
      local_b0 = &cf_opus;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_d0
                 ,5);
      _objc_retainAutoreleasedReturnValue();
      local_1a0 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_1a0 != (undefined *)0x0) {
        lVar4 = *local_138;
        local_1a8 = (undefined *)0x0;
        do {
          do {
            if (*local_138 - lVar4 != 0) {
              _objc_enumerationMutation(*local_138 - lVar4,puVar2);
            }
            puVar1 = local_100;
            local_108 = *(undefined8 *)(local_140 + (long)local_1a8 * 8);
            lVar3 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e8,PTR_s_stringByAppendingPathExtension__026a4580,local_108);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(lVar3);
            local_1a8 = local_1a8 + 1;
          } while (local_1a8 < local_1a0);
          local_1a0 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,
                     0x10);
          local_1a8 = (undefined *)0x0;
        } while (local_1a0 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    puVar2 = local_100;
    (*(code *)PTR__objc_retain_02578638)();
    local_d8 = puVar2;
    local_f8 = 1;
    _objc_storeStrong(&local_100,0);
  }
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_d8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

