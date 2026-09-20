// FUN_00ef3e40 @ 00ef3e40

void FUN_00ef3e40(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_1f8;
  undefined *local_1f0;
  undefined *local_1b8;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  undefined8 local_160;
  undefined *local_158;
  undefined *local_150;
  ulong local_148;
  undefined *local_140;
  byte local_131;
  undefined *local_130;
  byte local_121;
  undefined *local_120;
  undefined *local_118;
  undefined1 local_109;
  undefined *local_108;
  uint local_fc;
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
  uVar1 = local_f0;
  FUN_00eee23c();
  _objc_retainAutoreleasedReturnValue();
  local_f8 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_e8 = (undefined *)0x0;
    local_fc = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_108 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_customAvatarFeatureEnabled_026a0958);
    if (((ulong)puVar2 & 1) == 0) {
      local_e8 = (undefined *)0x0;
      local_fc = 1;
    }
    else {
      uVar1 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_hasSuffix__0269d018,&cf__chatroom);
      local_109 = (undefined1)uVar1;
      local_121 = 0;
      local_131 = 0;
      local_1b8 = local_108;
      if ((uVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_108,PTR_s_customAvatarContactEnabledIDs_026a09d8);
        _objc_retainAutoreleasedReturnValue();
        local_131 = 1;
        local_130 = local_1b8;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_customAvatarGroupEnabledIDs_026a09d0);
        _objc_retainAutoreleasedReturnValue();
        local_121 = 1;
        local_120 = local_1b8;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_118 = local_1b8;
      if ((local_131 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_130);
      }
      if ((local_121 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_120);
      }
      puVar2 = local_118;
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((((ulong)puVar2 & 1) == 0) ||
         (puVar2 = local_118,
         (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_containsObject__0269cbb8,local_f8),
         ((ulong)puVar2 & 1) == 0)) {
        local_e8 = (undefined *)0x0;
        local_fc = 1;
      }
      else {
        _NSHomeDirectory();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_140 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        uVar1 = local_f8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f8,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,&cf__);
        _objc_retainAutoreleasedReturnValue();
        local_60 = &cf_png;
        local_58 = &cf_jpg;
        local_50 = &cf_jpeg;
        local_48 = &cf_gif;
        local_40 = &cf_webp;
        local_38 = &cf_heic;
        local_30 = &cf_bmp;
        puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_148 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_60,7);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        local_150 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        local_158 = puVar3;
        _memset(auStack_1a0,0,0x40);
        puVar2 = local_150;
        (*(code *)PTR__objc_retain_02578638)();
        local_1f0 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_e0,
                   0x10);
        if (local_1f0 != (undefined *)0x0) {
          lVar5 = *local_190;
          local_1f8 = (undefined *)0x0;
          do {
            do {
              if (*local_190 - lVar5 != 0) {
                _objc_enumerationMutation(*local_190 - lVar5,puVar2);
              }
              puVar3 = local_140;
              local_160 = *(undefined8 *)(local_198 + (long)local_1f8 * 8);
              puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                         &cf______);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_stringByAppendingPathComponent__026cab30);
              _objc_retainAutoreleasedReturnValue();
              local_1a8 = puVar3;
              (*(code *)PTR__objc_release_02578630)(puVar4);
              puVar3 = local_158;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_158,PTR_s_fileExistsAtPath__026ca630,local_1a8);
              if (((ulong)puVar3 & 1) == 0) {
                local_fc = 3;
              }
              else {
                puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___UIImage_026cdfd0,
                           PTR_s_imageWithContentsOfFile__0269e0e0,local_1a8);
                _objc_retainAutoreleasedReturnValue();
                local_1b0 = puVar3;
                if (puVar3 != (undefined *)0x0) {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_e8 = puVar3;
                }
                local_fc = (uint)(puVar3 != (undefined *)0x0);
                _objc_storeStrong(&local_1b0,0);
              }
              _objc_storeStrong(&local_1a8,0);
              if ((local_fc != 0) && (local_fc != 3)) goto LAB_00ef4460;
              local_1f8 = local_1f8 + 1;
            } while (local_1f8 < local_1f0);
            local_1f0 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_e0
                       ,0x10);
            local_1f8 = (undefined *)0x0;
          } while (local_1f0 != (undefined *)0x0);
        }
        local_fc = 0;
LAB_00ef4460:
        (*(code *)PTR__objc_release_02578630)(puVar2);
        if (local_fc == 0) {
          local_e8 = (undefined *)0x0;
          local_fc = 1;
        }
        _objc_storeStrong(&local_158);
        _objc_storeStrong(&local_150,0);
        _objc_storeStrong(&local_148,0);
        _objc_storeStrong(&local_140,0);
      }
      _objc_storeStrong(&local_118,0);
    }
    _objc_storeStrong(&local_108,0);
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

