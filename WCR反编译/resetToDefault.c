// resetToDefault @ 01ccf340

/* Function Stack Size: 0x10 bytes */

void WCRefineProfileCardActionConfigViewController::resetToDefault(ID param_1,SEL param_2)

{
  ID IVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  ID local_40;
  undefined *local_38;
  char *local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  pcVar2 = "WCUIAlertView";
  local_20 = param_2;
  local_18 = param_1;
  _objc_getClass();
  local_28 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIAlertController_026ce178;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIAlertController_026ce178,
               PTR_s_alertControllerWithTitle_message_0269dc00,&cf_n_Rub,&cf_nx_b_Yc_0Tyv_>f_yhQRT);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    local_38 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIAlertAction_026ce180,
               PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Sm,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addAction__0269dc10);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    IVar1 = local_18;
    puVar4 = local_38;
    puVar3 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    local_60 = PTR___NSConcreteStackBlock_02578660;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = FUN_01ccf60c;
    local_48 = &DAT_0257c5b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_nx_,2,&local_60);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addAction__0269dc10);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_presentViewController_animated_c_0269d2b0,local_38,1,0);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
  }
  else {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_30 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
               PTR_s_doResetToDefault_026c2c18);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_show_0269d280);
    _objc_storeStrong(&local_30,0);
  }
  return;
}

