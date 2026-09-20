// focusSearchBar @ 01d7a3ac

/* Function Stack Size: 0x10 bytes */

void WCRefineSearchSettingsViewController::focusSearchBar(ID param_1,SEL param_2)

{
  uint uVar1;
  ID IVar2;
  ID IVar3;
  ulong uVar4;
  ID IVar5;
  uint local_9c;
  ID local_38 [3];
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcRefine_normalizeSearchInputVie_026c4a90);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_38[0] = IVar3;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if ((local_38[0] != 0) &&
     (IVar2 = local_38[0],
     (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_isKeyWindow_0269cd70), (IVar2 & 1) == 0
     )) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_makeKeyWindow_026ad4d0);
  }
  uVar1 = (uint)*(undefined8 *)(local_18 + (long)_searchTextField);
  FUN_01d786a8();
  if ((uVar1 & 1) != 0) {
    uVar4 = *(ulong *)(local_18 + (long)_searchTextField);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,PTR_s_respondsToSelector__026ca818,PTR_s_becomeFirstResponder_0269d108);
    if ((uVar4 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(local_18 + (long)_searchTextField),
                 PTR_s_becomeFirstResponder_0269d108);
      goto LAB_01d7a750;
    }
  }
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_searchTextView_026c4a98);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  FUN_01d786a8();
  local_9c = 0;
  if ((IVar3 & 1) != 0) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_searchTextView_026c4a98);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_9c = (uint)IVar5;
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if ((local_9c & 1) == 0) {
    uVar4 = *(ulong *)(local_18 + (long)_searchBar);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,PTR_s_respondsToSelector__026ca818,PTR_s_becomeFirstResponder_0269d108);
    if ((uVar4 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(local_18 + (long)_searchBar),PTR_s_becomeFirstResponder_0269d108);
    }
  }
  else {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_searchTextView_026c4a98);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
LAB_01d7a750:
  _objc_storeStrong(local_38,0);
  return;
}

