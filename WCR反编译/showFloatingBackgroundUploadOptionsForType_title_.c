// showFloatingBackgroundUploadOptionsForType:title: @ 019c4e40

/* Function Stack Size: 0x20 bytes */

void WCRefineFloatingTabBarSettingsViewController::showFloatingBackgroundUploadOptionsForType_title_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  char *pcVar1;
  ID IVar2;
  cfstringStruct *local_80;
  cfstringStruct *local_68;
  char *local_48;
  undefined4 local_3c;
  char *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_4);
  if (local_28 == (cfstringStruct *)0x0) {
    local_68 = &cf_day;
  }
  else {
    local_68 = local_28;
  }
  _objc_setAssociatedObject(local_18,&DAT_028e4442,local_68,3);
  pcVar1 = "WCUIActionSheet";
  _objc_getClass();
  local_38 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    local_3c = 1;
  }
  else {
    _objc_alloc();
    if (local_30 == (cfstringStruct *)0x0) {
      local_80 = &cf_NOofZSO;
    }
    else {
      local_80 = local_30;
    }
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_initWithTitle__0269d2f8,local_80);
    local_48 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_addBtnTitle_target_sel__0269d278,&cf_NvQbVGr_,local_18,
               PTR_s_selectFloatingBackgroundFromPhot_026bacf8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_addBtnTitle_target_sel__0269d278,&cf_NeNbVGr_,local_18,
               PTR_s_selectFloatingBackgroundFromFile_026bad00);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
    pcVar1 = local_48;
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_showInView__0269d310);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

