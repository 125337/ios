// FUN_008f86d4 @ 008f86d4

void FUN_008f86d4(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_208;
  undefined *local_200;
  undefined1 auStack_168 [8];
  long local_160;
  long *local_158;
  undefined8 local_128;
  cfstringStruct *local_120;
  int local_114;
  cfstringStruct *local_110 [3];
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_f0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_f0,param_1);
  pcVar1 = local_f0;
  FUN_008e6088(local_f0,PTR_s_getVoicePath_026a4578);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  FUN_008e5574();
  _objc_retainAutoreleasedReturnValue();
  local_f8 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar3 = local_f8;
  FUN_008ecda8();
  _objc_retainAutoreleasedReturnValue();
  local_110[0] = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
  pcVar2 = local_f8;
  pcVar1 = local_110[0];
  if (pcVar3 != (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_e8 = pcVar1;
    local_114 = 1;
    goto LAB_008f8d10;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_120 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
  if ((pcVar2 != (cfstringStruct *)0x0) &&
     (pcVar1 = local_120,
     (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_hasPrefix__0269d320,&cf__),
     ((ulong)pcVar1 & 1) == 0)) {
    FUN_008ed404();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_120;
    local_120 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  pcVar1 = local_120;
  (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_pathExtension_0269e090);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if (pcVar2 == (cfstringStruct *)0x0) {
    _memset(auStack_168,0,0x40);
    local_e0 = &cf_aud;
    local_d8 = &cf_amr;
    local_d0 = &cf_silk;
    local_c8 = &cf_spx;
    local_c0 = &cf_opus;
    local_b8 = &cf_mp3;
    local_b0 = &cf_m4a;
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_e0,7
              );
    _objc_retainAutoreleasedReturnValue();
    local_200 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_200 != (undefined *)0x0) {
      lVar5 = *local_158;
      local_208 = (undefined *)0x0;
      do {
        do {
          if (*local_158 - lVar5 != 0) {
            _objc_enumerationMutation(*local_158 - lVar5,puVar4);
          }
          local_128 = *(undefined8 *)(local_160 + (long)local_208 * 8);
          pcVar2 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_120,PTR_s_stringByAppendingPathExtension__026a4580,local_128);
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = pcVar2;
          FUN_008ecda8();
          _objc_retainAutoreleasedReturnValue();
          pcVar1 = local_110[0];
          local_110[0] = pcVar3;
          (*(code *)PTR__objc_release_02578630)(pcVar1);
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          pcVar2 = local_110[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_110[0],PTR_s_length_0269cca0);
          pcVar1 = local_110[0];
          if (pcVar2 != (cfstringStruct *)0x0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_e8 = pcVar1;
            local_114 = 1;
            goto LAB_008f8c8c;
          }
          local_208 = local_208 + 1;
        } while (local_208 < local_200);
        local_200 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_a8,
                   0x10);
        local_208 = (undefined *)0x0;
      } while (local_200 != (undefined *)0x0);
    }
    local_114 = 0;
LAB_008f8c8c:
    (*(code *)PTR__objc_release_02578630)(puVar4);
    if (local_114 == 0) goto LAB_008f8cc4;
  }
  else {
LAB_008f8cc4:
    (*(code *)PTR__objc_retain_02578638)();
    local_e8 = &cf___;
    local_114 = 1;
  }
  _objc_storeStrong(&local_120,0);
LAB_008f8d10:
  _objc_storeStrong(local_110);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_f0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_e8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

