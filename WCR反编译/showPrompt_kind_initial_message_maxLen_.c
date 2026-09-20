// showPrompt:kind:initial:message:maxLen: @ 017bc7f8

/* Function Stack Size: 0x34 bytes */

void WCRefineAIFeatureViewController::showPrompt_kind_initial_message_maxLen_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,
               unsigned_int param_7)

{
  char *pcVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  cfstringStruct *local_d8;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  ID local_68;
  ID local_60;
  unsigned_int local_54;
  undefined8 local_50;
  cfstringStruct *local_48;
  undefined8 local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_48,param_5);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  local_54 = param_7;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPromptKind__026b4c90,local_40);
  pcVar1 = "WCUIAlertView";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPromptAlert__026b4c98);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_promptAlert_026b4ca0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_promptAlert_026b4ca0);
  _objc_retainAutoreleasedReturnValue();
  if (local_48 == (cfstringStruct *)0x0) {
    local_d8 = &::cf___;
  }
  else {
    local_d8 = local_48;
  }
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_setTextFieldDefaultText__0269fd98,local_d8);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_promptAlert_026b4ca0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_promptAlert_026b4ca0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_promptAlert_026b4ca0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_promptAlert_026b4ca0);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_60 = IVar3;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_becomeFirstResponder_0269d108);
  puVar4 = PTR___dispatch_main_q_02578680;
  if ((IVar2 & 1) != 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_60;
    local_88 = PTR___NSConcreteStackBlock_02578660;
    local_80 = 0xc2000000;
    local_7c = 0;
    local_78 = FUN_017bcc3c;
    local_70 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = IVar2;
    _dispatch_async(puVar4,&local_88);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

