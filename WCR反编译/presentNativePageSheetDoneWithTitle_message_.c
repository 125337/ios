// presentNativePageSheetDoneWithTitle:message: @ 00fa3908

/* Function Stack Size: 0x20 bytes */

ID WCRefineHelper::presentNativePageSheetDoneWithTitle_message_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  char *pcVar1;
  cfstringStruct *local_b8;
  cfstringStruct *local_a0;
  cfstringStruct *local_90;
  cfstringStruct *local_78;
  char *local_58;
  cfstringStruct *local_50;
  undefined4 local_44;
  char *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  char *local_20;
  char *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = (char *)param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_4);
  pcVar1 = "DeepCleanProgressDoneHalfScreenView";
  _objc_getClass();
  local_40 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    if (local_30 == (cfstringStruct *)0x0) {
      local_78 = &cf___b;
    }
    else {
      local_78 = local_30;
    }
    if (local_38 == (cfstringStruct *)0x0) {
      local_90 = &::cf___;
    }
    else {
      local_90 = local_38;
    }
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,local_78,local_90,&cf__b,0);
    _objc_retainAutoreleasedReturnValue();
    local_44 = 1;
    local_18 = pcVar1;
  }
  else {
    if (local_38 == (cfstringStruct *)0x0) {
      local_a0 = &::cf___;
    }
    else {
      local_a0 = local_38;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a0,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&::cf__,&cf___);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_40;
    local_50 = local_a0;
    _objc_alloc();
    if (local_30 == (cfstringStruct *)0x0) {
      local_b8 = &cf___b;
    }
    else {
      local_b8 = local_30;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_initWithDataSize_finishTitle_fin_026ace50,0,local_b8,local_50);
    local_58 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_showWithAnimated__0269e5a8,1);
    pcVar1 = local_58;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
    local_44 = 1;
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

