// confirmCustomIconInput: @ 016e3ec8

/* Function Stack Size: 0x18 bytes */

void RepeatThemeIconSelectorViewController::confirmCustomIconInput_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  char *pcVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  char *local_38;
  ID local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_alertInputText__026b3280,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_length_0269cca0);
  if (IVar1 == 0) {
    pcVar2 = "WCUIAlertView";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_38 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_show_0269d280);
    _objc_storeStrong(&local_38,0);
  }
  else {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_delegate_0269e808);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    if ((IVar3 & 1) != 0) {
      IVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_delegate_0269e808);
      _objc_retainAutoreleasedReturnValue();
      IVar1 = local_30;
      IVar4 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_iconType_026b31f8);
      _objc_retainAutoreleasedReturnValue();
      IVar5 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isDark_026b3200);
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_themeIconSelectorDidSelectIcon_f_026b3288,IVar1,IVar4,IVar5);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_closeAfterSelection_026b3258);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

