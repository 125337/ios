// editorHasUnsavedChanges @ 019669d8

/* Function Stack Size: 0x10 bytes */

bool WCRefineFileManagerPreviewViewController::editorHasUnsavedChanges(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_60;
  byte local_11;
  
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_editor_026b9fa0);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = true;
  if (IVar2 != 0) {
    IVar3 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_editorBaselineContent_026ba058);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = IVar3 == 0;
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (bVar1) {
    local_11 = 0;
  }
  else {
    pcVar4 = (cfstringStruct *)param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_editor_026b9fa0);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_60 = pcVar5;
    if (pcVar5 == (cfstringStruct *)0x0) {
      local_60 = &::cf___;
    }
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_editorBaselineContent_026ba058);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_isEqualToString__0269ccc8);
    local_11 = ((byte)local_60 ^ 1) & 1;
    (*(code *)PTR__objc_release_02578630)(param_1);
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
  }
  return (uint)local_11;
}

