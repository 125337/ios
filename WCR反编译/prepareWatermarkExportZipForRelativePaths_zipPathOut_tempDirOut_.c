// prepareWatermarkExportZipForRelativePaths:zipPathOut:tempDirOut: @ 01fb276c

/* Function Stack Size: 0x28 bytes */

bool WCRefineWatermarkLibraryViewController::
     prepareWatermarkExportZipForRelativePaths_zipPathOut_tempDirOut_
               (ID param_1,SEL param_2,ID param_3,ID *param_4,ID *param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong local_218;
  ulong local_210;
  undefined *local_170;
  undefined *local_168;
  ulong local_160;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  ulong local_118;
  ulong local_110;
  undefined *local_108;
  undefined *local_100 [3];
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
    local_100[0] = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e8,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_100[0],1,0);
    puVar2 = local_100[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_100[0],PTR_s_stringByAppendingPathComponent__026cab30,&cf_WCRefine_watermarks);
    _objc_retainAutoreleasedReturnValue();
    local_108 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e8,PTR_s_createDirectoryAtPath_withInterm_0269e230,puVar2,1,0);
    uVar6 = 9;
    _NSSearchPathForDirectoriesInDomains(9,1,1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_110 = uVar1;
    (*(code *)PTR__objc_release_02578630)(uVar6);
    _memset(auStack_158,0,0x40);
    uVar1 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_210 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,0x10);
    if (local_210 != 0) {
      lVar7 = *local_148;
      local_218 = 0;
      do {
        do {
          if (*local_148 - lVar7 != 0) {
            _objc_enumerationMutation(*local_148 - lVar7,uVar1);
          }
          uVar8 = *(ulong *)(local_150 + local_218 * 8);
          local_118 = uVar8;
          (*(code *)PTR__objc_retain_02578638)();
          uVar6 = local_118;
          local_160 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_hasPrefix__0269d320,&cf__);
          if ((uVar6 & 1) == 0) {
            uVar8 = local_110;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_110,PTR_s_stringByAppendingPathComponent__026cab30,local_118);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = local_160;
            local_160 = uVar8;
            (*(code *)PTR__objc_release_02578630)(uVar6);
          }
          puVar2 = local_108;
          uVar6 = local_160;
          (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_lastPathComponent_026ca780);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_stringByAppendingPathComponent__026cab30);
          _objc_retainAutoreleasedReturnValue();
          local_168 = puVar2;
          (*(code *)PTR__objc_release_02578630)(uVar6);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e8,PTR_s_copyItemAtPath_toPath_error__026a1758,local_160,local_168,0);
          _objc_storeStrong(&local_168);
          _objc_storeStrong(&local_160,0);
          local_218 = local_218 + 1;
        } while (local_218 < local_210);
        local_210 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,0x10
                  );
        local_218 = 0;
      } while (local_210 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    puVar2 = local_100[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_100[0],PTR_s_stringByAppendingPathComponent__026cab30,&::cf_W);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_WCRefineFrameZipCreator_026cf080;
    local_170 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineFrameZipCreator_026cf080,PTR_s_createZipFileAtPath_withContents_026ae420,
               puVar2,local_108);
    if ((((ulong)puVar3 & 1) == 0) ||
       (puVar3 = local_e8,
       (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_fileExistsAtPath__026ca630,local_170),
       puVar2 = local_170, ((ulong)puVar3 & 1) == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e8,PTR_s_removeItemAtPath_error__0269f910,local_100[0],0);
      local_a9 = 0;
    }
    else {
      if (local_d0 != (ID *)0x0) {
        _objc_retainAutorelease();
        *local_d0 = (ID)puVar2;
      }
      puVar2 = local_100[0];
      if (local_d8 != (ID *)0x0) {
        _objc_retainAutorelease();
        *local_d8 = (ID)puVar2;
      }
      local_a9 = 1;
    }
    local_dc = 1;
    _objc_storeStrong(&local_170);
    _objc_storeStrong(&local_110,0);
    _objc_storeStrong(&local_108,0);
    _objc_storeStrong(local_100,0);
    _objc_storeStrong(&local_e8,0);
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

