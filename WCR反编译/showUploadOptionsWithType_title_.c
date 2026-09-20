// showUploadOptionsWithType:title: @ 0187f7bc

/* Function Stack Size: 0x20 bytes */

void WCRefineChatAttachmentBeautifyViewController::showUploadOptionsWithType_title_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  char *pcVar1;
  ulong uVar2;
  ID IVar3;
  undefined *local_80;
  undefined *local_68;
  char *local_48;
  undefined4 local_3c;
  char *local_38;
  undefined8 local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar1 = "WCUIActionSheet";
  _objc_getClass();
  local_38 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    local_3c = 1;
  }
  else {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    IVar3 = local_18;
    uVar2 = local_28;
    local_48 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_night);
    if ((uVar2 & 1) == 0) {
      local_68 = PTR_s_selectDayFromPhoto_026b6f50;
    }
    else {
      local_68 = PTR_s_selectNightFromPhoto_026b6f48;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_addBtnTitle_target_sel__0269d278,&cf_NvQbVGr_,IVar3,local_68);
    IVar3 = local_18;
    pcVar1 = local_48;
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_night);
    if ((uVar2 & 1) == 0) {
      local_80 = PTR_s_selectDayFromFiles_026b6f60;
    }
    else {
      local_80 = PTR_s_selectNightFromFiles_026b6f58;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_addBtnTitle_target_sel__0269d278,&cf_NeNbVGr_,IVar3,local_80);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
    pcVar1 = local_48;
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_showInView__0269d310);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

