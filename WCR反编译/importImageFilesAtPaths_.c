// importImageFilesAtPaths: @ 01836cd0

/* Function Stack Size: 0x18 bytes */

long_long WCRefineAvatarFrameLibraryViewController::importImageFilesAtPaths_
                    (ID param_1,SEL param_2,ID param_3)

{
  long_long lVar1;
  ulong uVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong local_170;
  ulong local_168;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  ID local_130;
  ulong local_128;
  byte local_119;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  long_long local_d0;
  undefined *local_c8;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  if (*(long *)(local_b0 + (long)_framesDirectory) == 0) {
    IVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarFrameDirectoryPath_026b63b0);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = *(ID *)(local_b0 + (long)_framesDirectory);
    *(ID *)(local_b0 + (long)_framesDirectory) = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar4);
  }
  puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar5,PTR_s_createDirectoryAtPath_withInterm_0269e230,
             *(undefined8 *)(local_b0 + (long)_framesDirectory),1,0);
  local_d0 = 0;
  _memset(auStack_118,0,0x40);
  uVar2 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_168 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
  if (local_168 != 0) {
    lVar9 = *local_108;
    local_170 = 0;
    do {
      do {
        if (*local_108 - lVar9 != 0) {
          _objc_enumerationMutation(*local_108 - lVar9,uVar2);
        }
        local_d8 = *(ulong *)(local_110 + local_170 * 8);
        local_119 = 0;
        puVar5 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c8,PTR_s_fileExistsAtPath_isDirectory__026ca638,local_d8,&local_119);
        if ((((ulong)puVar5 & 1) != 0) && ((local_119 & 1) == 0)) {
          uVar6 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_pathExtension_0269e090);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          FUN_01826888();
          (*(code *)PTR__objc_release_02578630)(uVar6);
          if ((uVar7 & 1) != 0) {
            uVar6 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_lastPathComponent_026ca780);
            _objc_retainAutoreleasedReturnValue();
            local_128 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_length_0269cca0);
            if (uVar6 == 0) {
              _objc_storeStrong(&local_128,&::cf_W);
            }
            IVar3 = local_b0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b0,PTR_s_uniqueImageFileNameInFramesDirec_026b6578,local_128);
            _objc_retainAutoreleasedReturnValue();
            uVar8 = *(undefined8 *)(local_b0 + (long)_framesDirectory);
            local_130 = IVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar8,PTR_s_stringByAppendingPathComponent__026cab30,IVar3);
            _objc_retainAutoreleasedReturnValue();
            local_140 = 0;
            local_148 = 0;
            puVar5 = local_c8;
            local_138 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_c8,PTR_s_copyItemAtPath_toPath_error__026a1758,local_d8,uVar8,
                       &local_148);
            _objc_storeStrong(&local_140,local_148);
            if (((ulong)puVar5 & 1) != 0) {
              local_d0 = local_d0 + 1;
            }
            _objc_storeStrong(&local_140);
            _objc_storeStrong(&local_138,0);
            _objc_storeStrong(&local_130,0);
            _objc_storeStrong(&local_128,0);
          }
        }
        local_170 = local_170 + 1;
      } while (local_170 < local_168);
      local_168 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
      local_170 = 0;
    } while (local_168 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  lVar1 = local_d0;
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

