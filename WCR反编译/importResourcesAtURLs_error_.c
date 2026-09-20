// importResourcesAtURLs:error: @ 015d1cac

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

unsigned_long_long
WCRefineWechatThemeStore::importResourcesAtURLs_error_
          (ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  bool bVar1;
  ulong uVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  ID local_288;
  uint local_214;
  ulong local_1f8;
  ulong local_1f0;
  ID local_1a0;
  ID local_198;
  ID local_190;
  byte local_181;
  undefined8 local_180;
  undefined8 local_178;
  byte local_169;
  undefined1 auStack_168 [8];
  long local_160;
  long *local_158;
  undefined8 local_128;
  ID local_120;
  unsigned_long_long local_118;
  undefined *local_110;
  undefined4 local_104;
  ID local_100;
  ID *local_f8;
  ulong local_f0;
  SEL local_e8;
  ID local_e0;
  unsigned_long_long local_d8;
  undefined1 auStack_d0 [128];
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_f0 = 0;
  local_e8 = param_2;
  local_e0 = param_1;
  _objc_storeStrong(&local_f0,param_3);
  IVar3 = local_e0;
  local_f8 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_configuredThemePath_026b0fa8);
  _objc_retainAutoreleasedReturnValue();
  local_100 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_length_0269cca0);
  puVar5 = PTR__OBJC_CLASS___NSSet_026ce150;
  if (IVar3 == 0) {
    if (local_f8 != (ID *)0x0) {
      IVar3 = 6;
      FUN_015d140c(6,&cf_HQb);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *local_f8 = IVar3;
    }
    local_d8 = 0;
    local_104 = 1;
  }
  else {
    local_50 = &cf_png;
    local_48 = &cf_svg;
    local_40 = &cf_css;
    local_38 = &cf_xml;
    local_30 = &cf_car;
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50,5
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setWithArray__0269d9a0);
    _objc_retainAutoreleasedReturnValue();
    local_110 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_118 = 0;
    local_120 = 0;
    _memset(auStack_168,0,0x40);
    uVar2 = local_f0;
    (*(code *)PTR__objc_retain_02578638)();
    local_1f0 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_d0,0x10);
    if (local_1f0 != 0) {
      lVar8 = *local_158;
      local_1f8 = 0;
      do {
        do {
          if (*local_158 - lVar8 != 0) {
            _objc_enumerationMutation(*local_158 - lVar8,uVar2);
          }
          uVar9 = *(undefined8 *)(local_160 + local_1f8 * 8);
          local_128 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar9,PTR_s_startAccessingSecurityScopedReso_026a22c0);
          local_169 = (byte)uVar9;
          uVar9 = local_128;
          (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_pathExtension_0269e090);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_178 = uVar6;
          (*(code *)PTR__objc_release_02578630)(uVar9);
          puVar5 = local_110;
          (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_containsObject__0269cbb8,local_178);
          local_181 = 0;
          local_214 = 0;
          if (((ulong)puVar5 & 1) != 0) {
            uVar9 = local_128;
            (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_lastPathComponent_026ca780);
            _objc_retainAutoreleasedReturnValue();
            local_181 = 1;
            local_180 = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_214 = (uint)uVar9 ^ 1;
          }
          if ((local_181 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_180);
          }
          IVar3 = local_100;
          if ((local_214 & 1) != 0) {
            uVar9 = local_128;
            (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_lastPathComponent_026ca780);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar3,PTR_s_stringByAppendingPathComponent__026cab30);
            _objc_retainAutoreleasedReturnValue();
            local_190 = IVar3;
            (*(code *)PTR__objc_release_02578630)(uVar9);
            puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar5);
            puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
            _objc_retainAutoreleasedReturnValue();
            uVar9 = local_128;
            puVar4 = PTR__OBJC_CLASS___NSURL_026ce328;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_190);
            _objc_retainAutoreleasedReturnValue();
            local_198 = local_120;
            puVar7 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar5,PTR_s_copyItemAtURL_toURL_error__026a22c8,uVar9,puVar4,&local_198);
            _objc_storeStrong(&local_120,local_198);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            if (((ulong)puVar7 & 1) != 0) {
              local_118 = local_118 + 1;
            }
            _objc_storeStrong(&local_190,0);
          }
          if ((local_169 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_128,PTR_s_stopAccessingSecurityScopedResou_026a22d0);
          }
          _objc_storeStrong(&local_178,0);
          local_1f8 = local_1f8 + 1;
        } while (local_1f8 < local_1f0);
        local_1f0 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_d0,0x10
                  );
        local_1f8 = 0;
      } while (local_1f0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if ((local_118 == 0) && (local_f8 != (ID *)0x0)) {
      local_288 = local_120;
      bVar1 = local_120 == 0;
      if (bVar1) {
        local_288 = 7;
        FUN_015d140c(7,&::cf_b);
        _objc_retainAutoreleasedReturnValue();
        local_1a0 = local_288;
      }
      _objc_retainAutorelease();
      *local_f8 = local_288;
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_1a0);
      }
    }
    local_d8 = local_118;
    local_104 = 1;
    _objc_storeStrong(&local_120);
    _objc_storeStrong(&local_110,0);
  }
  _objc_storeStrong(&local_100);
  _objc_storeStrong(&local_f0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_d8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

