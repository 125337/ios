// showInputAlertForImage: @ 01d690e4

/* Function Stack Size: 0x18 bytes */

void WCRefineScreenshotFrameLibraryViewController::showInputAlertForImage_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *local_f8;
  ID local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined *local_a8;
  cfstringStruct *local_a0;
  undefined1 local_91;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  undefined8 local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  undefined *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_44;
  cfstringStruct *local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  pcVar2 = &cf_WCUIAlertView;
  _NSClassFromString();
  local_40 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_showToast__026b3a18,&cf__eQ1Y_);
    local_44 = 1;
  }
  else {
    _objc_alloc_init();
    pcVar3 = &cf_initWithTitle_message_;
    local_50 = pcVar2;
    _NSSelectorFromString();
    pcVar2 = local_50;
    local_58 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_respondsToSelector__026ca818,pcVar3);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_instanceMethodSignatureForSelect_026a0598,local_58);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSInvocation_026ce208;
      local_60 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSInvocation_026ce208,
                 PTR_s_invocationWithMethodSignature__0269e1a0,pcVar2);
      _objc_retainAutoreleasedReturnValue();
      local_68 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTarget__0269e1a8,local_50);
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setSelector__0269e1b0,local_58);
      (*(code *)PTR__objc_retain_02578638)();
      local_70 = &cf_eQWYXTy;
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = &::cf___;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_setArgument_atIndex__0269eae8,&local_70,2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_setArgument_atIndex__0269eae8,&local_78,3);
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_invoke_0269e1b8);
      local_80 = 0;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_getReturnValue__0269e1c0,&local_80);
      _objc_storeStrong(&local_50,local_80);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_68,0);
      _objc_storeStrong(&local_60,0);
    }
    pcVar2 = &cf_addTextFieldWithPlaceholder_isSecure_;
    _NSSelectorFromString();
    pcVar3 = local_50;
    local_88 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_respondsToSelector__026ca818,pcVar2);
    if (((ulong)pcVar3 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_90 = &cf_eQTy;
      local_91 = 0;
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_instanceMethodSignatureForSelect_026a0598,local_88);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSInvocation_026ce208;
      local_a0 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSInvocation_026ce208,
                 PTR_s_invocationWithMethodSignature__0269e1a0,pcVar2);
      _objc_retainAutoreleasedReturnValue();
      local_a8 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTarget__0269e1a8,local_50);
      (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setSelector__0269e1b0,local_88);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a8,PTR_s_setArgument_atIndex__0269eae8,&local_90,2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a8,PTR_s_setArgument_atIndex__0269eae8,&local_91,3);
      (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_invoke_0269e1b8);
      _objc_storeStrong(&local_a8);
      _objc_storeStrong(&local_a0,0);
      _objc_storeStrong(&local_90,0);
    }
    pcVar2 = &cf_addBtnTitle_target_sel_;
    _NSSelectorFromString();
    pcVar3 = local_50;
    local_b0 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_respondsToSelector__026ca818,pcVar2);
    if (((ulong)pcVar3 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b8 = &cf_Sm;
      (*(code *)PTR__objc_retain_02578638)();
      local_c0 = &cf_nx_;
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_instanceMethodSignatureForSelect_026a0598,local_b0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSInvocation_026ce208;
      local_c8 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSInvocation_026ce208,
                 PTR_s_invocationWithMethodSignature__0269e1a0,pcVar2);
      _objc_retainAutoreleasedReturnValue();
      local_d0 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTarget__0269e1a8,local_50);
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setSelector__0269e1b0,local_b0);
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setArgument_atIndex__0269eae8,&local_b8);
      local_d8 = 0;
      local_e0 = 0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setArgument_atIndex__0269eae8);
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setArgument_atIndex__0269eae8,&local_e0);
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_invoke_0269e1b8);
      puVar4 = PTR__OBJC_CLASS___NSInvocation_026ce208;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSInvocation_026ce208,
                 PTR_s_invocationWithMethodSignature__0269e1a0,local_c8);
      _objc_retainAutoreleasedReturnValue();
      local_e8 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTarget__0269e1a8,local_50);
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setSelector__0269e1b0,local_b0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e8,PTR_s_setArgument_atIndex__0269eae8,&local_c0,2);
      IVar1 = local_28;
      (*(code *)PTR__objc_retain_02578638)();
      local_f0 = IVar1;
      local_f8 = PTR_s_confirmUploadFrame__026c4a20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e8,PTR_s_setArgument_atIndex__0269eae8,&local_f0,3);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e8,PTR_s_setArgument_atIndex__0269eae8,&local_f8,4);
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_invoke_0269e1b8);
      _objc_storeStrong(&local_f0,0);
      _objc_storeStrong(&local_e8,0);
      _objc_storeStrong(&local_d8,0);
      _objc_storeStrong(&local_d0,0);
      _objc_storeStrong(&local_c8,0);
      _objc_storeStrong(&local_c0,0);
      _objc_storeStrong(&local_b8,0);
    }
    _objc_setAssociatedObject(local_50,&cf_uploadImage,local_38,1);
    pcVar2 = &cf_show;
    _NSSelectorFromString();
    pcVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_respondsToSelector__026ca818,pcVar2);
    if (((ulong)pcVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_performSelector__026ca7b8,pcVar2);
    }
    _objc_storeStrong(&local_50,0);
    local_44 = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

