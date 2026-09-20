// openPagingEdgeGuardCustomization @ 01c8700c

/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefinePluginContainerSettingsViewController::openPagingEdgeGuardCustomization
          (WCRefinePluginContainerSettingsViewController *this,ID param_1,SEL param_2)

{
  undefined *puVar1;
  char *pcVar2;
  char *local_30 [2];
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  pcVar2 = "WCUIAlertView";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_30[0] = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30[0],PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
             PTR_s_savePagingEdgeGuard__026c29a8);
  (*(code *)PTR__objc_msgSend_02578628)(local_30[0],PTR_s_showTextFieldWithMaxLen__0269e5e0,8);
  pcVar2 = local_30[0];
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___0f);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_setTextFieldDefaultText__0269fd98);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_30[0],PTR_s_show_0269d280);
  _objc_storeStrong(local_30,0);
  return;
}

