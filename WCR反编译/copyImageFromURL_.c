// copyImageFromURL: @ 01f27714

/* Function Stack Size: 0x18 bytes */

void WCRefineTouchTrailViewController::copyImageFromURL_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ID IVar9;
  long lVar10;
  cfstringStruct *local_260;
  undefined *local_220;
  undefined *local_218;
  cfstringStruct *local_1e8;
  undefined *local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  code *local_1b0;
  undefined *local_1a8;
  ID local_1a0;
  cfstringStruct *local_198;
  undefined1 local_189;
  undefined *local_188;
  undefined8 local_180;
  cfstringStruct *local_178;
  undefined *local_170;
  undefined *local_168;
  ulong local_160;
  byte local_151;
  undefined8 local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  ulong local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined8 local_f0;
  cfstringStruct *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  byte local_c1;
  undefined8 local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  uVar1 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_startAccessingSecurityScopedReso_026a22c0);
  local_c1 = (byte)uVar1;
  uVar2 = 9;
  _NSSearchPathForDirectoriesInDomains(9,1,1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar1 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_d0,PTR_s_stringByAppendingPathComponent__026cab30,&cf_WCRefine);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_stringByAppendingPathComponent__026cab30,&cf_xdh);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  local_e0 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_1e8 = pcVar4;
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_1e8 = &::cf__;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_e8 = local_1e8;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  uVar1 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_e0,PTR_s_stringByAppendingPathComponent__026cab30,local_e8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_f0 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_f8 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar5,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_f0,1,0);
  puVar5 = local_f8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_f8,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_f0,0);
  _objc_retainAutoreleasedReturnValue();
  local_100 = puVar5;
  _memset(auStack_148,0,0x40);
  puVar5 = local_100;
  (*(code *)PTR__objc_retain_02578638)();
  local_218 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10);
  if (local_218 != (undefined *)0x0) {
    lVar10 = *local_138;
    local_220 = (undefined *)0x0;
    do {
      do {
        if (*local_138 - lVar10 != 0) {
          _objc_enumerationMutation(*local_138 - lVar10,puVar5);
        }
        local_108 = *(ulong *)(local_140 + (long)local_220 * 8);
        uVar1 = local_f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f0,PTR_s_stringByAppendingPathComponent__026cab30,local_108);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = local_f8;
        local_150 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f8,PTR_s_fileExistsAtPath_isDirectory__026ca638,uVar1,&local_151);
        if ((((ulong)puVar6 & 1) != 0) && ((local_151 & 1) == 0)) {
          uVar7 = local_108;
          (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_pathExtension_0269e090);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_160 = uVar8;
          (*(code *)PTR__objc_release_02578630)(uVar7);
          uVar7 = local_160;
          (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_isEqualToString__0269ccc8,&cf_png);
          if (((uVar7 & 1) != 0) ||
             ((uVar7 = local_160,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_160,PTR_s_isEqualToString__0269ccc8,&cf_jpg), (uVar7 & 1) != 0 ||
              (uVar7 = local_160,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_160,PTR_s_isEqualToString__0269ccc8,&cf_jpeg), (uVar7 & 1) != 0)))) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_f8,PTR_s_removeItemAtPath_error__0269f910,local_150,0);
          }
          _objc_storeStrong(&local_160,0);
        }
        _objc_storeStrong(&local_150,0);
        local_220 = local_220 + 1;
      } while (local_220 < local_218);
      local_218 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10)
      ;
      local_220 = (undefined *)0x0;
    } while (local_218 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSData_026ce1d0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfURL__026a9eb0,local_c0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___UIImage_026cdfd0;
  local_168 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithData__0269d4c8,puVar5);
  _objc_retainAutoreleasedReturnValue();
  local_170 = puVar6;
  if (puVar6 != (undefined *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_178 = &cf_trail_png;
    uVar1 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_f0,PTR_s_stringByAppendingPathComponent__026cab30,&cf_trail_png);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_170;
    local_180 = uVar1;
    _UIImagePNGRepresentation();
    _objc_retainAutoreleasedReturnValue();
    local_188 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_writeToFile_atomically__0269f928,local_180,1)
    ;
    local_189 = SUB81(puVar5,0);
    if (((ulong)puVar5 & 1) != 0) {
      pcVar3 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_260 = pcVar4;
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_260 = &::cf__;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_198 = local_260;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      IVar9 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_touchTrailRelativeImagePathForFo_026c83c0,local_198);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(IVar9);
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setCustomImagePath__026c8438,local_180);
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_sendSettingsChangedNotification_026b61d8)
      ;
      puVar5 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      IVar9 = local_b0;
      local_1c0 = PTR___NSConcreteStackBlock_02578660;
      local_1b8 = 0xc2000000;
      local_1b4 = 0;
      local_1b0 = FUN_01f28028;
      local_1a8 = &DAT_0257a800;
      (*(code *)PTR__objc_retain_02578638)();
      local_1a0 = IVar9;
      _dispatch_async(puVar5,&local_1c0);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      _objc_storeStrong(&local_1a0);
      _objc_storeStrong(&local_198,0);
    }
    _objc_storeStrong(&local_188);
    _objc_storeStrong(&local_180,0);
    _objc_storeStrong(&local_178,0);
  }
  if ((local_c1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_stopAccessingSecurityScopedResou_026a22d0);
  }
  _objc_storeStrong(&local_170);
  _objc_storeStrong(&local_168,0);
  _objc_storeStrong(&local_100,0);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_f0,0);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

