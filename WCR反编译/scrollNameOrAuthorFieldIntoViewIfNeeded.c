// scrollNameOrAuthorFieldIntoViewIfNeeded @ 01d5ca18

/* Function Stack Size: 0x10 bytes */

void WCRefineScreenshotFrameEditorViewController::scrollNameOrAuthorFieldIntoViewIfNeeded
               (ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_nameField_026bdbf0);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if ((IVar1 & 1) == 0) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_authorField_026c47f0);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    if ((IVar2 & 1) != 0) {
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_authorField_026c47f0);
      _objc_retainAutoreleasedReturnValue();
      IVar1 = local_28;
      local_28 = IVar2;
      (*(code *)PTR__objc_release_02578630)(IVar1);
    }
  }
  else {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_nameField_026bdbf0);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_28;
    local_28 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  IVar1 = local_28;
  if (local_28 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_mainScrollView_026c4668);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_convertRect_toView__0269ded8);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _CGRectInset();
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_mainScrollView_026c4668);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(in_d0,in_d1,in_d2,in_d3);
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

