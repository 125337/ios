// selectFromZip @ 01d665a0

/* Function Stack Size: 0x10 bytes */

void WCRefineScreenshotFrameLibraryViewController::selectFromZip(ID param_1,SEL param_2)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  undefined8 local_80;
  undefined8 local_78;
  cfstringStruct *local_70;
  undefined *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined *local_50;
  ulong local_48;
  cfstringStruct *local_40;
  SEL local_38;
  ID local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar2 = &cf_UIDocumentPickerViewController;
  local_38 = param_2;
  local_30 = param_1;
  _NSClassFromString();
  local_40 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_showToast__026b3a18,&cf___N_eceNbhV);
  }
  else {
    local_48 = 0;
    local_28 = &cf_public_zip_archive;
    local_20 = &cf_public_data;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_28,2
              );
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = &cf_initWithDocumentTypes_inMode_;
    local_50 = puVar3;
    _NSSelectorFromString();
    pcVar4 = local_40;
    local_58 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_instancesRespondToSelector__0269da90,pcVar2);
    if (((ulong)pcVar4 & 1) != 0) {
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_instanceMethodSignatureForSelect_026a0598,local_58);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSInvocation_026ce208;
      local_60 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSInvocation_026ce208,
                 PTR_s_invocationWithMethodSignature__0269e1a0,pcVar2);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_40;
      local_68 = puVar3;
      _objc_alloc();
      local_70 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setTarget__0269e1a8,pcVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setSelector__0269e1b0,local_58);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_setArgument_atIndex__0269eae8,&local_50,2);
      local_78 = 0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_setArgument_atIndex__0269eae8,&local_78,3);
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_invoke_0269e1b8);
      local_80 = 0;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_getReturnValue__0269e1c0,&local_80);
      _objc_storeStrong(&local_48,local_80);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_68,0);
      _objc_storeStrong(&local_60,0);
    }
    if (local_48 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_showToast__026b3a18,&cf_elR_eNbhV);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setValue_forKey__0269d300,local_30,&cf_delegate);
      uVar5 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_respondsToSelector__026ca818,
                 PTR_s_setAllowsMultipleSelection__026ae558);
      uVar1 = local_48;
      if ((uVar5 & 1) != 0) {
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_setValue_forKey__0269d300,puVar3,&cf_allowsMultipleSelection);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_presentViewController_animated_c_0269d2b0,local_48,1,0);
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

