// FUN_014c2968 @ 014c2968

void FUN_014c2968(long param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  byte local_49;
  ulong local_48;
  byte local_39;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar2 = param_1 + 0x20;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_wcRefine_isSettingsPageOnScreen_026af5c0);
  if ((uVar2 & 1) == 0) {
    local_2c = 1;
  }
  else {
    local_39 = 0;
    local_49 = 0;
    bVar1 = false;
    if (local_28 != 0) {
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingSearchKeyword_026af5c8);
      _objc_retainAutoreleasedReturnValue();
      local_39 = 1;
      bVar1 = false;
      local_38 = uVar2;
      if (uVar2 != 0) {
        uVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingSearchKeyword_026af5c8);
        _objc_retainAutoreleasedReturnValue();
        local_49 = 1;
        local_48 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = uVar2 != 0;
      }
    }
    if ((local_49 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    if ((local_39 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
    if (bVar1) {
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingSearchKeyword_026af5c8);
      _objc_retainAutoreleasedReturnValue();
      local_58 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPendingSearchKeyword__026af5d0,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_executeSearchForText__026af550,local_58);
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_filteredSections_026af5d8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (uVar2 != 0) {
        uVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_lowercaseString_0269d9c0);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_28;
        local_60 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_filteredSections_026af5d8);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_searchResultsCache_026af5e0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar2);
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_searchResultsCache_026af5e0);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar2);
        if (100 < uVar3) {
          uVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_searchResultsCache_026af5e0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar2);
        }
        local_68 = 0;
        local_70 = 0;
        uVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_settingsViewController_026af4f8);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar2);
        if ((uVar3 & 1) != 0) {
          uVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_settingsViewController_026af4f8);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_70;
          local_70 = uVar4;
          (*(code *)PTR__objc_release_02578630)(uVar2);
          (*(code *)PTR__objc_release_02578630)(uVar3);
        }
        if (local_70 != 0) {
          uVar2 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_getTableView_026a09c8);
          if ((uVar2 & 1) != 0) {
            uVar3 = local_70;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_70,PTR_s_performSelector__026ca7b8,PTR_s_getTableView_026a09c8);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = local_68;
            local_68 = uVar3;
            (*(code *)PTR__objc_release_02578630)(uVar2);
          }
        }
        uVar2 = local_68;
        if (local_68 != 0) {
          puVar5 = PTR__OBJC_CLASS___UIScrollView_026ce1a0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIScrollView_026ce1a0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
          uVar3 = local_68;
          if ((uVar2 & 1) != 0) {
            uVar7 = 0;
            uVar6 = 0;
            FUN_014c2f1c();
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar6,uVar7,uVar3,PTR_s_setContentOffset_animated__0269ddd8,1);
          }
        }
        _objc_storeStrong(&local_70);
        _objc_storeStrong(&local_68,0);
        _objc_storeStrong(&local_60,0);
      }
      _objc_storeStrong(&local_58,0);
    }
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

