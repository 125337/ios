// applyEditorWrapMode @ 019666a8

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerPreviewViewController::applyEditorWrapMode(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  ID IVar3;
  undefined8 local_38;
  undefined8 uStack_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_editor_026b9fa0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (param_1 != 0) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_editor_026b9fa0);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_28 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wrapLines_026b9ed8);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setWidthTracksTextView__026ba040,IVar2);
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wrapLines_026b9ed8);
    uVar1 = 0;
    if ((IVar2 & 1) == 0) {
      uVar1 = 2;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setLineBreakMode__026ca988,uVar1);
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wrapLines_026b9ed8);
    if ((IVar2 & 1) == 0) {
      uStack_30 = 0x7fefffffffffffff;
      local_38 = 0x7fefffffffffffff;
      FUN_0195e30c();
    }
    else {
      local_38 = 0;
      uStack_30 = 0x7fefffffffffffff;
      FUN_0195e30c();
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_38,uStack_30,local_28,PTR_s_setSize__026ba048);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wrapLines_026b9ed8);
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_editor_026b9fa0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wrapLines_026b9ed8);
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_editor_026b9fa0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_editor_026b9fa0);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

