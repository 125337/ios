// webView:runJavaScriptTextInputPanelWithPrompt:defaultText:initiatedByFrame:completionHandler: @ 01f02fb4

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x38 bytes */

void WCRefineToDoListWebSettingsViewController::
     webView_runJavaScriptTextInputPanelWithPrompt_defaultText_initiatedByFrame_completionHandler_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7,
               undefined4 param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *local_130;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  long local_c8;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  long local_a0;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined4 local_64;
  undefined *local_60;
  long local_58 [3];
  cfstringStruct *local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_4);
  local_58[2] = 0;
  _objc_storeStrong(local_58 + 2,param_5);
  local_58[1] = 0;
  _objc_storeStrong(local_58 + 1,param_6);
  local_58[0] = 0;
  _objc_storeStrong(local_58,param_7);
  puVar3 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
  _objc_retainAutoreleasedReturnValue();
  local_60 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    if (local_58[0] != 0) {
      (**(code **)(local_58[0] + 0x10))(local_58[0],0);
    }
    local_64 = 1;
  }
  else {
    if (local_40 == (cfstringStruct *)0x0) {
      local_130 = &::cf___;
    }
    else {
      local_130 = local_40;
    }
    puVar4 = PTR__OBJC_CLASS___UIAlertController_026ce178;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIAlertController_026ce178,
               PTR_s_alertControllerWithTitle_message_0269dc00,&cf_Q_ueQ,local_130);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_58[2];
    puVar3 = PTR___NSConcreteStackBlock_02578660;
    local_98 = PTR___NSConcreteStackBlock_02578660;
    local_90 = 0xc2000000;
    local_8c = 0;
    local_88 = FUN_01f0342c;
    local_80 = &DAT_02583438;
    local_70 = puVar4;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_addTextFieldWithConfigurationHan_026ac828,&local_98);
    lVar2 = local_58[0];
    puVar1 = local_70;
    puVar4 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    local_c0 = puVar3;
    local_b8 = 0xc2000000;
    local_b4 = 0;
    local_b0 = FUN_01f034dc;
    local_a8 = &DAT_02584050;
    (*(code *)PTR__objc_retain_02578638)();
    local_a0 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Sm,1,&local_c0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addAction__0269dc10);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    lVar2 = local_58[0];
    puVar1 = local_70;
    puVar4 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    local_f0 = puVar3;
    local_e8 = 0xc2000000;
    local_e4 = 0;
    local_e0 = FUN_01f03544;
    local_d8 = &DAT_02586480;
    (*(code *)PTR__objc_retain_02578638)();
    puVar3 = local_70;
    local_c8 = lVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_nx_,0,&local_f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addAction__0269dc10);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_presentViewController_animated_c_0269d2b0,local_70,1);
    _objc_storeStrong(&local_d0,0);
    _objc_storeStrong(&local_c8,0);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_70,0);
    local_64 = 0;
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(local_58,0);
  _objc_storeStrong(local_58 + 1,0);
  _objc_storeStrong(local_58 + 2,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

