// wcRefine_normalizeSearchInputViews @ 01d77e18

/* Function Stack Size: 0x10 bytes */

void WCRefineSearchSettingsViewController::wcRefine_normalizeSearchInputViews
               (ID param_1,SEL param_2)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID local_38;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_searchBar_026a2698);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  IVar4 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isKindOfClass__0269cd68,puVar3);
  (*(code *)PTR__objc_release_02578630)(param_1);
  if ((IVar4 & 1) != 0) {
    IVar5 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_searchBar_026a2698);
    _objc_retainAutoreleasedReturnValue();
    IVar6 = IVar5;
    FUN_01d780e0();
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_28;
    local_28 = IVar6;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(IVar5);
  }
  IVar4 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_searchTextField_0269e9f8);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar4;
  FUN_01d786a8();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  IVar4 = local_28;
  if (((IVar5 & 1) == 0) || (local_28 == 0)) {
    bVar1 = false;
    bVar2 = false;
    if (((IVar5 & 1) == 0) && (bVar2 = false, local_28 != 0)) {
      local_38 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_searchTextView_026c4a98);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      bVar2 = IVar4 != local_38;
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
    if (bVar2) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_wcRefine_configureSearchTextView_026c4ae0,local_28);
    }
  }
  else {
    FUN_01d78930(local_28,local_18);
    IVar4 = local_28;
    IVar5 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_searchTextView_026c4a98);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (IVar4 == IVar5) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setSearchTextView__026c4aa0,0);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

