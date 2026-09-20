// showScaleInputWithTitle:currentValue:onConfirm: @ 01823400

/* Function Stack Size: 0x28 bytes */

void WCRefineAvatarCornerBeautifyViewController::showScaleInputWithTitle_currentValue_onConfirm_
               (ID param_1,SEL param_2,ID param_3,double param_4,ID param_5,undefined4 param_6)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  double local_98;
  cfstringStruct *local_88;
  char *local_58;
  double local_50;
  char *local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  double local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3,param_3,param_5,param_6);
  local_38 = 0;
  local_30 = param_4;
  _objc_storeStrong(&local_38,param_5);
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_88 = &cf_eQ4YPFh__>ekO;
  }
  else {
    local_88 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_88;
  pcVar3 = "WCUIAlertView";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_48 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x10);
  pcVar3 = local_48;
  if ((local_30 <= 0.0) || (local_30 == 1.5)) {
    local_98 = 1.5;
  }
  else {
    local_98 = local_30;
  }
  local_50 = local_98;
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___2f);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_setTextFieldDefaultText__0269fd98);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  pcVar3 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_getTextField_0269fb48);
  _objc_retainAutoreleasedReturnValue();
  local_58 = pcVar3;
  if ((pcVar3 != (char *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_setKeyboardType__026aec58),
     ((ulong)pcVar3 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setKeyboardType__026aec58,8);
  }
  _objc_storeStrong(&local_58,0);
  IVar1 = local_18;
  uVar5 = local_38;
  _objc_retainBlock();
  _objc_setAssociatedObject(IVar1,"WCRefineScaleConfirmBlock",uVar5,3);
  (*(code *)PTR__objc_release_02578630)(uVar5);
  _objc_setAssociatedObject(local_18,"WCRefineScaleAlert",local_48,1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
             PTR_s_handleScaleCancel__026b6350);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
             PTR_s_handleScaleConfirm__026b6358);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_show_0269d280);
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

