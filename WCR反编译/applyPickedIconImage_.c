// applyPickedIconImage: @ 01e15d18

/* Function Stack Size: 0x18 bytes */

void WCRefineSuperFloatButtonConfigViewController::applyPickedIconImage_
               (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *local_c8;
  undefined *local_b8;
  cfstringStruct *local_b0;
  long local_a8;
  ulong local_a0;
  undefined *local_98;
  undefined *local_90;
  cfstringStruct *local_88;
  byte local_79;
  long local_78;
  long local_70;
  undefined *local_68;
  cfstringStruct *local_60;
  undefined4 local_58;
  bool local_51;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  ulong local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_38,param_3);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingActionId_026c5d30);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_28;
  local_40 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingAlbumMode_026c5d80);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_51 = false;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_c8 = &cf_light;
  }
  else {
    local_c8 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingAlbumMode_026c5d80);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_c8;
  }
  local_51 = pcVar1 != (cfstringStruct *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_c8;
  if ((local_51 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  uVar4 = local_38;
  if (pcVar1 != (cfstringStruct *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar4 & 1) != 0) {
      pcVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_actionWithId__026c5d38,local_40);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_WCRefinePluginIconCatalog_026ce4e0;
      local_60 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefinePluginIconCatalog_026ce4e0,PTR_s_albumIconDirectoryPath_026aee90);
      _objc_retainAutoreleasedReturnValue();
      local_70 = 0;
      puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      local_68 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_storeStrong(&local_70,local_78);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      if (local_70 == 0) {
        pcVar1 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,&cf_dark);
        local_79 = (byte)pcVar1;
        pcVar1 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrDefaultTitle);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = pcVar1;
        FUN_01e0d320();
        _objc_retainAutoreleasedReturnValue();
        local_88 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        pcVar1 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
        if (pcVar1 == (cfstringStruct *)0x0) {
          pcVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_displayTitle__026c5ce8,local_60);
          _objc_retainAutoreleasedReturnValue();
          pcVar1 = local_88;
          local_88 = pcVar2;
          (*(code *)PTR__objc_release_02578630)(pcVar1);
        }
        pcVar2 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_88,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_88;
        local_88 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        pcVar2 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_88,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,&cf__);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_88;
        local_88 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        pcVar1 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
        if (pcVar1 == (cfstringStruct *)0x0) {
          _objc_storeStrong(&local_88,&cf_super_float);
        }
        puVar3 = PTR_WCRefinePluginIconCatalog_026ce4e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefinePluginIconCatalog_026ce4e0,PTR_s_fileNameWithBase_isDark__026b3298,
                   local_88,local_79 & 1);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = local_68;
        local_90 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_stringByAppendingPathComponent__026cab30,puVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = local_38;
        local_98 = puVar5;
        _UIImagePNGRepresentation();
        _objc_retainAutoreleasedReturnValue();
        local_a0 = uVar4;
        if (uVar4 == 0) {
          uVar6 = local_38;
          _UIImageJPEGRepresentation(DAT_02323e70);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = local_a0;
          local_a0 = uVar6;
          (*(code *)PTR__objc_release_02578630)(uVar4);
        }
        if (local_a0 == 0) {
LAB_01e162e4:
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPendingAlbumMode__026c5d60,0);
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_OX_Vh1Y_);
          local_58 = 1;
        }
        else {
          local_a8 = local_70;
          uVar4 = local_a0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a0,PTR_s_writeToFile_options_error__026a0a68,local_98,1,&local_a8);
          _objc_storeStrong(&local_70,local_a8);
          if ((uVar4 & 1) == 0) goto LAB_01e162e4;
          pcVar1 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_60,PTR_s_objectForKeyedSubscript__0269d098,_WCRSuperFloatCustomIconKey);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = pcVar1;
          FUN_01e0d320();
          _objc_retainAutoreleasedReturnValue();
          local_b0 = pcVar2;
          (*(code *)PTR__objc_release_02578630)(pcVar1);
          pcVar1 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
          if (pcVar1 == (cfstringStruct *)0x0) {
            pcVar2 = local_60;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_60,PTR_s_objectForKeyedSubscript__0269d098,_WCRSuperFloatIconKey);
            _objc_retainAutoreleasedReturnValue();
            pcVar7 = pcVar2;
            FUN_01e0d320();
            _objc_retainAutoreleasedReturnValue();
            pcVar1 = local_b0;
            local_b0 = pcVar7;
            (*(code *)PTR__objc_release_02578630)(pcVar1);
            (*(code *)PTR__objc_release_02578630)(pcVar2);
          }
          puVar3 = PTR_WCRefinePluginIconCatalog_026ce4e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefinePluginIconCatalog_026ce4e0,
                     PTR_s_mergedAlbumIconValue_withPath_mo_026b32a0,local_b0,local_98,local_48);
          _objc_retainAutoreleasedReturnValue();
          local_b8 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPendingActionId__026c5d10);
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPendingAlbumMode__026c5d60,0);
          _WCRSuperFloatCustomizeAction(local_40,0,local_b8);
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_notifyChanged_026b43a0);
          puVar3 = PTR_WCRefineHelper_026ce000;
          pcVar2 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,&cf_dark);
          pcVar1 = &cf_YVh_n_;
          if (((ulong)pcVar2 & 1) == 0) {
            pcVar1 = &cf_eVh_n_;
          }
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_showModernToast__0269ce78,pcVar1);
          _objc_storeStrong(&local_b8,0);
          _objc_storeStrong(&local_b0,0);
          local_58 = 0;
        }
        _objc_storeStrong(&local_a0);
        _objc_storeStrong(&local_98,0);
        _objc_storeStrong(&local_90,0);
        _objc_storeStrong(&local_88,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPendingAlbumMode__026c5d60,0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_R_VhvU_1Y_);
        local_58 = 1;
      }
      _objc_storeStrong(&local_70);
      _objc_storeStrong(&local_68,0);
      _objc_storeStrong(&local_60,0);
      goto LAB_01e16598;
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPendingAlbumMode__026c5d60,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_VGrb1Y_);
  local_58 = 1;
LAB_01e16598:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

