// wcrShowsFollowGlobal @ 017c5bd4

/* Function Stack Size: 0x10 bytes */

bool WCRefineAIPersonaLibraryViewController::wcrShowsFollowGlobal(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  undefined1 local_38;
  undefined8 local_30;
  
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectionField_026b4df0);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_38 = 1;
  bVar1 = (IVar3 & 1) == 0;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectionField_026b4df0);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_38 = (byte)IVar3;
    local_30 = param_1;
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  return (uint)(local_38 & 1);
}

