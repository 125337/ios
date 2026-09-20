// selectThemeIcon @ 016d8b34

/* Function Stack Size: 0x10 bytes */

void RepeatEnhanceViewController::selectThemeIcon(ID param_1,SEL param_2)

{
  char *pcVar1;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  pcVar1 = "WCUIAlertView";
  local_20 = param_2;
  local_18 = param_1;
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_28 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_addBtnTitle_target_sel__0269d278,&::cf___,local_18,
             PTR_s_selectThemeIconMeLight_026b2fe8);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_addBtnTitle_target_sel__0269d278,&cf_<,local_18,
             PTR_s_selectThemeIconMeDark_026b2ff0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_addBtnTitle_target_sel__0269d278,&::cf___,local_18,
             PTR_s_selectThemeIconOtherLight_026b2ff8);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_addBtnTitle_target_sel__0269d278,&cf_<,local_18,
             PTR_s_selectThemeIconOtherDark_026b3000);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
             PTR_s_alertCancel_026b2910);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_show_0269d280);
  _objc_storeStrong(&local_28,0);
  return;
}

