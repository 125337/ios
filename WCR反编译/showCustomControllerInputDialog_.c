// showCustomControllerInputDialog: @ 01a49880

/* Function Stack Size: 0x18 bytes */

void WCRefineGeneralFunctionViewController::showCustomControllerInputDialog_
               (ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  ID IVar2;
  char *pcVar3;
  undefined *puVar4;
  char *local_38;
  char *local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  pcVar3 = "WCUIAlertView";
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_getClass();
  IVar2 = local_18;
  puVar1 = PTR_s_handleCustomControllerInput__026bca58;
  if (pcVar3 != (char *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_30 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_28);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(IVar2,puVar1,puVar4,1);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    pcVar3 = local_30;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_38 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x32);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
               PTR_s_cancelCustomControllerInput_026bca60);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
               PTR_s_handleCustomControllerInput__026bca58);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_show_0269d280);
    _objc_storeStrong(&local_38,0);
  }
  return;
}

