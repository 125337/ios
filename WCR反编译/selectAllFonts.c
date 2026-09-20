// selectAllFonts @ 019d01d0

/* Function Stack Size: 0x10 bytes */

void WCRefineFontListViewController::selectAllFonts(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectableFilteredPaths_026bae08);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_count_0269cfe0);
  if (param_1 != 0) {
    IVar1 = *(ID *)(local_18 + (long)_selectedPaths);
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_count_0269cfe0);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
    if (IVar1 != IVar2) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(local_18 + (long)_selectedPaths),PTR_s_removeAllObjects_0269d508);
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(local_18 + (long)_selectedPaths),
                 PTR_s_addObjectsFromArray__0269d540,local_28);
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(local_18 + (long)_tableView),PTR_s_reloadData_0269e400);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_updateNavigationItems_026badf0);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

