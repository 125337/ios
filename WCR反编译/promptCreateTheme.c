// promptCreateTheme @ 01fc5254

/* Function Stack Size: 0x10 bytes */

void WCRefineWechatThemeManagerViewController::promptCreateTheme(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_38;
  ID local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar2 = PTR__OBJC_CLASS___UIAlertController_026ce178;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIAlertController_026ce178,
             PTR_s_alertControllerWithTitle_message_0269dc00,&cf_e_zz_N,&cf_R_TSNOUSrVhbr<PeN);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_addTextFieldWithConfigurationHan_026ac828,
             &PTR___NSConcreteGlobalBlock_0258d200);
  puVar2 = local_28;
  puVar3 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIAlertAction_026ce180,PTR_s_actionWithTitle_style_handler__0269dc08,
             &cf_Sm,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addAction__0269dc10);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = local_28;
  puVar2 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
  (*(code *)PTR__objc_retain_02578638)();
  IVar1 = local_18;
  local_38 = puVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_R_,0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addAction__0269dc10);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_presentViewController_animated_c_0269d2b0,local_28,1,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

