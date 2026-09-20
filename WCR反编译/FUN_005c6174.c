// FUN_005c6174 @ 005c6174

void FUN_005c6174(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *local_2e8;
  undefined *local_2e0;
  undefined *local_2a8;
  undefined *local_2a0;
  long local_278;
  undefined *local_230;
  long local_228;
  undefined1 auStack_220 [8];
  long local_218;
  long *local_210;
  undefined8 local_1e0;
  undefined1 auStack_1d8 [8];
  long local_1d0;
  long *local_1c8;
  undefined8 local_198;
  undefined *local_190;
  undefined *local_188;
  undefined *local_180;
  int local_178;
  undefined *local_168;
  long local_160;
  long local_158;
  long local_150;
  undefined1 auStack_148 [128];
  undefined1 auStack_c8 [128];
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_158 = 0;
  _objc_storeStrong(&local_158,param_1);
  local_160 = 0;
  _objc_storeStrong(&local_160,param_2);
  lVar4 = local_158;
  local_168 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0);
  if (lVar4 == 0) {
    local_150 = 0;
    local_178 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_180 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,&cf___);
    _objc_retainAutoreleasedReturnValue();
    if (local_160 == 0) {
      local_278 = *(long *)PTR____NSArray0___02578280;
    }
    else {
      local_278 = local_160;
    }
    local_188 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObjectsFromArray__0269d540,local_278);
    local_48 = &cf___;
    local_40 = &cf__1_temp;
    local_38 = &cf__2_temp;
    local_30 = &cf__temp;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,4
              );
    _objc_retainAutoreleasedReturnValue();
    local_190 = puVar1;
    _memset(auStack_1d8,0,0x40);
    puVar1 = local_190;
    (*(code *)PTR__objc_retain_02578638)();
    local_2a0 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_c8,0x10);
    if (local_2a0 != (undefined *)0x0) {
      lVar4 = *local_1c8;
      local_2a8 = (undefined *)0x0;
      do {
        do {
          if (*local_1c8 - lVar4 != 0) {
            _objc_enumerationMutation(*local_1c8 - lVar4,puVar1);
          }
          local_198 = *(undefined8 *)(local_1d0 + (long)local_2a8 * 8);
          _memset(auStack_220,0,0x40);
          puVar2 = local_188;
          (*(code *)PTR__objc_retain_02578638)();
          local_2e0 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,auStack_148,
                     0x10);
          if (local_2e0 != (undefined *)0x0) {
            lVar5 = *local_210;
            local_2e8 = (undefined *)0x0;
            do {
              do {
                if (*local_210 - lVar5 != 0) {
                  _objc_enumerationMutation(*local_210 - lVar5,puVar2);
                }
                local_1e0 = *(undefined8 *)(local_218 + (long)local_2e8 * 8);
                lVar6 = local_158;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_158,PTR_s_stringByAppendingFormat__026a2088,&cf_____);
                _objc_retainAutoreleasedReturnValue();
                puVar3 = local_180;
                local_228 = lVar6;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_180,PTR_s_fileExistsAtPath__026ca630,lVar6);
                if (((ulong)puVar3 & 1) == 0) {
                  local_178 = 5;
                }
                else {
                  if (local_168 != (undefined *)0x0) {
                    puVar3 = local_180;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_180,PTR_s_attributesOfItemAtPath_error__0269db08,local_228,0);
                    _objc_retainAutoreleasedReturnValue();
                    local_230 = puVar3;
                    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_fileSize_026a1640);
                    lVar6 = (long)puVar3 - (long)local_168;
                    if (puVar3 < local_168) {
                      lVar6 = 5;
                      local_178 = 5;
                    }
                    else {
                      local_178 = 0;
                    }
                    _objc_storeStrong(lVar6,&local_230,0);
                    if (local_178 != 0) goto LAB_005c66a4;
                  }
                  lVar6 = local_228;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_150 = lVar6;
                  local_178 = 1;
                }
LAB_005c66a4:
                _objc_storeStrong(&local_228,0);
                if (local_178 != 5) goto LAB_005c6740;
                local_2e8 = local_2e8 + 1;
              } while (local_2e8 < local_2e0);
              local_2e0 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,
                         auStack_148,0x10);
              local_2e8 = (undefined *)0x0;
            } while (local_2e0 != (undefined *)0x0);
          }
          local_178 = 0;
LAB_005c6740:
          (*(code *)PTR__objc_release_02578630)(puVar2);
          if (local_178 != 0) goto LAB_005c67d4;
          local_2a8 = local_2a8 + 1;
        } while (local_2a8 < local_2a0);
        local_2a0 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_c8,
                   0x10);
        local_2a8 = (undefined *)0x0;
      } while (local_2a0 != (undefined *)0x0);
    }
    local_178 = 0;
LAB_005c67d4:
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_178 == 0) {
      local_150 = 0;
      local_178 = 1;
    }
    _objc_storeStrong(&local_190);
    _objc_storeStrong(&local_188,0);
    _objc_storeStrong(&local_180,0);
  }
  _objc_storeStrong(&local_160);
  _objc_storeStrong(&local_158,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_150);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

