// enterSelectMode @ 019a44c8

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerViewController::enterSelectMode(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 local_30;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setSelectMode__026ba728,1);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedPaths_026ba4d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setupSelectNavBar_026ba2b0);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_hiddenSelectionMode_026ba538);
  local_30 = 1;
  if ((IVar1 & 1) == 0) {
    puVar2 = PTR_WCRFileManagerState_026cf1c8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRFileManagerState_026cf1c8,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_30 = (uint)puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  if ((local_30 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_showSelectBar_026ba738);
  }
  else {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_bottomBar_026a0ef8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_searchBottomButton_026ba3f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_hideSelectBar_026ba730);
  }
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_reloadVisibleViews_026ba408);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_updateTitleCount_026ba450);
  return;
}

