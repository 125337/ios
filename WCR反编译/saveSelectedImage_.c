// saveSelectedImage: @ 01f26dc4

/* Function Stack Size: 0x18 bytes */

void WCRefineTouchTrailViewController::saveSelectedImage_(ID param_1,SEL param_2,ID param_3)

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
  cfstringStruct *local_250;
  undefined *local_210;
  undefined *local_208;
  cfstringStruct *local_1d8;
  undefined *local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  code *local_1a0;
  undefined *local_198;
  ID local_190;
  cfstringStruct *local_188;
  undefined1 local_179;
  ulong local_178;
  undefined8 local_170;
  cfstringStruct *local_168;
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
  undefined4 local_c4;
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
  if (local_c0 == 0) {
    local_c4 = 1;
  }
  else {
    uVar1 = 9;
    _NSSearchPathForDirectoriesInDomains(9,1,1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_d0 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar2 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_stringByAppendingPathComponent__026cab30,&cf_WCRefine);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_stringByAppendingPathComponent__026cab30,&cf_xdh);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
    local_e0 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_1d8 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_1d8 = &::cf__;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_e8 = local_1d8;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    uVar2 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e0,PTR_s_stringByAppendingPathComponent__026cab30,local_e8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_f0 = uVar2;
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
    local_208 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10);
    if (local_208 != (undefined *)0x0) {
      lVar10 = *local_138;
      local_210 = (undefined *)0x0;
      do {
        do {
          if (*local_138 - lVar10 != 0) {
            _objc_enumerationMutation(*local_138 - lVar10,puVar5);
          }
          local_108 = *(ulong *)(local_140 + (long)local_210 * 8);
          uVar2 = local_f0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_f0,PTR_s_stringByAppendingPathComponent__026cab30,local_108);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = local_f8;
          local_150 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_f8,PTR_s_fileExistsAtPath_isDirectory__026ca638,uVar2,&local_151);
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
            (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_isEqualToString__0269ccc8,&cf_png)
            ;
            if (((uVar7 & 1) != 0) ||
               ((uVar7 = local_160,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_160,PTR_s_isEqualToString__0269ccc8,&cf_jpg), (uVar7 & 1) != 0 ||
                (uVar7 = local_160,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_160,PTR_s_isEqualToString__0269ccc8,&cf_jpeg), (uVar7 & 1) != 0))))
            {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_f8,PTR_s_removeItemAtPath_error__0269f910,local_150,0);
            }
            _objc_storeStrong(&local_160,0);
          }
          _objc_storeStrong(&local_150,0);
          local_210 = local_210 + 1;
        } while (local_210 < local_208);
        local_208 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,
                   0x10);
        local_210 = (undefined *)0x0;
      } while (local_208 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_retain_02578638)();
    local_168 = &cf_trail_png;
    uVar2 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_f0,PTR_s_stringByAppendingPathComponent__026cab30,&cf_trail_png);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = local_c0;
    local_170 = uVar2;
    _UIImagePNGRepresentation();
    _objc_retainAutoreleasedReturnValue();
    local_178 = uVar7;
    (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_writeToFile_atomically__0269f928,local_170,1);
    local_179 = (undefined1)uVar7;
    if ((uVar7 & 1) != 0) {
      pcVar3 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_250 = pcVar4;
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_250 = &::cf__;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_188 = local_250;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      IVar9 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_touchTrailRelativeImagePathForFo_026c83c0,local_188);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(IVar9);
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setCustomImagePath__026c8438,local_170);
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_sendSettingsChangedNotification_026b61d8)
      ;
      puVar5 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      IVar9 = local_b0;
      local_1b0 = PTR___NSConcreteStackBlock_02578660;
      local_1a8 = 0xc2000000;
      local_1a4 = 0;
      local_1a0 = FUN_01f27630;
      local_198 = &DAT_0257a800;
      (*(code *)PTR__objc_retain_02578638)();
      local_190 = IVar9;
      _dispatch_async(puVar5,&local_1b0);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      _objc_storeStrong(&local_190);
      _objc_storeStrong(&local_188,0);
    }
    _objc_storeStrong(&local_178);
    _objc_storeStrong(&local_170,0);
    _objc_storeStrong(&local_168,0);
    _objc_storeStrong(&local_100,0);
    _objc_storeStrong(&local_f8,0);
    _objc_storeStrong(&local_f0,0);
    _objc_storeStrong(&local_e8,0);
    _objc_storeStrong(&local_e0,0);
    _objc_storeStrong(&local_d8,0);
    _objc_storeStrong(&local_d0,0);
    local_c4 = 0;
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

