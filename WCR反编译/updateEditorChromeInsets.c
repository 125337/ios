// updateEditorChromeInsets @ 01965928

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerPreviewViewController::updateEditorChromeInsets(ID param_1,SEL param_2)

{
  ID IVar1;
  int iVar2;
  double in_d0;
  double in_d2;
  double local_80;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_actionBarBottomConstraint_026b9d88);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_keyboardOverlap_026ba020);
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    if (in_d0 <= 0.5) {
      local_80 = -10.0;
    }
    else {
      local_80 = -((in_d0 - in_d2) + 8.0);
    }
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_actionBarBottomConstraint_026b9d88);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_80);
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_editorCardBottomConstraint_026b9f88);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 != 0) {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_searchPanelVisible_026b9dd8);
    iVar2 = -0x74;
    if ((IVar1 & 1) == 0) {
      iVar2 = -8;
    }
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_editorCardBottomConstraint_026b9f88);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)((double)iVar2);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_actionBar_026b9dc0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_actionBar_026b9dc0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_searchPanelHeightConstraint_026b9df0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 != 0) {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_searchPanelVisible_026b9dd8);
    iVar2 = 0x76;
    if ((IVar1 & 1) == 0) {
      iVar2 = 0;
    }
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_searchPanelHeightConstraint_026b9df0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)((double)iVar2);
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  return;
}

