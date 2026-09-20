// exitMultiSelect @ 01e07ecc

/* Function Stack Size: 0x10 bytes */

void WCRefineSuperFloatBallWarehouseViewController::exitMultiSelect(ID param_1,SEL param_2)

{
  ID IVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setMultiSelectMode__026be910,0);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedExportPaths_026c5c58);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setupNavigationBar_026aa100);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_updateTitle_026b63c8);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_collectionView_026a0fd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  return;
}

