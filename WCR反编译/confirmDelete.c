// confirmDelete @ 01eadc9c

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoItemEditViewController::confirmDelete(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  
  puVar1 = PTR_WCRefineToDoStore_026cf6a0;
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_entry_026c7530);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_deleteEntry__026c76c0);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_onSaved_026c76b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar2 != 0) {
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_onSaved_026c76b0);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(IVar2 + 0x10))();
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_popSelf_026c76b8);
  return;
}

