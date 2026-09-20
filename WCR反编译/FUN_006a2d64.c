// FUN_006a2d64 @ 006a2d64

void FUN_006a2d64(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *local_210;
  undefined *local_208;
  undefined8 local_188;
  byte local_179;
  long local_178;
  undefined1 auStack_170 [8];
  long local_168;
  long *local_160;
  undefined8 local_130;
  undefined *local_128;
  undefined *local_120;
  undefined8 local_118;
  undefined *local_110;
  long local_108;
  undefined *local_100;
  undefined4 local_f8;
  long local_e8;
  undefined *local_e0;
  undefined1 auStack_d8 [128];
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  FUN_006a34c8();
  _objc_retainAutoreleasedReturnValue();
  local_e8 = param_1;
  if ((param_1 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_length_0269cca0), param_1 == 0)) {
    puVar1 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_f8 = 1;
    local_e0 = puVar1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_108 = 0;
    local_118 = 0;
    local_100 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_e8,&local_118);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_108,local_118);
    local_110 = puVar1;
    if ((local_108 == 0) &&
       ((*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_count_0269cfe0),
       puVar2 = PTR__OBJC_CLASS___NSSet_026ce150, puVar1 != (undefined *)0x0)) {
      local_58 = &cf_jpg;
      local_50 = &cf_jpeg;
      local_48 = &cf_png;
      local_40 = &cf_gif;
      local_38 = &cf_bmp;
      local_30 = &cf_webp;
      puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58
                 ,6);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setWithArray__0269d9a0);
      _objc_retainAutoreleasedReturnValue();
      local_120 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_128 = puVar1;
      _memset(auStack_170,0,0x40);
      puVar1 = local_110;
      (*(code *)PTR__objc_retain_02578638)();
      local_208 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_170,auStack_d8,0x10)
      ;
      if (local_208 != (undefined *)0x0) {
        lVar6 = *local_160;
        local_210 = (undefined *)0x0;
        do {
          do {
            if (*local_160 - lVar6 != 0) {
              _objc_enumerationMutation(*local_160 - lVar6,puVar1);
            }
            local_130 = *(undefined8 *)(local_168 + (long)local_210 * 8);
            lVar3 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e8,PTR_s_stringByAppendingPathComponent__026cab30,local_130);
            _objc_retainAutoreleasedReturnValue();
            local_179 = 0;
            puVar2 = local_100;
            local_178 = lVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_100,PTR_s_fileExistsAtPath_isDirectory__026ca638,lVar3,&local_179);
            if ((((ulong)puVar2 & 1) == 0) || ((local_179 & 1) != 0)) {
              local_f8 = 3;
            }
            else {
              uVar4 = local_130;
              (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_pathExtension_0269e090);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar4;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              local_188 = uVar5;
              (*(code *)PTR__objc_release_02578630)(uVar4);
              puVar2 = local_120;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_120,PTR_s_containsObject__0269cbb8,local_188);
              if (((ulong)puVar2 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_addObject__0269d180,local_178)
                ;
              }
              _objc_storeStrong(&local_188,0);
              local_f8 = 0;
            }
            _objc_storeStrong(&local_178,0);
            local_210 = local_210 + 1;
          } while (local_210 < local_208);
          local_208 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_170,auStack_d8,
                     0x10);
          local_210 = (undefined *)0x0;
        } while (local_208 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = local_128;
      (*(code *)PTR__objc_retain_02578638)();
      local_e0 = puVar1;
      local_f8 = 1;
      _objc_storeStrong(&local_128);
      _objc_storeStrong(&local_120,0);
    }
    else {
      puVar1 = *(undefined **)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_f8 = 1;
      local_e0 = puVar1;
    }
    _objc_storeStrong(&local_110);
    _objc_storeStrong(&local_108,0);
    _objc_storeStrong(&local_100,0);
  }
  _objc_storeStrong(&local_e8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_e0);
  return;
}

