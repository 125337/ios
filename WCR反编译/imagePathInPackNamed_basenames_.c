// imagePathInPackNamed:basenames: @ 015ce9b0

/* Function Stack Size: 0x20 bytes */

ID WCRefineWechatThemeStore::imagePathInPackNamed_basenames_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ulong uVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *local_2e0;
  undefined *local_2d8;
  ulong local_2a0;
  ulong local_298;
  ID local_250;
  undefined1 auStack_240 [8];
  long local_238;
  long *local_230;
  long local_200;
  undefined1 auStack_1f8 [8];
  long local_1f0;
  long *local_1e8;
  undefined8 local_1b8;
  undefined *local_1b0;
  undefined *local_1a8;
  int local_1a0;
  bool local_199;
  ID local_198;
  byte local_189;
  ID local_188;
  ID local_180;
  ulong local_178;
  long local_170;
  SEL local_168;
  ID local_160;
  ID local_158;
  undefined1 auStack_150 [128];
  undefined1 auStack_d0 [128];
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_170 = 0;
  local_168 = param_2;
  local_160 = param_1;
  _objc_storeStrong(&local_170,param_3);
  local_178 = 0;
  _objc_storeStrong(&local_178,param_4);
  lVar6 = local_170;
  (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_length_0269cca0);
  local_189 = 0;
  local_199 = false;
  if (lVar6 == 0) {
    local_250 = 0;
  }
  else {
    local_250 = local_160;
    (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_repositoryPath_026aeb48);
    _objc_retainAutoreleasedReturnValue();
    local_189 = 1;
    local_188 = local_250;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_198 = local_250;
  }
  local_199 = lVar6 != 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_180 = local_250;
  if ((local_199 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_198);
  }
  if ((local_189 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_188);
  }
  IVar2 = local_180;
  (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_length_0269cca0);
  if (IVar2 == 0) {
    local_158 = 0;
    local_1a0 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_1a8 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar4 = local_1a8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_count_0269cfe0);
    puVar3 = PTR__OBJC_CLASS___NSSet_026ce150;
    if (puVar4 == (undefined *)0x0) {
      local_158 = 0;
      local_1a0 = 1;
    }
    else {
      local_50 = &cf_png;
      local_48 = &cf_jpg;
      local_40 = &cf_jpeg;
      local_38 = &cf_heic;
      local_30 = &cf_webp;
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50
                 ,5);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setWithArray__0269d9a0);
      _objc_retainAutoreleasedReturnValue();
      local_1b0 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _memset(auStack_1f8,0,0x40);
      uVar1 = local_178;
      (*(code *)PTR__objc_retain_02578638)();
      local_298 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_d0,0x10);
      if (local_298 != 0) {
        lVar6 = *local_1e8;
        local_2a0 = 0;
        do {
          do {
            if (*local_1e8 - lVar6 != 0) {
              _objc_enumerationMutation(*local_1e8 - lVar6,uVar1);
            }
            local_1b8 = *(undefined8 *)(local_1f0 + local_2a0 * 8);
            _memset(auStack_240,0,0x40);
            puVar3 = local_1a8;
            (*(code *)PTR__objc_retain_02578638)();
            local_2d8 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,
                       auStack_150,0x10);
            if (local_2d8 != (undefined *)0x0) {
              lVar7 = *local_230;
              local_2e0 = (undefined *)0x0;
              do {
                do {
                  if (*local_230 - lVar7 != 0) {
                    _objc_enumerationMutation(*local_230 - lVar7,puVar3);
                  }
                  puVar4 = local_1b0;
                  lVar8 = *(long *)(local_238 + (long)local_2e0 * 8);
                  local_200 = lVar8;
                  (*(code *)PTR__objc_msgSend_02578628)(lVar8,PTR_s_pathExtension_0269e090);
                  _objc_retainAutoreleasedReturnValue();
                  lVar5 = lVar8;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_containsObject__0269cbb8);
                  (*(code *)PTR__objc_release_02578630)(lVar5);
                  (*(code *)PTR__objc_release_02578630)(lVar8);
                  if (((ulong)puVar4 & 1) != 0) {
                    lVar5 = local_200;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_200,PTR_s_stringByDeletingPathExtension_0269fd18);
                    _objc_retainAutoreleasedReturnValue();
                    lVar8 = lVar5;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    (*(code *)PTR__objc_release_02578630)(lVar5);
                    if (lVar8 == 0) {
                      IVar2 = local_180;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_180,PTR_s_stringByAppendingPathComponent__026cab30,local_200)
                      ;
                      _objc_retainAutoreleasedReturnValue();
                      local_1a0 = 1;
                      local_158 = IVar2;
                      goto LAB_015cefb0;
                    }
                  }
                  local_2e0 = local_2e0 + 1;
                } while (local_2e0 < local_2d8);
                local_2d8 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,
                           auStack_150,0x10);
                local_2e0 = (undefined *)0x0;
              } while (local_2d8 != (undefined *)0x0);
            }
            local_1a0 = 0;
LAB_015cefb0:
            (*(code *)PTR__objc_release_02578630)(puVar3);
            if (local_1a0 != 0) goto LAB_015cf038;
            local_2a0 = local_2a0 + 1;
          } while (local_2a0 < local_298);
          local_298 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_d0,
                     0x10);
          local_2a0 = 0;
        } while (local_298 != 0);
      }
      local_1a0 = 0;
LAB_015cf038:
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if (local_1a0 == 0) {
        local_158 = 0;
        local_1a0 = 1;
      }
      _objc_storeStrong(&local_1b0,0);
    }
    _objc_storeStrong(&local_1a8,0);
  }
  _objc_storeStrong(&local_180);
  _objc_storeStrong(&local_178,0);
  _objc_storeStrong(&local_170,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_158;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

