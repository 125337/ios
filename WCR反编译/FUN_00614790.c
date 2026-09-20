// FUN_00614790 @ 00614790

void FUN_00614790(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *local_260;
  undefined *local_258;
  undefined *local_1e0;
  undefined *local_1b0;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  undefined8 local_168;
  undefined *local_160;
  undefined *local_158;
  ulong local_150;
  undefined *local_148;
  byte local_139;
  undefined *local_138;
  byte local_129;
  undefined *local_128;
  undefined *local_120;
  undefined1 local_111;
  undefined *local_110;
  uint local_108;
  ulong local_f8;
  ulong local_f0;
  undefined *local_e8;
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
  uVar2 = local_f0;
  FUN_006150c0();
  _objc_retainAutoreleasedReturnValue();
  local_f8 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    local_e8 = (undefined *)0x0;
    local_108 = 1;
  }
  else {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_110 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_customAvatarFeatureEnabled_026a0958);
    if (((ulong)puVar3 & 1) == 0) {
      local_e8 = (undefined *)0x0;
      local_108 = 1;
    }
    else {
      uVar2 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_hasSuffix__0269d018,&cf__chatroom);
      local_111 = (undefined1)uVar2;
      local_129 = 0;
      local_139 = 0;
      local_1e0 = local_110;
      if ((uVar2 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_110,PTR_s_customAvatarContactEnabledIDs_026a09d8);
        _objc_retainAutoreleasedReturnValue();
        local_139 = 1;
        local_138 = local_1e0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_customAvatarGroupEnabledIDs_026a09d0);
        _objc_retainAutoreleasedReturnValue();
        local_129 = 1;
        local_128 = local_1e0;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_120 = local_1e0;
      if ((local_139 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_138);
      }
      if ((local_129 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_128);
      }
      puVar3 = local_120;
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
      if ((((ulong)puVar3 & 1) == 0) ||
         (puVar3 = local_120,
         (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_containsObject__0269cbb8,local_f8),
         ((ulong)puVar3 & 1) == 0)) {
        local_e8 = (undefined *)0x0;
        local_108 = 1;
      }
      else {
        _NSHomeDirectory();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_148 = puVar4;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        uVar2 = local_f8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f8,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,&cf__);
        _objc_retainAutoreleasedReturnValue();
        local_60 = &cf_gif;
        local_58 = &cf_png;
        local_50 = &cf_jpg;
        local_48 = &cf_jpeg;
        local_40 = &cf_webp;
        local_38 = &cf_heic;
        local_30 = &cf_bmp;
        puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_150 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_60,7);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        local_158 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        local_160 = puVar4;
        _memset(auStack_1a8,0,0x40);
        puVar3 = local_158;
        (*(code *)PTR__objc_retain_02578638)();
        local_258 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_e0,
                   0x10);
        if (local_258 != (undefined *)0x0) {
          lVar6 = *local_198;
          local_260 = (undefined *)0x0;
          do {
            do {
              if (*local_198 - lVar6 != 0) {
                _objc_enumerationMutation(*local_198 - lVar6,puVar3);
              }
              puVar4 = local_148;
              local_168 = *(undefined8 *)(local_1a0 + (long)local_260 * 8);
              puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                         &cf______);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar4,PTR_s_stringByAppendingPathComponent__026cab30);
              _objc_retainAutoreleasedReturnValue();
              local_1b0 = puVar4;
              (*(code *)PTR__objc_release_02578630)(puVar5);
              puVar5 = local_160;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_160,PTR_s_fileExistsAtPath__026ca630,local_1b0);
              puVar4 = local_1b0;
              bVar1 = ((ulong)puVar5 & 1) != 0;
              if (bVar1) {
                (*(code *)PTR__objc_retain_02578638)();
                local_e8 = puVar4;
              }
              local_108 = (uint)bVar1;
              _objc_storeStrong(&local_1b0,0);
              if (local_108 != 0) goto LAB_00614f48;
              local_260 = local_260 + 1;
            } while (local_260 < local_258);
            local_258 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_e0
                       ,0x10);
            local_260 = (undefined *)0x0;
          } while (local_258 != (undefined *)0x0);
        }
        local_108 = 0;
LAB_00614f48:
        (*(code *)PTR__objc_release_02578630)(puVar3);
        if (local_108 == 0) {
          local_e8 = (undefined *)0x0;
          local_108 = 1;
        }
        _objc_storeStrong(&local_160);
        _objc_storeStrong(&local_158,0);
        _objc_storeStrong(&local_150,0);
        _objc_storeStrong(&local_148,0);
      }
      _objc_storeStrong(&local_120,0);
    }
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

