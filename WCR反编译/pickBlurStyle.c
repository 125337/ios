// pickBlurStyle @ 01e2c6b8

/* Function Stack Size: 0x10 bytes */

void WCRefineSuperFloatSettingsViewController::pickBlurStyle(ID param_1,SEL param_2)

{
  char *pcVar1;
  ID IVar2;
  char *local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar1 = "WCUIActionSheet";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    local_28 = pcVar1;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_30 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_addBtnTitle_target_sel__0269d278,&cf___Pg_,local_18,
               PTR_s_setBlur0_026c6298);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf__,local_18,
               PTR_s_setBlur1_026c62a0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&::cf_S,local_18,
               PTR_s_setBlur2_026c62a8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Chrome,local_18,
               PTR_s_setBlur3_026c62b0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&::cf__,local_18,
               PTR_s_setBlur4_026c62b8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf_mr,local_18,
               PTR_s_setBlur5_026c62c0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Emr,local_18,
               PTR_s_setBlur6_026c62c8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
    pcVar1 = local_30;
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_showInView__0269d310);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_storeStrong(&local_30,0);
  }
  return;
}

