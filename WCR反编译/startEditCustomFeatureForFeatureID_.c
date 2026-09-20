// startEditCustomFeatureForFeatureID: @ 01c91b88

/* Function Stack Size: 0x18 bytes */

void WCRefinePluginFeatureManagementViewController::startEditCustomFeatureForFeatureID_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  char *pcVar6;
  cfstringStruct *local_e8;
  cfstringStruct *local_d8;
  cfstringStruct *local_c0;
  char *local_a0;
  char *local_98;
  byte local_89;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  bool local_71;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  bool local_59;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined4 local_3c;
  ulong local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_38,param_3);
  uVar2 = local_38;
  FUN_01c9217c();
  if ((uVar2 & 1) == 0) {
    local_3c = 1;
    goto LAB_01c92160;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_setPendingEditCustomFeatureID__026c2b80,local_38);
  pcVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_featureEntryMap_026c2b58);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar4;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
  local_59 = false;
  bVar1 = ((ulong)pcVar4 & 1) == 0;
  if (bVar1) {
    local_c0 = &::cf___;
  }
  else {
    local_c0 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_c0;
  }
  local_59 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_c0;
  if ((local_59 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_controller);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
  local_71 = false;
  bVar1 = ((ulong)pcVar4 & 1) == 0;
  if (bVar1) {
    local_d8 = &::cf___;
  }
  else {
    local_d8 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_controller);
    _objc_retainAutoreleasedReturnValue();
    local_70 = local_d8;
  }
  local_71 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = local_d8;
  if ((local_71 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  local_89 = 0;
  if (pcVar3 == (cfstringStruct *)0x0) {
LAB_01c91f44:
    local_e8 = &::cf___;
  }
  else {
    pcVar3 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
    if (pcVar3 == (cfstringStruct *)0x0) goto LAB_01c91f44;
    local_e8 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______);
    _objc_retainAutoreleasedReturnValue();
    local_89 = 1;
    local_88 = local_e8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_80 = local_e8;
  if ((local_89 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_88);
  }
  pcVar6 = "WCUIAlertView";
  _objc_getClass();
  local_98 = pcVar6;
  if (pcVar6 == (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRsXN_ec_9_z);
    local_3c = 1;
  }
  else {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_a0 = pcVar6;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x78);
    pcVar3 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
    if (pcVar3 != (cfstringStruct *)0x0) {
      pcVar6 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a0,PTR_s_respondsToSelector__026ca818,PTR_s_setTextFieldDefaultText__0269fd98
                );
      if (((ulong)pcVar6 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a0,PTR_s_performSelector_withObject__026ca7c0,
                   PTR_s_setTextFieldDefaultText__0269fd98,local_80);
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a0,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_28,
               PTR_s_cancelEditCustomFeatureInput_026c2b88);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a0,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_28,
               PTR_s_confirmEditCustomFeatureInput__026c2b90);
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_show_0269d280);
    _objc_storeStrong(&local_a0,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
LAB_01c92160:
  _objc_storeStrong(&local_38,0);
  return;
}

