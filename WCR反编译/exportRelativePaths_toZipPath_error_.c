// exportRelativePaths:toZipPath:error: @ 01097718

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x28 bytes */

bool WCRefineLocalEmoticonStore::exportRelativePaths_toZipPath_error_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID *param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ID IVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  ulong local_1e8;
  ulong local_1e0;
  byte local_179;
  byte local_16a;
  byte local_169;
  long local_168;
  long local_160;
  long local_158;
  ID local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  long local_108;
  undefined *local_100;
  long local_f8;
  undefined4 local_ec;
  ID *local_e8;
  long local_e0;
  ulong local_d8;
  SEL local_d0;
  ID local_c8;
  byte local_b9;
  undefined8 local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = 0;
  local_d0 = param_2;
  local_c8 = param_1;
  _objc_storeStrong(&local_d8,param_3);
  local_e0 = 0;
  _objc_storeStrong(&local_e0,param_4);
  uVar1 = local_d8;
  local_e8 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0);
  if ((uVar1 == 0) ||
     (lVar14 = local_e0, (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0),
     lVar14 == 0)) {
    local_b9 = 0;
    local_ec = 1;
  }
  else {
    _NSTemporaryDirectory();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    puVar2 = PTR__OBJC_CLASS___NSUUID_026ce668;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf_wcr_le_exp___)
    ;
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar14;
    (*(code *)PTR__objc_msgSend_02578628)(lVar14,PTR_s_stringByAppendingPathComponent__026cab30);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = lVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(lVar14);
    puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_100 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_f8,1,0);
    _memset(auStack_148,0,0x40);
    uVar1 = local_d8;
    (*(code *)PTR__objc_retain_02578638)();
    local_1e0 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10);
    if (local_1e0 != 0) {
      lVar14 = *local_138;
      local_1e8 = 0;
      do {
        do {
          if (*local_138 - lVar14 != 0) {
            _objc_enumerationMutation(*local_138 - lVar14,uVar1);
          }
          local_108 = *(long *)(local_140 + local_1e8 * 8);
          IVar6 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c8,PTR_s_absolutePathFromRelative__026ae2c0,local_108);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = local_100;
          local_150 = IVar6;
          (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_fileExistsAtPath__026ca630,IVar6);
          lVar5 = local_f8;
          if (((ulong)puVar4 & 1) == 0) {
            local_ec = 3;
          }
          else {
            lVar7 = local_108;
            (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_lastPathComponent_026ca780);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (lVar5,PTR_s_stringByAppendingPathComponent__026cab30);
            _objc_retainAutoreleasedReturnValue();
            local_158 = lVar5;
            (*(code *)PTR__objc_release_02578630)(lVar7);
            local_160 = 2;
            while (puVar2 = local_100,
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_100,PTR_s_fileExistsAtPath__026ca630,local_158), lVar5 = local_f8
                  , puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8, ((ulong)puVar2 & 1) != 0) {
              lVar7 = local_108;
              (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_lastPathComponent_026ca780);
              _objc_retainAutoreleasedReturnValue();
              lVar8 = lVar7;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              lVar9 = local_108;
              (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_pathExtension_0269e090);
              _objc_retainAutoreleasedReturnValue();
              lVar10 = lVar9;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_169 = 0;
              if (lVar10 != 0) {
                lVar11 = local_108;
                (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_pathExtension_0269e090);
                _objc_retainAutoreleasedReturnValue();
                local_168 = lVar11;
              }
              local_169 = lVar10 != 0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar4,PTR_s_stringWithFormat__0269cca8,&cf_____ld___);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (lVar5,PTR_s_stringByAppendingPathComponent__026cab30);
              _objc_retainAutoreleasedReturnValue();
              lVar10 = local_158;
              local_158 = lVar5;
              (*(code *)PTR__objc_release_02578630)(lVar10);
              (*(code *)PTR__objc_release_02578630)(puVar4);
              if ((local_169 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_168);
              }
              (*(code *)PTR__objc_release_02578630)(lVar9);
              (*(code *)PTR__objc_release_02578630)(lVar8);
              (*(code *)PTR__objc_release_02578630)(lVar7);
              local_160 = local_160 + 1;
            }
            local_16a = 0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_100,PTR_s_fileExistsAtPath_isDirectory__026ca638,local_150,&local_16a);
            if ((local_16a & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_100,PTR_s_copyItemAtPath_toPath_error__026a1758,local_150,local_158,0
                        );
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_100,PTR_s_copyItemAtPath_toPath_error__026a1758,local_150,local_158,0
                        );
            }
            _objc_storeStrong(&local_158,0);
            local_ec = 0;
          }
          _objc_storeStrong(&local_150,0);
          local_1e8 = local_1e8 + 1;
        } while (local_1e8 < local_1e0);
        local_1e0 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10
                  );
        local_1e8 = 0;
      } while (local_1e0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    pcVar12 = "WCRefineFrameZipCreator";
    _objc_getClass();
    local_179 = 0;
    if ((pcVar12 != (char *)0x0) &&
       (pcVar13 = pcVar12,
       (*(code *)PTR__objc_msgSend_02578628)
                 (pcVar12,PTR_s_respondsToSelector__026ca818,
                  PTR_s_createZipFileAtPath_withContents_026ae420), ((ulong)pcVar13 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar12,PTR_s_createZipFileAtPath_withContents_026ae420,local_e0,local_f8);
      local_179 = (byte)pcVar12;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_100,PTR_s_removeItemAtPath_error__0269f910,local_f8,0);
    puVar4 = PTR__OBJC_CLASS___NSError_026ce470;
    if (((local_179 & 1) == 0) && (local_e8 != (ID *)0x0)) {
      local_b8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
      local_b0 = &cf__Q1Y_;
      puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_b0,&local_b8,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRefineLocalEmoticon,5);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *local_e8 = (ID)puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    local_b9 = local_179 & 1;
    local_ec = 1;
    _objc_storeStrong(&local_100);
    _objc_storeStrong(&local_f8,0);
  }
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_b9 & 1;
}

