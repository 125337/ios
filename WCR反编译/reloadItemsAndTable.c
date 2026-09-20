// reloadItemsAndTable @ 01d1dc94

/* Function Stack Size: 0x10 bytes */

void WCRefineQuickReplyPanel::reloadItemsAndTable(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  
  puVar2 = PTR_WCRefineQuickReplyStore_026cec50;
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedFilterType_026ae518);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_panelItemsFilteredBy__026c4118);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setItems__026a17a8);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_reloadTableData_0269dca8);
  return;
}

