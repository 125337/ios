// endEditCleanup @ 0196b3bc

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerPreviewViewController::endEditCleanup(ID param_1,SEL param_2)

{
  ID IVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSObject_026ce188,PTR_s_cancelPreviousPerformRequestsWit_026a4988,
             param_1,PTR_s_recolorEditor_026b9e38);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_editorHighlightGeneration_026b9d48);
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_setEditorHighlightGeneration__026b9d50,IVar1 + 1);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_editor_026b9fa0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_editorCard_026b9fc0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setEditorCard__026b9f18,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setEditor__026b9f50,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setEditorActive__026b9f08,0);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_navigationItem_0269cf08);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_installMenuButton_026b9ce0);
  return;
}

