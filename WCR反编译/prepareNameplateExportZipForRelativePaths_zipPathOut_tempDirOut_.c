// prepareNameplateExportZipForRelativePaths:zipPathOut:tempDirOut: @ 01c46418

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x28 bytes */

bool WCRefineNameplateLibraryViewController::
     prepareNameplateExportZipForRelativePaths_zipPathOut_tempDirOut_
               (ID param_1,SEL param_2,ID param_3,ID *param_4,ID *param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong local_1b8;
  ulong local_1b0;
  undefined *local_150;
  undefined *local_148;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  undefined8 local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined4 local_dc;
  ID *local_d8;
  ID *local_d0;
  ulong local_c8;
  SEL local_c0;
  ID local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  uVar1 = local_c8;
  local_d8 = param_5;
  local_d0 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
  if (uVar1 == 0) {
    local_a9 = 0;
    local_dc = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = puVar2;
    _NSTemporaryDirectory();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSUUID_026ce668;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringByAppendingPathComponent__026cab30);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_f0,PTR_s_stringByAppendingPathComponent__026cab30,&::cf_W);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e8,PTR_s_createDirectoryAtPath_withInterm_0269e230,puVar2,1,0);
    _memset(auStack_140,0,0x40);
    uVar1 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_1b0 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10);
    if (local_1b0 != 0) {
      lVar6 = *local_130;
      local_1b8 = 0;
      do {
        do {
          if (*local_130 - lVar6 != 0) {
            _objc_enumerationMutation(*local_130 - lVar6,uVar1);
          }
          local_100 = *(undefined8 *)(local_138 + local_1b8 * 8);
          puVar5 = PTR_WCRefineNameplateHelper_026ce5f8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineNameplateHelper_026ce5f8,
                     PTR_s_absolutePathForRelativePath__026ae8d8,local_100);
          _objc_retainAutoreleasedReturnValue();
          local_148 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_length_0269cca0);
          puVar4 = local_e8;
          puVar3 = local_f8;
          puVar2 = local_148;
          if (puVar5 == (undefined *)0x0) {
            local_dc = 3;
          }
          else {
            puVar5 = local_148;
            (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_lastPathComponent_026ca780);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_stringByAppendingPathComponent__026cab30);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_copyItemAtPath_toPath_error__026a1758,puVar2,puVar3,0);
            (*(code *)PTR__objc_release_02578630)(puVar3);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            local_dc = 0;
          }
          _objc_storeStrong(&local_148,0);
          local_1b8 = local_1b8 + 1;
        } while (local_1b8 < local_1b0);
        local_1b0 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10
                  );
        local_1b8 = 0;
      } while (local_1b0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    puVar2 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_f0,PTR_s_stringByAppendingPathComponent__026cab30,&::cf_W);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_WCRefineFrameZipCreator_026cf080;
    local_150 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineFrameZipCreator_026cf080,PTR_s_createZipFileAtPath_withContents_026ae420,
               puVar2,local_f8);
    if ((((ulong)puVar3 & 1) == 0) ||
       (puVar3 = local_e8,
       (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_fileExistsAtPath__026ca630,local_150),
       puVar2 = local_150, ((ulong)puVar3 & 1) == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e8,PTR_s_removeItemAtPath_error__0269f910,local_f0,0);
      local_a9 = 0;
    }
    else {
      if (local_d0 != (ID *)0x0) {
        _objc_retainAutorelease();
        *local_d0 = (ID)puVar2;
      }
      puVar2 = local_f0;
      if (local_d8 != (ID *)0x0) {
        _objc_retainAutorelease();
        *local_d8 = (ID)puVar2;
      }
      local_a9 = 1;
    }
    local_dc = 1;
    _objc_storeStrong(&local_150);
    _objc_storeStrong(&local_f8,0);
    _objc_storeStrong(&local_f0,0);
    _objc_storeStrong(&local_e8,0);
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

