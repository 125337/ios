// renameFrame @ 01d70c68

/* Function Stack Size: 0x10 bytes */

void WCRefineScreenshotFrameLibraryViewController::renameFrame(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 uVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *local_d8;
  ID local_d0;
  cfstringStruct *local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  ID local_b0;
  cfstringStruct *local_a8;
  undefined *local_a0;
  cfstringStruct *local_98;
  undefined *local_90;
  undefined4 local_84;
  ulong local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined *local_60;
  cfstringStruct *local_58;
  undefined *local_50;
  undefined4 local_44;
  cfstringStruct *local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  if (*(long *)(param_1 + (long)_selectedImagePath) != 0) {
    uVar2 = *(undefined8 *)(param_1 + (long)_selectedImagePath);
    local_30 = param_2;
    local_28 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = &cf_WCUIAlertView;
    local_38 = uVar2;
    _NSClassFromString();
    local_40 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_44 = 1;
    }
    else {
      local_50 = PTR_s_initWithTitle_message__0269d260;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_instanceMethodSignatureForSelect_026a0598,
                 PTR_s_initWithTitle_message__0269d260);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSInvocation_026ce208;
      local_58 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSInvocation_026ce208,
                 PTR_s_invocationWithMethodSignature__0269e1a0,pcVar3);
      _objc_retainAutoreleasedReturnValue();
      local_60 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setSelector__0269e1b0,local_50);
      pcVar3 = local_40;
      _objc_alloc_init();
      local_68 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setTarget__0269e1a8,pcVar3);
      (*(code *)PTR__objc_retain_02578638)();
      local_70 = &cf__TTWYX;
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = &cf_eQevTy;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_setArgument_atIndex__0269eae8,&local_70,2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_setArgument_atIndex__0269eae8,&local_78,3);
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_invoke_0269e1b8);
      local_80 = 0;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_getReturnValue__0269e1c0,&local_80);
      if (local_80 == 0) {
        local_44 = 1;
      }
      else {
        uVar5 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_80,PTR_s_respondsToSelector__026ca818,
                   PTR_s_showTextFieldWithMaxLen__0269e5e0);
        uVar7 = local_80;
        puVar4 = PTR_s_showTextFieldWithMaxLen__0269e5e0;
        if ((uVar5 & 1) != 0) {
          local_84 = 0x32;
          puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,0x32)
          ;
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar7,PTR_s_performSelector_withObject__026ca7c0,puVar4);
          (*(code *)PTR__objc_release_02578630)(puVar6);
        }
        uVar7 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_80,PTR_s_respondsToSelector__026ca818,
                   PTR_s_setTextFieldPlaceHolder__026b6520);
        if ((uVar7 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,PTR_s_performSelector_withObject__026ca7c0,
                     PTR_s_setTextFieldPlaceHolder__026b6520,&cf_WYXTy);
        }
        uVar7 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_80,PTR_s_respondsToSelector__026ca818,
                   PTR_s_setTextFieldDefaultText__0269fd98);
        if ((uVar7 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,PTR_s_performSelector_withObject__026ca7c0,
                     PTR_s_setTextFieldDefaultText__0269fd98,local_38);
        }
        local_90 = PTR_s_addBtnTitle_target_sel__0269d278;
        pcVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_instanceMethodSignatureForSelect_026a0598,
                   PTR_s_addBtnTitle_target_sel__0269d278);
        _objc_retainAutoreleasedReturnValue();
        local_98 = pcVar3;
        if (pcVar3 != (cfstringStruct *)0x0) {
          puVar4 = PTR__OBJC_CLASS___NSInvocation_026ce208;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSInvocation_026ce208,
                     PTR_s_invocationWithMethodSignature__0269e1a0,pcVar3);
          _objc_retainAutoreleasedReturnValue();
          local_a0 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setSelector__0269e1b0,local_90);
          (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setTarget__0269e1a8,local_80);
          (*(code *)PTR__objc_retain_02578638)();
          IVar1 = local_28;
          local_a8 = &cf_Sm;
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = IVar1;
          local_b8 = 0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a0,PTR_s_setArgument_atIndex__0269eae8,&local_a8);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a0,PTR_s_setArgument_atIndex__0269eae8,&local_b0);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a0,PTR_s_setArgument_atIndex__0269eae8,&local_b8);
          (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_invoke_0269e1b8);
          puVar4 = PTR__OBJC_CLASS___NSInvocation_026ce208;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSInvocation_026ce208,
                     PTR_s_invocationWithMethodSignature__0269e1a0,local_98);
          _objc_retainAutoreleasedReturnValue();
          local_c0 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setSelector__0269e1b0,local_90);
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setTarget__0269e1a8,local_80);
          (*(code *)PTR__objc_retain_02578638)();
          IVar1 = local_28;
          local_c8 = &cf_nx_;
          (*(code *)PTR__objc_retain_02578638)();
          local_d0 = IVar1;
          local_d8 = PTR_s_confirmRenameFrame__026b6528;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c0,PTR_s_setArgument_atIndex__0269eae8,&local_c8,2);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c0,PTR_s_setArgument_atIndex__0269eae8,&local_d0,3);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c0,PTR_s_setArgument_atIndex__0269eae8,&local_d8,4);
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_invoke_0269e1b8);
          _objc_storeStrong(&local_d0,0);
          _objc_storeStrong(&local_c8,0);
          _objc_storeStrong(&local_c0,0);
          _objc_storeStrong(&local_b0,0);
          _objc_storeStrong(&local_a8,0);
          _objc_storeStrong(&local_a0,0);
        }
        _objc_setAssociatedObject(local_28,PTR_s_renameFrame_026b64c0,local_80,1);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_80,PTR_s_performSelector__026ca7b8,PTR_s_show_0269d280);
        _objc_storeStrong(&local_98,0);
        local_44 = 0;
      }
      _objc_storeStrong(&local_78);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_68,0);
      _objc_storeStrong(&local_60,0);
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_38,0);
  }
  return;
}

