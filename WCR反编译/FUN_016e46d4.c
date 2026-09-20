// FUN_016e46d4 @ 016e46d4

void FUN_016e46d4(long param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined *local_b8;
  byte local_91;
  undefined *local_90;
  ulong local_88;
  undefined *local_80;
  undefined *local_78;
  byte local_6d;
  undefined4 local_6c;
  long local_68;
  long local_60;
  byte local_51;
  undefined *local_50;
  byte local_41;
  undefined *local_40;
  undefined *local_38;
  long local_30;
  long local_28;
  
  uVar12 = *(ulong *)(param_1 + 0x20);
  puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
  local_30 = param_1;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar12,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar12 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_VGrb1Y_);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_albumDirectoryPath_026b3290);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_41 = 0;
    local_51 = 0;
    if (lVar4 == 0) {
      local_b8 = PTR_WCRefinePluginIconCatalog_026ce4e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefinePluginIconCatalog_026ce4e0,PTR_s_albumIconDirectoryPath_026aee90);
      _objc_retainAutoreleasedReturnValue();
      local_51 = 1;
      local_50 = local_b8;
    }
    else {
      local_b8 = *(undefined **)(param_1 + 0x28);
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_albumDirectoryPath_026b3290);
      _objc_retainAutoreleasedReturnValue();
      local_41 = 1;
      local_40 = local_b8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_b8;
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    if ((local_41 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    (*(code *)PTR__objc_release_02578630)(lVar3);
    local_60 = 0;
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_68 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_storeStrong(&local_60,local_68);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_60 == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isEqualToString__0269ccc8,&cf_dark);
      puVar8 = PTR_WCRefinePluginIconCatalog_026ce4e0;
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_6d = (byte)uVar5;
      puVar6 = PTR__OBJC_CLASS___NSUUID_026ce668;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_stringWithFormat__0269cca8,&cf_plugin_icon___);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar8,PTR_s_fileNameWithBase_isDark__026b3298,puVar2,local_6d & 1);
      _objc_retainAutoreleasedReturnValue();
      local_78 = puVar8;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      puVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_stringByAppendingPathComponent__026cab30,local_78);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(ulong *)(param_1 + 0x20);
      local_80 = puVar2;
      _UIImagePNGRepresentation();
      _objc_retainAutoreleasedReturnValue();
      local_88 = uVar12;
      if (uVar12 == 0) {
        uVar9 = *(ulong *)(param_1 + 0x20);
        _UIImageJPEGRepresentation(DAT_02323e70);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = local_88;
        local_88 = uVar9;
        (*(code *)PTR__objc_release_02578630)(uVar12);
      }
      if ((local_88 == 0) ||
         (uVar12 = local_88,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_88,PTR_s_writeToFile_atomically__0269f928,local_80,1),
         puVar2 = PTR_WCRefinePluginIconCatalog_026ce4e0, (uVar12 & 1) == 0)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_OX_Vh1Y_);
        local_6c = 1;
      }
      else {
        uVar5 = *(undefined8 *)(param_1 + 0x28);
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_currentIconValue_026b3228);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_mergedAlbumIconValue_withPath_mo_026b32a0,uVar5,local_80,
                   *(undefined8 *)(param_1 + 0x30));
        _objc_retainAutoreleasedReturnValue();
        local_90 = puVar2;
        (*(code *)PTR__objc_release_02578630)(uVar5);
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x28),PTR_s_setCurrentIconValue__026b32a8,local_90);
        uVar9 = *(ulong *)(param_1 + 0x28);
        (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_delegate_0269e808);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar9;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar9);
        if ((uVar12 & 1) != 0) {
          uVar5 = *(undefined8 *)(param_1 + 0x28);
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_delegate_0269e808);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = local_90;
          uVar10 = *(undefined8 *)(param_1 + 0x28);
          (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_iconType_026b31f8);
          _objc_retainAutoreleasedReturnValue();
          uVar11 = *(undefined8 *)(param_1 + 0x30);
          (*(code *)PTR__objc_msgSend_02578628)(uVar11,PTR_s_isEqualToString__0269ccc8,&cf_dark);
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar5,PTR_s_themeIconSelectorDidSelectIcon_f_026b3288,puVar2,uVar10,uVar11);
          (*(code *)PTR__objc_release_02578630)(uVar10);
          (*(code *)PTR__objc_release_02578630)(uVar5);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x28),PTR_s_reloadTableData_0269dca8);
        puVar2 = PTR_WCRefineHelper_026ce000;
        uVar12 = *(ulong *)(param_1 + 0x30);
        (*(code *)PTR__objc_msgSend_02578628)(uVar12,PTR_s_isEqualToString__0269ccc8,&cf_dark);
        pcVar1 = &cf_YVh_n_;
        if ((uVar12 & 1) == 0) {
          pcVar1 = &cf_eVh_n_;
        }
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_showModernToast__0269ce78,pcVar1);
        local_91 = 0;
        uVar9 = *(ulong *)(param_1 + 0x28);
        (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_delegate_0269e808);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar9;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar9);
        if ((uVar12 & 1) != 0) {
          uVar10 = *(undefined8 *)(param_1 + 0x28);
          (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_delegate_0269e808);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar10;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_91 = (byte)uVar5;
          (*(code *)PTR__objc_release_02578630)(uVar10);
        }
        if ((local_91 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (*(undefined8 *)(param_1 + 0x28),PTR_s_wcr_closeAfterSelection_026b3258);
        }
        _objc_storeStrong(&local_90,0);
        local_6c = 0;
      }
      _objc_storeStrong(&local_88);
      _objc_storeStrong(&local_80,0);
      _objc_storeStrong(&local_78,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_R_VhvU_1Y_);
      local_6c = 1;
    }
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_38,0);
  }
  return;
}

