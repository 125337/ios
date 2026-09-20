// FUN_019ba164 @ 019ba164

void FUN_019ba164(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  cfstringStruct *pcVar6;
  undefined8 uVar7;
  cfstringStruct *local_110;
  cfstringStruct *local_100;
  undefined8 local_b0;
  bool local_a1;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  bool local_89;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  undefined *local_70;
  ulong local_68;
  undefined8 local_60;
  undefined *local_58;
  byte local_4d;
  undefined4 local_4c;
  long local_48;
  long local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  uVar5 = *(ulong *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___UIImage_026cdfd0;
  local_30 = param_1;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((((uVar5 & 1) == 0) || (*(long *)(param_1 + 0x38) < 0)) || (3 < *(long *)(param_1 + 0x38))) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_VGrb1Y_);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_floatingIconDirectoryPath_026baa08);
    _objc_retainAutoreleasedReturnValue();
    local_40 = 0;
    puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_38 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_storeStrong(&local_40,local_48);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_40 == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isEqualToString__0269ccc8,&cf_dark);
      puVar1 = PTR_WCRefinePluginIconCatalog_026ce4e0;
      local_4d = (byte)uVar2;
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_floating_extra_tab_ld);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_fileNameWithBase_isDark__026b3298,puVar3,local_4d & 1);
      _objc_retainAutoreleasedReturnValue();
      local_58 = puVar1;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_stringByAppendingPathComponent__026cab30,local_58);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(ulong *)(param_1 + 0x20);
      local_60 = uVar2;
      _UIImagePNGRepresentation();
      _objc_retainAutoreleasedReturnValue();
      local_68 = uVar5;
      if (uVar5 == 0) {
        uVar4 = *(ulong *)(param_1 + 0x20);
        _UIImageJPEGRepresentation(DAT_02323e70);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = local_68;
        local_68 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar5);
      }
      if ((local_68 == 0) ||
         (uVar5 = local_68,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_68,PTR_s_writeToFile_atomically__0269f928,local_60,1), (uVar5 & 1) == 0))
      {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_OX_Vh1Y_);
        local_4c = 1;
      }
      else {
        puVar1 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = *(cfstringStruct **)(param_1 + 0x28);
        uVar2 = *(undefined8 *)(param_1 + 0x28);
        local_70 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_storedIconForTabIndex_cfg__026ba978,*(undefined8 *)(param_1 + 0x38),
                   puVar1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_imagePairForStoredIcon__026baa18);
        _objc_retainAutoreleasedReturnValue();
        local_78 = pcVar6;
        (*(code *)PTR__objc_release_02578630)(uVar2);
        pcVar6 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_count_0269cfe0);
        local_89 = false;
        if (pcVar6 == (cfstringStruct *)0x0) {
          local_100 = &cf___;
        }
        else {
          local_100 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_objectAtIndexedSubscript__0269cc78,0)
          ;
          _objc_retainAutoreleasedReturnValue();
          local_88 = local_100;
        }
        local_89 = pcVar6 != (cfstringStruct *)0x0;
        (*(code *)PTR__objc_retain_02578638)();
        local_80 = local_100;
        if ((local_89 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_88);
        }
        pcVar6 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_count_0269cfe0);
        local_a1 = false;
        if (pcVar6 < (cfstringStruct *)0x2) {
          local_110 = &cf___;
        }
        else {
          local_110 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_objectAtIndexedSubscript__0269cc78,1)
          ;
          _objc_retainAutoreleasedReturnValue();
          local_a0 = local_110;
        }
        local_a1 = pcVar6 >= (cfstringStruct *)0x2;
        (*(code *)PTR__objc_retain_02578638)();
        local_98 = local_110;
        if ((local_a1 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_a0);
        }
        uVar2 = *(undefined8 *)(param_1 + 0x28);
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_relativeFloatingIconPath__026baa10,local_60);
        _objc_retainAutoreleasedReturnValue();
        local_b0 = uVar2;
        if ((local_4d & 1) == 0) {
          _objc_storeStrong(&local_80,uVar2);
        }
        else {
          _objc_storeStrong(&local_98,uVar2);
        }
        uVar7 = *(undefined8 *)(param_1 + 0x28);
        uVar2 = *(undefined8 *)(param_1 + 0x28);
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_storedImagePairWithLightPath_dar_026baa20,local_80,local_98);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar7,PTR_s_setStoredIcon_forTabIndex__026ba9d8,uVar2,
                   *(undefined8 *)(param_1 + 0x38));
        (*(code *)PTR__objc_release_02578630)(uVar2);
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x28),PTR_s_reloadTableData_0269dca8);
        pcVar6 = &cf_YVh_n_;
        if ((local_4d & 1) == 0) {
          pcVar6 = &cf_eVh_n_;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar6);
        _objc_storeStrong(&local_b0);
        _objc_storeStrong(&local_98,0);
        _objc_storeStrong(&local_80,0);
        _objc_storeStrong(&local_78,0);
        _objc_storeStrong(&local_70,0);
        local_4c = 0;
      }
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_60,0);
      _objc_storeStrong(&local_58,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_R_VhvU_1Y_);
      local_4c = 1;
    }
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
  }
  return;
}

