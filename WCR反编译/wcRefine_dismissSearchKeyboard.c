// wcRefine_dismissSearchKeyboard @ 01d76d20

/* Function Stack Size: 0x10 bytes */

void WCRefineSearchSettingsViewController::wcRefine_dismissSearchKeyboard(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined4 local_9c;
  undefined4 local_64;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_searchTextField_0269e9f8);
  _objc_retainAutoreleasedReturnValue();
  local_64 = 0;
  if (IVar1 != 0) {
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_searchTextField_0269e9f8);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_64 = (uint)IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if ((local_64 & 1) != 0) {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_searchTextField_0269e9f8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_searchTextView_026c4a98);
  _objc_retainAutoreleasedReturnValue();
  local_9c = 0;
  if (IVar1 != 0) {
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_searchTextView_026c4a98);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_9c = (uint)IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if ((local_9c & 1) != 0) {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_searchTextView_026c4a98);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  return;
}

