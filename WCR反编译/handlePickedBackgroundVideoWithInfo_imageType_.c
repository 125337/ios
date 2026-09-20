// handlePickedBackgroundVideoWithInfo:imageType: @ 0189a674

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

void WCRefineChatAvatarProfileCardViewController::handlePickedBackgroundVideoWithInfo_imageType_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  ulong local_320;
  cfstringStruct *local_240;
  undefined *local_200;
  undefined *local_1f8;
  ulong local_1b8;
  ulong local_1b0;
  undefined *local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  code *local_198;
  undefined *local_190;
  undefined *local_188;
  long local_180;
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [8];
  undefined *local_158;
  undefined *local_150;
  undefined *local_148;
  uint local_13c;
  ulong local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  ulong local_f0;
  long local_e8;
  cfstringStruct *local_e0;
  ulong local_d8;
  long local_d0;
  long local_c8;
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
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_4);
  local_d0 = 0;
  uVar2 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c0,PTR_s_objectForKeyedSubscript__0269d098,
             *(undefined8 *)PTR__UIImagePickerControllerPHAsset_02578190);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___PHAsset_026ce530;
  local_d8 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___PHAsset_026ce530,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((uVar2 & 1) != 0) {
    _objc_storeStrong(&local_d0,local_d8);
  }
  _objc_storeStrong(&local_d8,0);
  if ((local_d0 == 0) ||
     (lVar10 = local_d0, (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_mediaType_026a21f8),
     lVar10 != 2)) {
    uVar2 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c0,PTR_s_objectForKeyedSubscript__0269d098,
               *(undefined8 *)PTR__UIImagePickerControllerMediaURL_02578180);
    _objc_retainAutoreleasedReturnValue();
    local_320 = uVar2;
    if (uVar2 == 0) {
      local_1b8 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_objectForKeyedSubscript__0269d098,
                 *(undefined8 *)PTR__UIImagePickerControllerReferenceURL_02578198);
      _objc_retainAutoreleasedReturnValue();
      local_320 = local_1b8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_1b0 = local_320;
    if (uVar2 == 0) {
      (*(code *)PTR__objc_release_02578630)(local_1b8);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_1b0;
    puVar3 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    bVar1 = (uVar2 & 1) == 0;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_R_1Y_);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_copyBackgroundImageFromURL_forIm_026b7400,local_1b0,local_c8);
    }
    local_13c = (uint)!bVar1;
    _objc_storeStrong(&local_1b0,0);
  }
  else {
    local_e0 = (cfstringStruct *)0x0;
    local_e8 = 0;
    _memset(auStack_130,0,0x40);
    puVar3 = PTR__OBJC_CLASS___PHAssetResource_026cf0d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___PHAssetResource_026cf0d0,PTR_s_assetResourcesForAsset__026b73e8,
               local_d0);
    _objc_retainAutoreleasedReturnValue();
    local_1f8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1f8 != (undefined *)0x0) {
      lVar10 = *local_120;
      local_200 = (undefined *)0x0;
      do {
        do {
          if (*local_120 - lVar10 != 0) {
            _objc_enumerationMutation(*local_120 - lVar10,puVar3);
          }
          uVar11 = *(ulong *)(local_128 + (long)local_200 * 8);
          local_f0 = uVar11;
          (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_originalFilename_026b73f0);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar11;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar2;
          FUN_018993e0();
          _objc_retainAutoreleasedReturnValue();
          local_138 = uVar4;
          (*(code *)PTR__objc_release_02578630)(uVar2);
          (*(code *)PTR__objc_release_02578630)(uVar11);
          uVar2 = local_138;
          FUN_0189b138();
          if ((uVar2 & 1) == 0) {
            local_13c = 3;
          }
          else {
            _objc_storeStrong(&local_e0,local_f0);
            _objc_storeStrong(&local_e8,local_138);
            local_13c = 2;
          }
          _objc_storeStrong(&local_138,0);
          if (local_13c != 3) goto LAB_0189a9f4;
          local_200 = local_200 + 1;
        } while (local_200 < local_1f8);
        local_1f8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                   0x10);
        local_200 = (undefined *)0x0;
      } while (local_1f8 != (undefined *)0x0);
    }
    local_13c = 0;
LAB_0189a9f4:
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (local_e0 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__g_b0RSYDn);
      local_13c = 1;
    }
    else {
      lVar10 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
      if (lVar10 == 0) {
        pcVar5 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_uniformTypeIdentifier_026b73f8);
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = pcVar5;
        FUN_0189b28c();
        _objc_retainAutoreleasedReturnValue();
        local_240 = pcVar6;
        if (pcVar6 == (cfstringStruct *)0x0) {
          local_240 = &cf_mov;
        }
        _objc_storeStrong(&local_e8,local_240);
        (*(code *)PTR__objc_release_02578630)(pcVar6);
        (*(code *)PTR__objc_release_02578630)(pcVar5);
      }
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      puVar7 = PTR__OBJC_CLASS___NSUUID_026ce668;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_stringWithFormat__0269cca8,&cf_wcr_chatavatar_________);
      _objc_retainAutoreleasedReturnValue();
      local_148 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar8);
      (*(code *)PTR__objc_release_02578630)();
      puVar3 = PTR__OBJC_CLASS___NSURL_026ce328;
      _NSTemporaryDirectory();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_fileURLWithPath__0269f540);
      _objc_retainAutoreleasedReturnValue();
      local_150 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar8);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = PTR__OBJC_CLASS___PHAssetResourceRequestOptions_026cf0d8;
      _objc_alloc_init();
      local_158 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setNetworkAccessAllowed__026a7010,1);
      _objc_initWeak(auStack_160,local_b0);
      puVar9 = PTR__OBJC_CLASS___PHAssetResourceManager_026cf0e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___PHAssetResourceManager_026cf0e0,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = local_e0;
      puVar7 = local_150;
      puVar3 = local_158;
      local_1a8 = PTR___NSConcreteStackBlock_02578660;
      local_1a0 = 0xc2000000;
      local_19c = 0;
      local_198 = FUN_0189b4fc;
      local_190 = &DAT_02589c78;
      _objc_copyWeak(auStack_178,auStack_160);
      puVar8 = local_150;
      (*(code *)PTR__objc_retain_02578638)();
      local_188 = puVar8;
      lVar10 = local_c8;
      (*(code *)PTR__objc_retain_02578638)();
      local_180 = lVar10;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar9,PTR_s_writeDataForAssetResource_toFile_026b7408,pcVar5,puVar7,puVar3,
                 &local_1a8);
      (*(code *)PTR__objc_release_02578630)(puVar9);
      local_13c = 1;
      _objc_storeStrong(&local_180);
      _objc_storeStrong(&local_188,0);
      _objc_destroyWeak(auStack_178);
      _objc_destroyWeak(auStack_160);
      _objc_storeStrong(&local_158,0);
      _objc_storeStrong(&local_150,0);
      _objc_storeStrong(&local_148,0);
    }
    _objc_storeStrong(&local_e8);
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

