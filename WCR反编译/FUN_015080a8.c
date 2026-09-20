// FUN_015080a8 @ 015080a8

void FUN_015080a8(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *local_278;
  uint local_260;
  uint local_25c;
  undefined *local_248;
  undefined *local_230;
  uint local_1ec;
  undefined *local_1d0;
  undefined *local_1c8;
  undefined *local_198;
  byte local_189;
  undefined *local_188;
  undefined *local_180;
  byte local_172;
  bool local_171;
  undefined *local_170;
  undefined *local_168;
  bool local_159;
  undefined *local_158;
  undefined *local_150;
  undefined *local_148;
  undefined *local_140;
  byte local_131;
  undefined *local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  uint local_bc;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR__OBJC_CLASS___NSBundle_026ce418;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSBundle_026ce418,PTR_s_mainBundle_026a0c28);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_b8 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
  if (puVar2 == (undefined *)0x0) {
    local_b0 = (undefined *)0x0;
    local_bc = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_b8;
    local_c8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_stringByAppendingPathComponent__026cab30,
               &cf_PlugIns_WeChatShareExtensionNew_appex_WeChatShareExtensionNew);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_c8;
    local_d0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_isReadableFileAtPath__026aff68,puVar3);
    puVar2 = local_d0;
    if (((ulong)puVar5 & 1) == 0) {
      puVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_stringByAppendingPathComponent__026cab30,&cf_PlugIns);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_c8;
      local_d8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_contentsOfDirectoryAtPath_error__0269e088,puVar2,0);
      _objc_retainAutoreleasedReturnValue();
      local_e0 = puVar3;
      _memset(auStack_128,0,0x40);
      puVar2 = local_e0;
      (*(code *)PTR__objc_retain_02578638)();
      local_1c8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10)
      ;
      if (local_1c8 != (undefined *)0x0) {
        lVar4 = *local_118;
        local_1d0 = (undefined *)0x0;
        do {
          do {
            if (*local_118 - lVar4 != 0) {
              _objc_enumerationMutation(*local_118 - lVar4,puVar2);
            }
            puVar5 = *(undefined **)(local_120 + (long)local_1d0 * 8);
            puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_e8 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
            local_131 = 0;
            local_1ec = 1;
            if (((ulong)puVar5 & 1) != 0) {
              puVar3 = local_e8;
              (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_pathExtension_0269e090);
              _objc_retainAutoreleasedReturnValue();
              local_131 = 1;
              local_130 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_1ec = (uint)puVar3 ^ 1;
            }
            if ((local_131 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_130);
            }
            if ((local_1ec & 1) == 0) {
              puVar5 = local_d8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_d8,PTR_s_stringByAppendingPathComponent__026cab30,local_e8);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              local_140 = puVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar5,PTR_s_stringByAppendingPathComponent__026cab30,&cf_Info_plist);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_dictionaryWithContentsOfFile__026a3348);
              _objc_retainAutoreleasedReturnValue();
              local_148 = puVar3;
              (*(code *)PTR__objc_release_02578630)(puVar5);
              puVar3 = local_148;
              puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
              local_159 = false;
              bVar1 = ((ulong)puVar3 & 1) == 0;
              if (bVar1) {
                local_230 = (undefined *)0x0;
              }
              else {
                local_230 = local_148;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_148,PTR_s_objectForKeyedSubscript__0269d098,&cf_CFBundleIdentifier)
                ;
                _objc_retainAutoreleasedReturnValue();
                local_158 = local_230;
              }
              local_159 = !bVar1;
              (*(code *)PTR__objc_retain_02578638)();
              local_150 = local_230;
              if ((local_159 & 1U) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_158);
              }
              puVar3 = local_148;
              puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
              local_171 = false;
              bVar1 = ((ulong)puVar3 & 1) == 0;
              if (bVar1) {
                local_248 = (undefined *)0x0;
              }
              else {
                local_248 = local_148;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_148,PTR_s_objectForKeyedSubscript__0269d098,&cf_CFBundleExecutable)
                ;
                _objc_retainAutoreleasedReturnValue();
                local_170 = local_248;
              }
              local_171 = !bVar1;
              (*(code *)PTR__objc_retain_02578638)();
              local_168 = local_248;
              if ((local_171 & 1U) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_170);
              }
              puVar3 = local_150;
              puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
              if (((ulong)puVar3 & 1) == 0) {
LAB_015086f4:
                puVar3 = local_168;
                puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
                local_260 = 0;
                if (((ulong)puVar3 & 1) != 0) {
                  puVar3 = local_168;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_168,PTR_s_containsString__0269d0b0,&cf_ShareExtension);
                  local_260 = (uint)puVar3;
                }
                local_25c = local_260;
              }
              else {
                puVar3 = local_150;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_150,PTR_s_containsString__0269d0b0,&cf_sharetimeline);
                local_25c = 1;
                if (((ulong)puVar3 & 1) == 0) goto LAB_015086f4;
              }
              puVar3 = local_168;
              local_172 = (byte)local_25c & 1;
              if ((local_25c & 1) == 0) {
                local_bc = 3;
              }
              else {
                puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
                local_189 = 0;
                if ((((ulong)puVar3 & 1) == 0) ||
                   (puVar3 = local_168,
                   (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_length_0269cca0),
                   puVar3 == (undefined *)0x0)) {
                  local_278 = local_e8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_e8,PTR_s_stringByDeletingPathExtension_0269fd18);
                  _objc_retainAutoreleasedReturnValue();
                  local_189 = 1;
                  local_188 = local_278;
                }
                else {
                  local_278 = local_168;
                }
                (*(code *)PTR__objc_retain_02578638)();
                local_180 = local_278;
                if ((local_189 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_188);
                }
                puVar3 = local_140;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_140,PTR_s_stringByAppendingPathComponent__026cab30,local_180);
                _objc_retainAutoreleasedReturnValue();
                puVar5 = local_c8;
                local_198 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_c8,PTR_s_isReadableFileAtPath__026aff68,puVar3);
                puVar3 = local_198;
                bVar1 = ((ulong)puVar5 & 1) != 0;
                if (bVar1) {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_b0 = puVar3;
                }
                local_bc = (uint)bVar1;
                _objc_storeStrong(&local_198);
                _objc_storeStrong(&local_180,0);
              }
              _objc_storeStrong(&local_168);
              _objc_storeStrong(&local_150,0);
              _objc_storeStrong(&local_148,0);
              _objc_storeStrong(&local_140,0);
              if ((local_bc != 0) && (local_bc != 3)) goto LAB_015089fc;
            }
            local_1d0 = local_1d0 + 1;
          } while (local_1d0 < local_1c8);
          local_1c8 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                     0x10);
          local_1d0 = (undefined *)0x0;
        } while (local_1c8 != (undefined *)0x0);
      }
      local_bc = 0;
LAB_015089fc:
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (local_bc == 0) {
        local_b0 = (undefined *)0x0;
        local_bc = 1;
      }
      _objc_storeStrong(&local_e0);
      _objc_storeStrong(&local_d8,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = puVar2;
      local_bc = 1;
    }
    _objc_storeStrong(&local_d0);
    _objc_storeStrong(&local_c8,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

