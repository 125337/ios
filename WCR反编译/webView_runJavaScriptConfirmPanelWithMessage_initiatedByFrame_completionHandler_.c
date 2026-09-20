// webView:runJavaScriptConfirmPanelWithMessage:initiatedByFrame:completionHandler: @ 01f02b40

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x30 bytes */

void WCRefineToDoListWebSettingsViewController::
     webView_runJavaScriptConfirmPanelWithMessage_initiatedByFrame_completionHandler_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,
               undefined4 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *local_e8;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  long local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  long local_70;
  undefined *local_68;
  undefined4 local_5c;
  undefined *local_58;
  long local_50 [2];
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
  local_50[1] = 0;
  _objc_storeStrong(local_50 + 1,param_5);
  local_50[0] = 0;
  _objc_storeStrong(local_50,param_6);
  puVar2 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    if (local_50[0] != 0) {
      (**(code **)(local_50[0] + 0x10))(local_50[0],0);
    }
    local_5c = 1;
  }
  else {
    if (local_40 == (cfstringStruct *)0x0) {
      local_e8 = &::cf___;
    }
    else {
      local_e8 = local_40;
    }
    puVar3 = PTR__OBJC_CLASS___UIAlertController_026ce178;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIAlertController_026ce178,
               PTR_s_alertControllerWithTitle_message_0269dc00,&cf_Q_unx,local_e8);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_50[0];
    puVar4 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    puVar2 = PTR___NSConcreteStackBlock_02578660;
    local_90 = PTR___NSConcreteStackBlock_02578660;
    local_88 = 0xc2000000;
    local_84 = 0;
    local_80 = FUN_01f02edc;
    local_78 = &DAT_02584050;
    local_68 = puVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Sm,1,&local_90);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addAction__0269dc10);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    lVar1 = local_50[0];
    puVar3 = local_68;
    puVar4 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    local_b8 = puVar2;
    local_b0 = 0xc2000000;
    local_ac = 0;
    local_a8 = FUN_01f02f48;
    local_a0 = &DAT_02584050;
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_nx_,0,&local_b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addAction__0269dc10);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_presentViewController_animated_c_0269d2b0,local_68,1);
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
    local_5c = 0;
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(local_50,0);
  _objc_storeStrong(local_50 + 1,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

