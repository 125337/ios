// allAvatarFrameRelativePathsForPreview @ 01818f1c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

ID WCRefineAvatarCornerBeautifyViewController::allAvatarFrameRelativePathsForPreview
             (ID param_1,SEL param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined *puVar6;
  long lVar7;
  undefined *local_190;
  undefined *local_188;
  byte local_141;
  long local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined *local_e0;
  long local_d8;
  undefined4 local_cc;
  long local_c8;
  SEL local_c0;
  ID local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  lVar1 = 9;
  local_c0 = param_2;
  local_b8 = param_1;
  _NSSearchPathForDirectoriesInDomains(9,1,1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_c8 = lVar7;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  lVar7 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  if (lVar7 == 0) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_cc = 1;
    local_b0 = puVar2;
  }
  else {
    lVar7 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_stringByAppendingPathComponent__026cab30,&::cf_W);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_d8 = lVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_d8,0);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_count_0269cfe0);
    if (puVar2 == (undefined *)0x0) {
      puVar2 = *(undefined **)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_cc = 1;
      local_b0 = puVar2;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_f0 = puVar2;
      _memset(auStack_138,0,0x40);
      puVar2 = local_e8;
      (*(code *)PTR__objc_retain_02578638)();
      local_188 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10)
      ;
      if (local_188 != (undefined *)0x0) {
        lVar7 = *local_128;
        local_190 = (undefined *)0x0;
        do {
          do {
            if (*local_128 - lVar7 != 0) {
              _objc_enumerationMutation(*local_128 - lVar7,puVar2);
            }
            local_f8 = *(undefined8 *)(local_130 + (long)local_190 * 8);
            lVar1 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d8,PTR_s_stringByAppendingPathComponent__026cab30,local_f8);
            _objc_retainAutoreleasedReturnValue();
            local_141 = 0;
            puVar3 = local_e0;
            local_140 = lVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e0,PTR_s_fileExistsAtPath_isDirectory__026ca638,lVar1,&local_141);
            IVar5 = local_b8;
            if ((((ulong)puVar3 & 1) == 0) || ((local_141 & 1) != 0)) {
              local_cc = 3;
            }
            else {
              uVar4 = local_f8;
              (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_pathExtension_0269e090);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (IVar5,PTR_s_isSupportedAvatarFrameImageExt__026b60e8);
              (*(code *)PTR__objc_release_02578630)(uVar4);
              puVar3 = local_f0;
              if ((IVar5 & 1) == 0) {
                local_cc = 3;
              }
              else {
                puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                           &::cf_W);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
                (*(code *)PTR__objc_release_02578630)(puVar6);
                local_cc = 0;
              }
            }
            _objc_storeStrong(&local_140,0);
            local_190 = local_190 + 1;
          } while (local_190 < local_188);
          local_188 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                     0x10);
          local_190 = (undefined *)0x0;
        } while (local_188 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_f0,PTR_s_sortUsingSelector__0269e0a0,PTR_s_localizedStandardCompare__0269e098
                );
      puVar2 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_copy_0269d150);
      local_cc = 1;
      local_b0 = puVar2;
      _objc_storeStrong(&local_f0,0);
    }
    _objc_storeStrong(&local_e8);
    _objc_storeStrong(&local_e0,0);
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_b0;
}

