// promptRenameAtIndexPath: @ 01c81210

/* Function Stack Size: 0x18 bytes */

void WCRefinePluginHubOrderViewController::promptRenameAtIndexPath_
               (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  char *pcVar5;
  cfstringStruct *local_130;
  cfstringStruct *local_f8;
  cfstringStruct *local_d0;
  char *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  long local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_38,param_3);
  pcVar1 = (cfstringStruct *)PTR_WCRefinePluginHubManager_026ce800;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePluginHubManager_026ce800,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  local_48 = (cfstringStruct *)0x0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0x28;
  lVar2 = local_38;
  local_40 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_section_0269e988);
  if (lVar2 == 0) {
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_groups_026a1048);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_row_0269e210);
    pcVar3 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_objectAtIndexedSubscript__0269cc78,lVar2);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPendingRenameGroup__026c2830);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPendingRenamePlugin__026c2838,0);
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingRenameGroup_026c2840);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_48;
    local_48 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    _objc_storeStrong(&local_50,&cf__TTR_);
    _objc_storeStrong(&local_58,&cf_R_TyN_Nzz);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPendingRenameGroup__026c2830,0);
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_groupPlugins_026c2820);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_section_0269e988);
    pcVar3 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_objectAtIndexedSubscript__0269cc78,lVar2 + -1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_row_0269e210);
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_objectAtIndexedSubscript__0269cc78,lVar2);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPendingRenamePlugin__026c2838);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_40;
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingRenamePlugin_026c2848);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_displayTitleForPlugin__026b1a30);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_d0 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_d0;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar1 = local_40;
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingRenamePlugin_026c2848);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_displayVersionForPlugin__026b46f8);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_f8 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = local_f8;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_48;
    local_48 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    _objc_storeStrong(&local_50,&cf__TTcN);
    _objc_storeStrong(&local_58,&cf_<h_cNT_);
    local_60 = 0x80;
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_68,0);
  }
  pcVar5 = "WCUIAlertView";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_78 = pcVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar5,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_28,
             PTR_s_cancelCombinedRename__026c2850);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_78,PTR_s_addBtnTitle_target_sel__0269d278,&cf_OX_,local_28,
             PTR_s_handleCombinedRename__026c2858);
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_showTextFieldWithMaxLen__0269e5e0,local_60);
  if (local_48 == (cfstringStruct *)0x0) {
    local_130 = &::cf___;
  }
  else {
    local_130 = local_48;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setTextFieldDefaultText__0269fd98,local_130);
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_show_0269d280);
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

