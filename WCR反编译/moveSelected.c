// moveSelected @ 01b6d9ec

/* Function Stack Size: 0x10 bytes */

void WCRefineLocalEmoticonLibraryViewController::moveSelected(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + (long)_selectedExportRels);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_allObjects_0269d228);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_promptMoveRels__026bfa38);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

