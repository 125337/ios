// renameWatermark @ 01fae044

/* Function Stack Size: 0x10 bytes */

void WCRefineWatermarkLibraryViewController::renameWatermark(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  if (*(long *)(param_1 + (long)_selectedImagePath) != 0) {
    uVar1 = *(undefined8 *)(param_1 + (long)_selectedImagePath);
    local_20 = param_2;
    local_18 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_28 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    pcVar3 = &cf_WCUIAlertView;
    _NSClassFromString();
    local_30 = pcVar3;
    if (pcVar3 != (cfstringStruct *)0x0) {
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_38 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x32);
      pcVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_setTextFieldPlaceHolder__026b6520
                );
      if (((ulong)pcVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_performSelector_withObject__026ca7c0,
                   PTR_s_setTextFieldPlaceHolder__026b6520,&cf_4lpSTy);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_setTextFieldDefaultText__0269fd98,local_28);
      _objc_setAssociatedObject(local_18,PTR_s_renameWatermark_026c9dd0,local_38,1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
                 PTR_s_confirmRenameWatermark__026c9df0);
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_show_0269d280);
      _objc_storeStrong(&local_38,0);
    }
    _objc_storeStrong(&local_28,0);
  }
  return;
}

