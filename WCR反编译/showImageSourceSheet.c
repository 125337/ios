// showImageSourceSheet @ 00347414

/* Function Stack Size: 0x10 bytes */

void WCRefineHomeAvatarStripPickerBridge::showImageSourceSheet(ID param_1,SEL param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  bool bVar3;
  char *pcVar4;
  ID IVar5;
  ID IVar6;
  char *local_40;
  undefined1 local_31;
  ID local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  pcVar4 = "WCUIActionSheet";
  local_20 = param_2;
  local_18 = param_1;
  _objc_getClass();
  local_31 = 0;
  bVar3 = true;
  uVar1 = pcVar4 != (char *)0x0;
  local_28 = pcVar4;
  if ((bool)uVar1) {
    IVar5 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_host_0269dc50);
    _objc_retainAutoreleasedReturnValue();
    bVar3 = IVar5 == 0;
    local_31 = uVar1;
    local_30 = IVar5;
    (*(code *)PTR__objc_release_02578630)(IVar5);
    uVar1 = local_31;
  }
  local_31 = uVar1;
  if (bVar3) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_releaseFromHost_026a2230);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
    pcVar4 = local_28;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar4,PTR_s_addBtnTitle_target_sel__0269d278,&cf_vQ,local_18,
               PTR_s_pickFromPhotos_026a2248);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_eN,local_18,
               PTR_s_pickFromFiles_026a2250);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_addDestructiveButtonTitle_target_0269f800,&cf_nd>f_y4YP,local_18,
               PTR_s_clearCustomImage_026a2258);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
               PTR_s_cancelAction_026a2260);
    pcVar4 = local_40;
    puVar2 = PTR_s_showInView__0269d310;
    IVar5 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_host_0269dc50);
    _objc_retainAutoreleasedReturnValue();
    IVar6 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,puVar2);
    (*(code *)PTR__objc_release_02578630)(IVar6);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    _objc_storeStrong(&local_40,0);
  }
  return;
}

