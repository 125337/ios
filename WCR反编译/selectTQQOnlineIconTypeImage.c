// selectTQQOnlineIconTypeImage @ 01c5f1c8

/* Function Stack Size: 0x10 bytes */

void WCRefineNavigationAvatarViewController::selectTQQOnlineIconTypeImage(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID local_38;
  byte local_29;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_triggerHapticFeedback_0269dc78);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setTqqOnlineIconType__026c1e00,1);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tqqOnlineIconFolderPath_026c2008);
  _objc_retainAutoreleasedReturnValue();
  local_29 = 0;
  bVar1 = true;
  if (IVar2 != 0) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tqqOnlineIconFolderPath_026c2008);
    _objc_retainAutoreleasedReturnValue();
    local_29 = 1;
    local_28 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = IVar3 == 0;
  }
  if ((local_29 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (bVar1) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_getTQQOnlineIconBasePath_026c1e18);
    _objc_retainAutoreleasedReturnValue();
    local_38 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_stringByAppendingPathComponent__026cab30,&cf__W_);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setTqqOnlineIconFolderPath__026c1e20);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_storeStrong(&local_38,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_saveSettings_026b9548);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  return;
}

