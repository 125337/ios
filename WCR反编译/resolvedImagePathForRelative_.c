// resolvedImagePathForRelative: @ 01845314

/* Function Stack Size: 0x18 bytes */

ID WCRefineAvatarFrameSpecialUsersViewController::resolvedImagePathForRelative_
             (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined8 local_178;
  undefined1 auStack_170 [8];
  long local_168;
  long *local_160;
  undefined8 local_130;
  undefined *local_128;
  byte local_119;
  undefined *local_118;
  ID local_110;
  uint local_104;
  long local_100;
  SEL local_f8;
  ID local_f0;
  ID local_e8;
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
  local_100 = 0;
  local_f8 = param_2;
  local_f0 = param_1;
  _objc_storeStrong(&local_100,param_3);
  lVar8 = local_100;
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_length_0269cca0);
  if (lVar8 == 0) {
    local_e8 = 0;
    local_104 = 1;
  }
  else {
    IVar2 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_documentsPath_026ab1d0);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_110 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_119 = 0;
    local_118 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_fileExistsAtPath_isDirectory__026ca638,local_110,&local_119);
    IVar2 = local_110;
    if (((ulong)puVar4 & 1) == 0) {
      local_e8 = 0;
      local_104 = 1;
    }
    else if ((local_119 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_e8 = IVar2;
      local_104 = 1;
    }
    else {
      puVar4 = local_118;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_118,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_110,0);
      _objc_retainAutoreleasedReturnValue();
      local_128 = puVar4;
      _memset(auStack_170,0,0x40);
      puVar4 = local_128;
      (*(code *)PTR__objc_retain_02578638)();
      local_1a8 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_170,auStack_a8,0x10)
      ;
      if (local_1a8 != (undefined *)0x0) {
        lVar8 = *local_160;
        local_1b0 = (undefined *)0x0;
        do {
          do {
            if (*local_160 - lVar8 != 0) {
              _objc_enumerationMutation(*local_160 - lVar8,puVar4);
            }
            uVar9 = *(undefined8 *)(local_168 + (long)local_1b0 * 8);
            local_130 = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_pathExtension_0269e090);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            local_178 = uVar5;
            (*(code *)PTR__objc_release_02578630)(uVar9);
            local_e0 = &cf_png;
            local_d8 = &cf_jpg;
            local_d0 = &cf_jpeg;
            local_c8 = &cf_gif;
            local_c0 = &cf_webp;
            local_b8 = &cf_heic;
            local_b0 = &cf_bmp;
            puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_e0,7);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar6;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar6);
            bVar1 = ((ulong)puVar7 & 1) != 0;
            if (bVar1) {
              IVar2 = local_110;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_110,PTR_s_stringByAppendingPathComponent__026cab30,local_130);
              _objc_retainAutoreleasedReturnValue();
              local_e8 = IVar2;
            }
            local_104 = (uint)bVar1;
            _objc_storeStrong(&local_178,0);
            if (local_104 != 0) goto LAB_01845730;
            local_1b0 = local_1b0 + 1;
          } while (local_1b0 < local_1a8);
          local_1a8 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_170,auStack_a8,
                     0x10);
          local_1b0 = (undefined *)0x0;
        } while (local_1a8 != (undefined *)0x0);
      }
      local_104 = 0;
LAB_01845730:
      (*(code *)PTR__objc_release_02578630)(puVar4);
      if (local_104 == 0) {
        local_e8 = 0;
        local_104 = 1;
      }
      _objc_storeStrong(&local_128,0);
    }
    _objc_storeStrong(&local_118);
    _objc_storeStrong(&local_110,0);
  }
  _objc_storeStrong(&local_100,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_e8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

