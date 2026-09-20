// editReplaceText @ 01863434

/* Function Stack Size: 0x10 bytes */

void WCRefineBatchRemarkViewController::editReplaceText(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_replaceText_026b6ac8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_showTextEditorWithTitle_defaultT_026b6b28,&cf_fbcTeW_,IVar1,0x50,
             PTR_s_handleReplaceTextInput__026b6b40);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  return;
}

