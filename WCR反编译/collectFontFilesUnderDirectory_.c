// collectFontFilesUnderDirectory: @ 019defec

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

ID WCRefineFontBeautifyViewController::collectFontFilesUnderDirectory_
             (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  ulong uVar7;
  long lVar8;
  cfstringStruct *pcVar9;
  cfstringStruct *local_1e0;
  undefined *local_190;
  undefined *local_188;
  undefined8 local_138;
  ulong local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  cfstringStruct *local_e8;
  undefined *local_e0;
  ID local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  SEL local_c0;
  ID local_b8;
  undefined1 auStack_b0 [128];
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_b8;
  local_d0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_allowedFontExtensions_026baec8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_d8 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSURL_026ce328;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_c8);
  _objc_retainAutoreleasedReturnValue();
  local_30 = *(undefined8 *)PTR__NSURLIsDirectoryKey_02578260;
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_enumeratorAtURL_includingPropert_026b0eb8,puVar3,puVar4,0,0);
  _objc_retainAutoreleasedReturnValue();
  local_e0 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _memset(auStack_128,0,0x40);
  puVar1 = local_e0;
  (*(code *)PTR__objc_retain_02578638)();
  local_188 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_b0,0x10);
  if (local_188 != (undefined *)0x0) {
    lVar8 = *local_118;
    local_190 = (undefined *)0x0;
    do {
      do {
        if (*local_118 - lVar8 != 0) {
          _objc_enumerationMutation(*local_118 - lVar8,puVar1);
        }
        pcVar9 = *(cfstringStruct **)(local_120 + (long)local_190 * 8);
        local_e8 = pcVar9;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar9,PTR_s_path_0269d4d8);
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = pcVar9;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar9);
        if (((ulong)pcVar6 & 1) == 0) {
          local_130 = 0;
          local_138 = 0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e8,PTR_s_getResourceValue_forKey_error__026b2d98,&local_138,
                     *(undefined8 *)PTR__NSURLIsDirectoryKey_02578260,0);
          _objc_storeStrong(&local_130,local_138);
          uVar7 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_boolValue_026ca540);
          IVar2 = local_d8;
          if ((uVar7 & 1) == 0) {
            pcVar6 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_pathExtension_0269e090);
            _objc_retainAutoreleasedReturnValue();
            pcVar9 = pcVar6;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            local_1e0 = pcVar9;
            if (pcVar9 == (cfstringStruct *)0x0) {
              local_1e0 = &::cf___;
            }
            (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_copy_0269d150);
            (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_containsObject__0269cbb8);
            (*(code *)PTR__objc_release_02578630)(local_1e0);
            (*(code *)PTR__objc_release_02578630)(pcVar9);
            (*(code *)PTR__objc_release_02578630)(pcVar6);
            puVar3 = local_d0;
            if ((IVar2 & 1) != 0) {
              pcVar6 = local_e8;
              (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_path_0269d4d8);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
              (*(code *)PTR__objc_release_02578630)(pcVar6);
            }
          }
          _objc_storeStrong(&local_130,0);
        }
        local_190 = local_190 + 1;
      } while (local_190 < local_188);
      local_188 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_b0,0x10)
      ;
      local_190 = (undefined *)0x0;
    } while (local_188 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar1;
}

