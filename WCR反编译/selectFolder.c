// selectFolder @ 01f24f60

/* Function Stack Size: 0x10 bytes */

void WCRefineTouchTrailViewController::selectFolder(ID param_1,SEL param_2)

{
  char *pcVar1;
  ID IVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *local_48;
  ID local_40;
  int local_34;
  ID local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar1 = "WCUIActionSheet";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  IVar2 = local_18;
  local_28 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_getAvailableFolders_026b2fa0);
  _objc_retainAutoreleasedReturnValue();
  local_34 = 0;
  local_30 = IVar2;
  while( true ) {
    uVar4 = (ulong)local_34;
    IVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
    if (IVar2 <= uVar4) break;
    IVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectAtIndexedSubscript__0269cc78,(long)local_34);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_40 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf_selectTouchTrailFolder_d_);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar3;
    _NSSelectorFromString();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_addDynamicMethodForSelector_fold_026b2fa8,puVar3,local_40);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_addBtnTitle_target_sel__0269d278,local_40,local_18,puVar3);
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
    local_34 = local_34 + 1;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_addBtnTitle_target_sel__0269d278,&cf_R_eeN9Y,local_18,
             PTR_s_showCreateFolderAlert_026b2fb0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
  pcVar1 = local_28;
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_showInView__0269d310);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

