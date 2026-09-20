// showInputAlertWithTitle:placeholder:currentValue:callback: @ 01e6a6dc

/* Function Stack Size: 0x30 bytes */

void WCRefineTextReplaceViewController::showInputAlertWithTitle_placeholder_currentValue_callback_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,
               undefined4 param_7)

{
  undefined *puVar1;
  ID IVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  undefined8 uVar6;
  cfstringStruct *local_a0;
  char *local_68 [3];
  cfstringStruct *local_50;
  char *local_48;
  undefined8 local_40;
  long local_38;
  cfstringStruct *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_6);
  pcVar3 = "WCUIAlertView";
  _objc_getClass();
  local_48 = pcVar3;
  if (pcVar3 != (char *)0x0) {
    pcVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_a0 = &cf_eQ_OvN___TT;
    }
    else {
      local_a0 = local_30;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_a0;
    pcVar3 = local_48;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar3,PTR_s_initWithTitle_message__0269d260,local_28,local_50);
    local_68[0] = pcVar3;
    if (pcVar3 != (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x32);
      if ((local_38 != 0) &&
         (lVar5 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
         lVar5 != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68[0],PTR_s_setTextFieldDefaultText__0269fd98,local_38);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68[0],PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
                 PTR_s_handleAlertCancel__026b9590);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68[0],PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
                 PTR_s_handleAlertConfirm__026b9598);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentAlert__026aa348,local_68[0]);
      IVar2 = local_18;
      puVar1 = PTR_s_handleAlertConfirm__026b9598;
      uVar6 = local_40;
      _objc_retainBlock();
      _objc_setAssociatedObject(IVar2,puVar1,uVar6,1);
      (*(code *)PTR__objc_release_02578630)(uVar6);
      _objc_setAssociatedObject(local_18,PTR_s_handleAlertCancel__026b9590,local_28,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_show_0269d280);
    }
    _objc_storeStrong(local_68);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

