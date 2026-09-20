// handleHideConfirmNewPassword: @ 01c8a344

/* Function Stack Size: 0x18 bytes */

void WCRefinePluginContainerSettingsViewController::handleHideConfirmNewPassword_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  ID IVar5;
  undefined *puVar6;
  cfstringStruct *local_100;
  cfstringStruct *local_b0;
  undefined *local_a0;
  ID local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  undefined4 local_7c;
  ID local_78;
  bool local_69;
  cfstringStruct *local_68;
  byte local_59;
  undefined *local_58;
  byte local_49;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar4 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_49 = 0;
  local_59 = 0;
  local_69 = false;
  bVar1 = ((ulong)pcVar4 & 1) == 0;
  if (bVar1) {
    local_b0 = &::cf___;
  }
  else {
    local_b0 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    local_48 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    local_59 = 1;
    local_58 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_68 = local_b0;
  }
  local_69 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_b0;
  if ((local_69 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  IVar5 = local_28;
  _objc_getAssociatedObject(local_28,DAT_028c6908);
  _objc_retainAutoreleasedReturnValue();
  local_78 = IVar5;
  _objc_setAssociatedObject(local_28,DAT_028c6908,0,3);
  IVar5 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
  if ((IVar5 == 0) ||
     (pcVar2 = local_40,
     (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,local_78),
     ((ulong)pcVar2 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__N_k_xN);
    local_7c = 1;
  }
  else {
    local_88 = (cfstringStruct *)0x0;
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_90 = local_88;
    puVar6 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_storeStrong(&local_88,local_90);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (((ulong)puVar6 & 1) == 0) {
      if (local_88 == (cfstringStruct *)0x0) {
        local_100 = &cf__xeHe;
      }
      else {
        local_100 = local_88;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,local_100);
      local_7c = 1;
    }
    else {
      IVar5 = local_28;
      _objc_getAssociatedObject(local_28,DAT_028c6900);
      _objc_retainAutoreleasedReturnValue();
      local_98 = IVar5;
      _objc_setAssociatedObject(local_28,DAT_028c6900,0,1);
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_a0 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_postGlobalSettingsChangedNotific_026a6558);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTableData_0269dca8);
      IVar5 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_boolValue_026ca540);
      if (((IVar5 & 1) == 0) ||
         (puVar3 = local_a0,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_a0,PTR_s_hideWCRefinePluginHubEntryEnable_026c28e8),
         ((ulong)puVar3 & 1) != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__x_febr);
        local_7c = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a0,PTR_s_setHideWCRefinePluginHubEntryArm_026a6548,1);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTableData_0269dca8);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__x_n_br);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_showHidePluginHubNextStepAlert_026c2a10);
        local_7c = 1;
      }
      _objc_storeStrong(&local_a0);
      _objc_storeStrong(&local_98,0);
    }
    _objc_storeStrong(&local_88,0);
  }
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

