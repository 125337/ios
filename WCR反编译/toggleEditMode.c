// toggleEditMode @ 01abd214

/* Function Stack Size: 0x10 bytes */

void WCRGroupListViewController::toggleEditMode(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_editingAllGroups_026bdd80);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setEditingAllGroups__026bded0,(uint)IVar1 ^ 1)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_editingAllGroups_026bdd80);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_editBarButtonItem_026bdd88);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_editBarButtonItem_026bdd88);
  _objc_retainAutoreleasedReturnValue();
  FUN_01ab28fc();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_refreshNavigationRightItems_026bdd70);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_reloadRows_026bdd78);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_tableView_0269e378);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_editingAllGroups_026bdd80);
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setEditing_animated__026a2e78,param_1,1);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  return;
}

