// showToDoBackgroundUploadOptionsForVariant: @ 01ecb258

/* Function Stack Size: 0x18 bytes */

void WCRefineToDoListSettingsViewController::showToDoBackgroundUploadOptionsForVariant_
               (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  ID IVar4;
  cfstringStruct *local_50;
  char *local_40;
  undefined4 local_34;
  char *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (local_28 == (cfstringStruct *)0x0) {
    local_50 = &cf_light;
  }
  else {
    local_50 = local_28;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingMediaVariant__026be570,local_50);
  pcVar2 = "WCUIActionSheet";
  _objc_getClass();
  local_30 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    local_34 = 1;
  }
  else {
    _objc_alloc();
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_dark);
    pcVar1 = &cf_NOYZSO;
    if (((ulong)pcVar3 & 1) == 0) {
      pcVar1 = &cf_NOeZSO;
    }
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_initWithTitle__0269d2f8,pcVar1);
    local_40 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_addBtnTitle_target_sel__0269d278,&cf_NvQbVGr_,local_18,
               PTR_s_selectToDoBackgroundFromPhotoLib_026c7bc0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_NeNbVGr_,local_18,
               PTR_s_selectToDoBackgroundFromFiles_026c7bc8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
    pcVar2 = local_40;
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_showInView__0269d310);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

