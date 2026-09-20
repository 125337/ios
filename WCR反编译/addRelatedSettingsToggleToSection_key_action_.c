// addRelatedSettingsToggleToSection:key:action: @ 01e1f38c

/* Function Stack Size: 0x28 bytes */

void WCRefineSuperFloatSettingsViewController::addRelatedSettingsToggleToSection_key_action_
               (ID param_1,SEL param_2,ID param_3,ID param_4,SEL param_5)

{
  cfstringStruct *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  puVar3 = PTR_WCRSuperFloatProfileStore_026cee48;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_settingsSectionExpandedForKey__026c5f40,
             local_30);
  uVar2 = local_28;
  pcVar1 = &cf_bS;
  if (((ulong)puVar3 & 1) == 0) {
    pcVar1 = &cf_U_;
  }
  puVar3 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_cellWithSel_target_title_rightVa_026a0a98,param_5,
             local_18,&cf_vsQn_,pcVar1,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

