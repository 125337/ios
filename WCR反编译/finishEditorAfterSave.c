// finishEditorAfterSave @ 01aa5840

/* Function Stack Size: 0x10 bytes */

void WCRGroupCreateViewController::finishEditorAfterSave(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_completion_0269fb98);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 != 0) {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_completion_0269fb98);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(IVar1 + 0x10))();
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_closePage_026bdb60);
  return;
}

