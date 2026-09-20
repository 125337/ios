// prepareExportZipForRelativePaths:zipPathOut:tempDirOut: @ 01838f38

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x28 bytes */

bool WCRefineAvatarFrameLibraryViewController::
     prepareExportZipForRelativePaths_zipPathOut_tempDirOut_
               (ID param_1,SEL param_2,ID param_3,ID *param_4,ID *param_5)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong local_210;
  ulong local_1f0;
  ulong local_1e8;
  ulong local_178;
  ulong local_170;
  ulong local_168;
  byte local_159;
  ulong local_158;
  ulong local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  ulong local_108;
  ulong local_100;
  ulong local_f8;
  ulong local_f0;
  undefined *local_e8;
  undefined4 local_dc;
  ulong *local_d8;
  ulong *local_d0;
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
  uVar2 = local_c8;
  local_d8 = param_5;
  local_d0 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
  if (uVar2 == 0) {
    local_a9 = 0;
    local_dc = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 9;
    local_e8 = puVar3;
    _NSSearchPathForDirectoriesInDomains(9,1,1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_f0 = uVar2;
    (*(code *)PTR__objc_release_02578630)();
    _NSTemporaryDirectory();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSUUID_026ce668;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_stringByAppendingPathComponent__026cab30);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = uVar2;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar2 = local_f8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_f8,PTR_s_stringByAppendingPathComponent__026cab30,&::cf_W);
    _objc_retainAutoreleasedReturnValue();
    local_100 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e8,PTR_s_createDirectoryAtPath_withInterm_0269e230,uVar2,1,0);
    _memset(auStack_148,0,0x40);
    uVar2 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_1e8 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10);
    if (local_1e8 != 0) {
      lVar7 = *local_138;
      local_1f0 = 0;
      do {
        do {
          if (*local_138 - lVar7 != 0) {
            _objc_enumerationMutation(*local_138 - lVar7,uVar2);
          }
          uVar4 = *(ulong *)(local_140 + local_1f0 * 8);
          local_108 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_hasPrefix__0269d320,&cf__);
          local_159 = 0;
          bVar1 = (uVar4 & 1) == 0;
          if (bVar1) {
            local_210 = local_f0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_f0,PTR_s_stringByAppendingPathComponent__026cab30,local_108);
            _objc_retainAutoreleasedReturnValue();
            local_158 = local_210;
          }
          else {
            local_210 = local_108;
          }
          local_159 = bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_150 = local_210;
          if ((local_159 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_158);
          }
          uVar4 = local_150;
          (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_lastPathComponent_026ca780);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = local_100;
          local_168 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_100,PTR_s_stringByAppendingPathComponent__026cab30,uVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = local_e8;
          local_170 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_fileExistsAtPath__026ca630,local_150)
          ;
          if (((ulong)puVar3 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e8,PTR_s_copyItemAtPath_toPath_error__026a1758,local_150,local_170,0);
          }
          _objc_storeStrong(&local_170);
          _objc_storeStrong(&local_168,0);
          _objc_storeStrong(&local_150,0);
          local_1f0 = local_1f0 + 1;
        } while (local_1f0 < local_1e8);
        local_1e8 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10
                  );
        local_1f0 = 0;
      } while (local_1e8 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_f8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_f8,PTR_s_stringByAppendingPathComponent__026cab30,&::cf_W);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_WCRefineFrameZipCreator_026cf080;
    local_178 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineFrameZipCreator_026cf080,PTR_s_createZipFileAtPath_withContents_026ae420,
               uVar2,local_100);
    if ((((ulong)puVar3 & 1) == 0) ||
       (puVar3 = local_e8,
       (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_fileExistsAtPath__026ca630,local_178),
       uVar2 = local_178, ((ulong)puVar3 & 1) == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e8,PTR_s_removeItemAtPath_error__0269f910,local_f8,0);
      local_a9 = 0;
    }
    else {
      if (local_d0 != (ulong *)0x0) {
        _objc_retainAutorelease();
        *local_d0 = uVar2;
      }
      uVar2 = local_f8;
      if (local_d8 != (ulong *)0x0) {
        _objc_retainAutorelease();
        *local_d8 = uVar2;
      }
      local_a9 = 1;
    }
    local_dc = 1;
    _objc_storeStrong(&local_178);
    _objc_storeStrong(&local_100,0);
    _objc_storeStrong(&local_f8,0);
    _objc_storeStrong(&local_f0,0);
    _objc_storeStrong(&local_e8,0);
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

