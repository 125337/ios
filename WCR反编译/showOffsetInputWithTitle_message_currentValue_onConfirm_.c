// showOffsetInputWithTitle:message:currentValue:onConfirm: @ 018228c4

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x30 bytes */

void WCRefineAvatarCornerBeautifyViewController::
     showOffsetInputWithTitle_message_currentValue_onConfirm_
               (ID param_1,SEL param_2,ID param_3,ID param_4,double param_5,ID param_6,
               undefined4 param_7)

{
  char *pcVar1;
  ID IVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  cfstringStruct *local_b0;
  char *local_78;
  char *local_70;
  bool local_61;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined8 local_50;
  double local_48;
  long local_40 [3];
  ID local_28;
  
  local_40[1] = 0;
  local_40[2] = param_2;
  local_28 = param_1;
  _objc_storeStrong(local_40 + 1,param_3);
  local_40[0] = 0;
  _objc_storeStrong(local_40,param_4);
  local_50 = 0;
  local_48 = param_5;
  _objc_storeStrong(&local_50,param_6);
  lVar3 = local_40[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_length_0269cca0);
  local_61 = false;
  if (lVar3 == 0) {
    local_b0 = &cf_eQMOype<PS;
  }
  else {
    local_b0 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    local_60 = local_b0;
  }
  local_61 = lVar3 != 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_b0;
  if ((local_61 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  pcVar4 = "WCUIAlertView";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_70 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x10);
  pcVar1 = local_70;
  FUN_0181bd98(local_48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_setTextFieldDefaultText__0269fd98);
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  pcVar4 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_getTextField_0269fb48);
  _objc_retainAutoreleasedReturnValue();
  local_78 = pcVar4;
  if (pcVar4 != (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_setKeyboardType__026aec58);
    if (((ulong)pcVar4 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setKeyboardType__026aec58,2);
    }
  }
  _objc_storeStrong(&local_78,0);
  IVar2 = local_28;
  uVar5 = local_50;
  _objc_retainBlock();
  _objc_setAssociatedObject(IVar2,"WCRefineOffsetConfirmBlock",uVar5,3);
  (*(code *)PTR__objc_release_02578630)(uVar5);
  _objc_setAssociatedObject(local_28,"WCRefineOffsetAlert",local_70,1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_70,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_28,
             PTR_s_handleOffsetCancel__026b6340);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_70,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_28,
             PTR_s_handleOffsetConfirm__026b6348);
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_show_0269d280);
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(local_40,0);
  _objc_storeStrong(local_40 + 1,0);
  return;
}

