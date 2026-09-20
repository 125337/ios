// showAlert:message: @ 01d5d224

/* Function Stack Size: 0x20 bytes */

void WCRefineScreenshotFrameEditorViewController::showAlert_message_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined8 local_70;
  undefined8 local_68;
  cfstringStruct *local_60;
  undefined *local_58;
  cfstringStruct *local_50;
  undefined *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
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
  pcVar1 = &cf_WCUIAlertView;
  _NSClassFromString();
  local_38 = pcVar1;
  if (pcVar1 != (cfstringStruct *)0x0) {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_48 = PTR_s_addBtnTitle_target_sel__0269d278;
    pcVar2 = local_38;
    local_40 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_instanceMethodSignatureForSelect_026a0598,
               PTR_s_addBtnTitle_target_sel__0269d278);
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar2;
    if (pcVar2 != (cfstringStruct *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSInvocation_026ce208;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSInvocation_026ce208,
                 PTR_s_invocationWithMethodSignature__0269e1a0,pcVar2);
      _objc_retainAutoreleasedReturnValue();
      local_58 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTarget__0269e1a8,local_40);
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setSelector__0269e1b0,local_48);
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = &cf_nx_;
      local_68 = 0;
      local_70 = 0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_setArgument_atIndex__0269eae8,&local_60,2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_setArgument_atIndex__0269eae8,&local_68,3);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_setArgument_atIndex__0269eae8,&local_70,4);
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_invoke_0269e1b8);
      _objc_storeStrong(&local_68,0);
      _objc_storeStrong(&local_60,0);
      _objc_storeStrong(&local_58,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_performSelector__026ca7b8,PTR_s_show_0269d280);
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

