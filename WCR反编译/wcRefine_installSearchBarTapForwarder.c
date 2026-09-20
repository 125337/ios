// wcRefine_installSearchBarTapForwarder @ 01d78db4

/* Function Stack Size: 0x10 bytes */

void WCRefineSearchSettingsViewController::wcRefine_installSearchBarTapForwarder
               (ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_searchBar_026a2698);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isKindOfClass__0269cd68,puVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  if ((IVar2 & 1) != 0) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_searchBar_026a2698);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_18;
    local_28 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_searchBarTapRecognizer_026c4ae8);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_28;
    (*(code *)PTR__objc_release_02578630)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    if (IVar4 != IVar2) {
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_searchBarTapRecognizer_026c4ae8);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      if (IVar3 != 0) {
        IVar2 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_searchBarTapRecognizer_026c4ae8);
        _objc_retainAutoreleasedReturnValue();
        IVar3 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        IVar4 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_searchBarTapRecognizer_026c4ae8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_removeGestureRecognizer__026ca808);
        (*(code *)PTR__objc_release_02578630)(IVar4);
        (*(code *)PTR__objc_release_02578630)(IVar3);
        (*(code *)PTR__objc_release_02578630)(IVar2);
      }
      puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setSearchBarTapRecognizer__026c4af8);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_searchBarTapRecognizer_026c4ae8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_searchBarTapRecognizer_026c4ae8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_searchBarTapRecognizer_026c4ae8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_searchBarTapRecognizer_026c4ae8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_28;
      IVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_searchBarTapRecognizer_026c4ae8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_addGestureRecognizer__026ca4a8);
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    _objc_storeStrong(&local_28,0);
  }
  return;
}

