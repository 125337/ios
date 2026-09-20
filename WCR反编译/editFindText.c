// editFindText @ 018633a8

/* Function Stack Size: 0x10 bytes */

void WCRefineBatchRemarkViewController::editFindText(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_findText_026b6ab8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_showTextEditorWithTitle_defaultT_026b6b28,&::cf___,IVar1,0x50,
             PTR_s_handleFindTextInput__026b6b38);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  return;
}

