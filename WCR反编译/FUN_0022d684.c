// FUN_0022d684 @ 0022d684

void FUN_0022d684(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *local_1c0;
  undefined *local_1b8;
  long local_170;
  undefined1 auStack_168 [8];
  long local_160;
  long *local_158;
  undefined8 local_128;
  undefined *local_120;
  undefined *local_118;
  long local_110;
  uint local_108;
  long local_f8;
  long local_f0;
  long local_e8;
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
  lVar5 = local_f0;
  FUN_0022e178();
  _objc_retainAutoreleasedReturnValue();
  local_f8 = lVar5;
  (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
  if (lVar5 == 0) {
    local_e8 = 0;
    local_108 = 1;
  }
  else {
    FUN_0022e2c8();
    _objc_retainAutoreleasedReturnValue();
    local_60 = &cf_png;
    local_58 = &cf_jpg;
    local_50 = &cf_jpeg;
    local_48 = &cf_gif;
    local_40 = &cf_webp;
    local_38 = &cf_heic;
    local_30 = &cf_bmp;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_110 = lVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_60,7
              );
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_118 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_120 = puVar3;
    _memset(auStack_168,0,0x40);
    puVar2 = local_118;
    (*(code *)PTR__objc_retain_02578638)();
    local_1b8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_e0,0x10);
    if (local_1b8 != (undefined *)0x0) {
      lVar5 = *local_158;
      local_1c0 = (undefined *)0x0;
      do {
        do {
          if (*local_158 - lVar5 != 0) {
            _objc_enumerationMutation(*local_158 - lVar5,puVar2);
          }
          lVar4 = local_110;
          local_128 = *(undefined8 *)(local_160 + (long)local_1c0 * 8);
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______)
          ;
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (lVar4,PTR_s_stringByAppendingPathComponent__026cab30);
          _objc_retainAutoreleasedReturnValue();
          local_170 = lVar4;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          puVar3 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_120,PTR_s_fileExistsAtPath__026ca630,local_170);
          lVar4 = local_170;
          bVar1 = ((ulong)puVar3 & 1) != 0;
          if (bVar1) {
            (*(code *)PTR__objc_retain_02578638)();
            local_e8 = lVar4;
          }
          local_108 = (uint)bVar1;
          _objc_storeStrong(&local_170,0);
          if (local_108 != 0) goto LAB_0022dad4;
          local_1c0 = local_1c0 + 1;
        } while (local_1c0 < local_1b8);
        local_1b8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_e0,
                   0x10);
        local_1c0 = (undefined *)0x0;
      } while (local_1b8 != (undefined *)0x0);
    }
    local_108 = 0;
LAB_0022dad4:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_108 == 0) {
      local_e8 = 0;
      local_108 = 1;
    }
    _objc_storeStrong(&local_120);
    _objc_storeStrong(&local_118,0);
    _objc_storeStrong(&local_110,0);
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

