// FUN_01508b28 @ 01508b28

void FUN_01508b28(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *local_350;
  undefined *local_2f0;
  undefined *local_2e8;
  undefined *local_2b0;
  undefined *local_2a8;
  undefined *local_268;
  undefined *local_260;
  byte local_251;
  undefined *local_250;
  byte local_241;
  undefined *local_240;
  byte local_231;
  undefined *local_230;
  undefined *local_228;
  undefined *local_220;
  undefined *local_218;
  undefined1 auStack_210 [8];
  long local_208;
  long *local_200;
  undefined8 local_1d0;
  undefined1 auStack_1c8 [8];
  long local_1c0;
  long *local_1b8;
  undefined *local_188;
  undefined *local_180;
  undefined *local_178;
  undefined *local_170;
  undefined *local_168;
  int local_15c;
  undefined *local_158;
  undefined *local_150;
  undefined1 auStack_148 [128];
  undefined1 auStack_c8 [128];
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSBundle_026ce418;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSBundle_026ce418,PTR_s_mainBundle_026a0c28);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_158 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_158;
  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    local_150 = (undefined *)0x0;
    local_15c = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = &cf_ProtobufLite3;
    local_30 = &cf_ProtobufLite;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_168 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38);
    _objc_retainAutoreleasedReturnValue();
    local_48 = &cf_Frameworks;
    local_40 = &cf_Contents_Frameworks;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_170 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,2
              );
    _objc_retainAutoreleasedReturnValue();
    local_180 = (undefined *)0x0;
    local_178 = puVar1;
    _memset(auStack_1c8,0,0x40);
    puVar1 = local_170;
    (*(code *)PTR__objc_retain_02578638)();
    local_2a8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c8,auStack_c8,0x10);
    if (local_2a8 != (undefined *)0x0) {
      lVar6 = *local_1b8;
      local_2b0 = (undefined *)0x0;
      do {
        do {
          if (*local_1b8 - lVar6 != 0) {
            _objc_enumerationMutation(*local_1b8 - lVar6,puVar1);
          }
          local_188 = *(undefined **)(local_1c0 + (long)local_2b0 * 8);
          _memset(auStack_210,0,0x40);
          puVar2 = local_178;
          (*(code *)PTR__objc_retain_02578638)();
          local_2e8 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,auStack_148,
                     0x10);
          if (local_2e8 != (undefined *)0x0) {
            lVar7 = *local_200;
            local_2f0 = (undefined *)0x0;
            do {
              do {
                if (*local_200 - lVar7 != 0) {
                  _objc_enumerationMutation(*local_200 - lVar7,puVar2);
                }
                local_1d0 = *(undefined8 *)(local_208 + (long)local_2f0 * 8);
                puVar3 = local_158;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_158,PTR_s_stringByAppendingPathComponent__026cab30,local_1d0);
                _objc_retainAutoreleasedReturnValue();
                puVar4 = local_188;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_188,PTR_s_stringByAppendingPathExtension__026a4580,&cf_framework);
                _objc_retainAutoreleasedReturnValue();
                puVar5 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar3,PTR_s_stringByAppendingPathComponent__026cab30);
                _objc_retainAutoreleasedReturnValue();
                local_218 = puVar5;
                (*(code *)PTR__objc_release_02578630)(puVar4);
                (*(code *)PTR__objc_release_02578630)(puVar3);
                puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                puVar4 = local_218;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_218,PTR_s_stringByAppendingPathComponent__026cab30,&cf_Info_plist);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar3,PTR_s_dictionaryWithContentsOfFile__026a3348);
                _objc_retainAutoreleasedReturnValue();
                local_220 = puVar3;
                (*(code *)PTR__objc_release_02578630)(puVar4);
                puVar3 = local_220;
                puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
                local_231 = 0;
                local_241 = 0;
                local_251 = 0;
                if (((ulong)puVar3 & 1) == 0) {
LAB_015090cc:
                  local_350 = local_188;
                }
                else {
                  puVar3 = local_220;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_220,PTR_s_objectForKeyedSubscript__0269d098,
                             &cf_CFBundleExecutable);
                  _objc_retainAutoreleasedReturnValue();
                  local_231 = 1;
                  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
                  local_230 = puVar3;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4)
                  ;
                  if (((ulong)puVar3 & 1) == 0) goto LAB_015090cc;
                  puVar3 = local_220;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_220,PTR_s_objectForKeyedSubscript__0269d098,
                             &cf_CFBundleExecutable);
                  _objc_retainAutoreleasedReturnValue();
                  local_241 = 1;
                  local_240 = puVar3;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  if (puVar3 == (undefined *)0x0) goto LAB_015090cc;
                  local_350 = local_220;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_220,PTR_s_objectForKeyedSubscript__0269d098,
                             &cf_CFBundleExecutable);
                  _objc_retainAutoreleasedReturnValue();
                  local_251 = 1;
                  local_250 = local_350;
                }
                (*(code *)PTR__objc_retain_02578638)();
                local_228 = local_350;
                if ((local_251 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_250);
                }
                if ((local_241 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_240);
                }
                if ((local_231 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_230);
                }
                puVar3 = local_218;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_218,PTR_s_stringByAppendingPathComponent__026cab30,local_228);
                _objc_retainAutoreleasedReturnValue();
                puVar4 = local_168;
                local_260 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_168,PTR_s_isReadableFileAtPath__026aff68,puVar3);
                if (((ulong)puVar4 & 1) == 0) {
LAB_015091f8:
                  puVar3 = local_158;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_158,PTR_s_stringByAppendingPathComponent__026cab30,local_1d0);
                  _objc_retainAutoreleasedReturnValue();
                  puVar4 = puVar3;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  _objc_retainAutoreleasedReturnValue();
                  local_268 = puVar4;
                  (*(code *)PTR__objc_release_02578630)(puVar3);
                  puVar3 = local_168;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_168,PTR_s_isReadableFileAtPath__026aff68,local_268);
                  if (((ulong)puVar3 & 1) == 0) {
LAB_015092d8:
                    local_15c = 0;
                  }
                  else {
                    puVar4 = local_268;
                    FUN_01507c5c();
                    puVar3 = local_268;
                    if (((ulong)puVar4 & 1) == 0) {
                      if (local_180 == (undefined *)0x0) {
                        _objc_storeStrong(&local_180,local_268);
                      }
                      goto LAB_015092d8;
                    }
                    (*(code *)PTR__objc_retain_02578638)();
                    local_150 = puVar3;
                    local_15c = 1;
                  }
                  _objc_storeStrong(&local_268,0);
                }
                else {
                  puVar4 = local_260;
                  FUN_01507c5c();
                  puVar3 = local_260;
                  if (((ulong)puVar4 & 1) == 0) {
                    if (local_180 == (undefined *)0x0) {
                      _objc_storeStrong(&local_180,local_260);
                    }
                    goto LAB_015091f8;
                  }
                  (*(code *)PTR__objc_retain_02578638)();
                  local_150 = puVar3;
                  local_15c = 1;
                }
                _objc_storeStrong(&local_260);
                _objc_storeStrong(&local_228,0);
                _objc_storeStrong(&local_220,0);
                _objc_storeStrong(&local_218,0);
                if (local_15c != 0) goto LAB_01509398;
                local_2f0 = local_2f0 + 1;
              } while (local_2f0 < local_2e8);
              local_2e8 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,
                         auStack_148,0x10);
              local_2f0 = (undefined *)0x0;
            } while (local_2e8 != (undefined *)0x0);
          }
          local_15c = 0;
LAB_01509398:
          (*(code *)PTR__objc_release_02578630)(puVar2);
          if (local_15c != 0) goto LAB_01509420;
          local_2b0 = local_2b0 + 1;
        } while (local_2b0 < local_2a8);
        local_2a8 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c8,auStack_c8,
                   0x10);
        local_2b0 = (undefined *)0x0;
      } while (local_2a8 != (undefined *)0x0);
    }
    local_15c = 0;
LAB_01509420:
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_180;
    if (local_15c == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_150 = puVar1;
      local_15c = 1;
    }
    _objc_storeStrong(&local_180);
    _objc_storeStrong(&local_178,0);
    _objc_storeStrong(&local_170,0);
    _objc_storeStrong(&local_168,0);
  }
  _objc_storeStrong(&local_158,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_150);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

