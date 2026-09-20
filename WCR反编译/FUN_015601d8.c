// FUN_015601d8 @ 015601d8

void FUN_015601d8(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *local_198;
  undefined *local_190;
  undefined *local_170;
  undefined1 auStack_168 [8];
  long local_160;
  long *local_158;
  undefined8 local_128;
  undefined *local_120;
  undefined *local_118;
  undefined *local_110;
  ulong local_108;
  uint local_fc;
  ulong local_f8;
  ulong local_f0;
  undefined *local_e8;
  undefined1 auStack_e0 [128];
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_f0 = 0;
  _objc_storeStrong(&local_f0,param_1);
  uVar2 = local_f0;
  FUN_01528c84();
  _objc_retainAutoreleasedReturnValue();
  local_f8 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  if ((uVar2 == 0) || (uVar2 = local_f8, FUN_01560954(), (uVar2 & 1) == 0)) {
    local_e8 = (undefined *)0x0;
    local_fc = 1;
  }
  else {
    uVar2 = local_f8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_f8,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_60 = &cf_gif;
    local_58 = &cf_png;
    local_50 = &cf_jpg;
    local_48 = &cf_jpeg;
    local_40 = &cf_webp;
    local_38 = &cf_heic;
    local_30 = &cf_bmp;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_108 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_60,7
              );
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_110 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_118 = puVar4;
    FUN_01560c2c();
    _objc_retainAutoreleasedReturnValue();
    local_120 = puVar4;
    _memset(auStack_168,0,0x40);
    puVar3 = local_110;
    (*(code *)PTR__objc_retain_02578638)();
    local_190 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_e0,0x10);
    if (local_190 != (undefined *)0x0) {
      lVar6 = *local_158;
      local_198 = (undefined *)0x0;
      do {
        do {
          if (*local_158 - lVar6 != 0) {
            _objc_enumerationMutation(*local_158 - lVar6,puVar3);
          }
          puVar4 = local_120;
          local_128 = *(undefined8 *)(local_160 + (long)local_198 * 8);
          puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______)
          ;
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_stringByAppendingPathComponent__026cab30);
          _objc_retainAutoreleasedReturnValue();
          local_170 = puVar4;
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar5 = local_118;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_118,PTR_s_fileExistsAtPath__026ca630,local_170);
          puVar4 = local_170;
          bVar1 = ((ulong)puVar5 & 1) != 0;
          if (bVar1) {
            (*(code *)PTR__objc_retain_02578638)();
            local_e8 = puVar4;
          }
          local_fc = (uint)bVar1;
          _objc_storeStrong(&local_170,0);
          if (local_fc != 0) goto LAB_01560564;
          local_198 = local_198 + 1;
        } while (local_198 < local_190);
        local_190 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_e0,
                   0x10);
        local_198 = (undefined *)0x0;
      } while (local_190 != (undefined *)0x0);
    }
    local_fc = 0;
LAB_01560564:
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (local_fc == 0) {
      local_e8 = (undefined *)0x0;
      local_fc = 1;
    }
    _objc_storeStrong(&local_120);
    _objc_storeStrong(&local_118,0);
    _objc_storeStrong(&local_110,0);
    _objc_storeStrong(&local_108,0);
  }
  _objc_storeStrong(&local_f8);
  _objc_storeStrong(&local_f0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_e8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

