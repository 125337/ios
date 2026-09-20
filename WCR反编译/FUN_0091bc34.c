// FUN_0091bc34 @ 0091bc34

void FUN_0091bc34(long param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *local_290;
  undefined *local_288;
  undefined *local_250;
  undefined *local_248;
  cfstringStruct *local_228;
  cfstringStruct *local_218;
  long local_200;
  undefined1 auStack_1f8 [8];
  long local_1f0;
  long *local_1e8;
  undefined8 local_1b8;
  undefined *local_1b0;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  long local_168;
  undefined *local_160;
  undefined *local_158;
  undefined *local_150;
  long local_148;
  long local_140;
  undefined1 auStack_138 [128];
  undefined1 auStack_b8 [128];
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_148 = param_1;
  local_140 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = *(cfstringStruct **)(param_1 + 0x20);
  local_150 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_nsLogLocalDirectoryPath_026aa400);
  _objc_retainAutoreleasedReturnValue();
  local_218 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_218 = &cf___;
  }
  local_38 = local_218;
  pcVar3 = *(cfstringStruct **)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_legacyNSLogLocalDirectoryPath_026aa450);
  _objc_retainAutoreleasedReturnValue();
  local_228 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_228 = &cf___;
  }
  local_30 = local_228;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2);
  _objc_retainAutoreleasedReturnValue();
  local_158 = puVar1;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  local_160 = puVar1;
  _memset(auStack_1a8,0,0x40);
  puVar1 = local_158;
  (*(code *)PTR__objc_retain_02578638)();
  local_248 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_b8,0x10);
  if (local_248 != (undefined *)0x0) {
    lVar7 = *local_198;
    local_250 = (undefined *)0x0;
    do {
      do {
        if (*local_198 - lVar7 != 0) {
          _objc_enumerationMutation(*local_198 - lVar7,puVar1);
        }
        lVar8 = *(long *)(local_1a0 + (long)local_250 * 8);
        local_168 = lVar8;
        (*(code *)PTR__objc_msgSend_02578628)(lVar8,PTR_s_length_0269cca0);
        if ((lVar8 != 0) &&
           (puVar4 = local_160,
           (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_containsObject__0269cbb8,local_168)
           , ((ulong)puVar4 & 1) == 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_addObject__0269d180,local_168);
          puVar4 = local_150;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_150,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_168,0);
          _objc_retainAutoreleasedReturnValue();
          local_1b0 = puVar4;
          _memset(auStack_1f8,0,0x40);
          puVar4 = local_1b0;
          (*(code *)PTR__objc_retain_02578638)();
          local_288 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_138,
                     0x10);
          if (local_288 != (undefined *)0x0) {
            lVar8 = *local_1e8;
            local_290 = (undefined *)0x0;
            do {
              do {
                if (*local_1e8 - lVar8 != 0) {
                  _objc_enumerationMutation(*local_1e8 - lVar8,puVar4);
                }
                local_1b8 = *(undefined8 *)(local_1f0 + (long)local_290 * 8);
                uVar5 = *(ulong *)(param_1 + 0x20);
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar5,PTR_s_isNSLogLocalFileName__026aa458,local_1b8);
                if ((uVar5 & 1) != 0) {
                  lVar6 = local_168;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_168,PTR_s_stringByAppendingPathComponent__026cab30,local_1b8);
                  _objc_retainAutoreleasedReturnValue();
                  local_200 = lVar6;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_150,PTR_s_removeItemAtPath_error__0269f910,lVar6);
                  _objc_storeStrong(&local_200,0);
                }
                local_290 = local_290 + 1;
              } while (local_290 < local_288);
              local_288 = puVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,
                         auStack_138,0x10);
              local_290 = (undefined *)0x0;
            } while (local_288 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar4);
          _objc_storeStrong(&local_1b0,0);
        }
        local_250 = local_250 + 1;
      } while (local_250 < local_248);
      local_248 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_b8,0x10)
      ;
      local_250 = (undefined *)0x0;
    } while (local_248 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setCurrentNSLogLocalFilePath__026aa410);
  _objc_storeStrong(&local_160,0);
  _objc_storeStrong(&local_158,0);
  _objc_storeStrong(&local_150,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

