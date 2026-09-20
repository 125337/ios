// wcRefine_isSettingsPageOnScreen @ 014bd510

/* Function Stack Size: 0x10 bytes */

bool WCRefineSearchManager::wcRefine_isSettingsPageOnScreen(ID param_1,SEL param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ID local_48;
  ID local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  if ((*(byte *)(param_1 + 10) & 1) == 0) {
    local_28 = param_2;
    local_20 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_settingsViewController_026af4f8);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = false;
    bVar1 = false;
    bVar3 = true;
    local_30 = param_1;
    if (param_1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isViewLoaded_0269cde0);
      bVar3 = true;
      if ((param_1 & 1) != 0) {
        local_38 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        bVar2 = true;
        local_48 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
        bVar3 = local_48 == 0;
      }
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
    local_11 = !bVar3;
    _objc_storeStrong(&local_30,0);
  }
  else {
    local_11 = 0;
  }
  return local_11 & 1;
}

