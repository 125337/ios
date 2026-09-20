// wcrIsGroupAnalysisLibrary @ 017c3150

/* Function Stack Size: 0x10 bytes */

bool WCRefineAIPersonaLibraryViewController::wcrIsGroupAnalysisLibrary(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined1 local_38;
  undefined8 local_30;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_libraryKind_026b4de8);
  local_38 = 1;
  if (IVar1 != 1) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectionField_026b4df0);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_38 = (byte)IVar2;
    local_30 = param_1;
  }
  if (IVar1 != 1) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  return (uint)(local_38 & 1);
}

