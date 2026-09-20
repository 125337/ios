// editTemplateText @ 018634c0

/* Function Stack Size: 0x10 bytes */

void WCRefineBatchRemarkViewController::editTemplateText(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_templateText_026b6ad8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_showTextEditorWithTitle_defaultT_026b6b28,&cf__IN_j_g,IVar1,0xa0,
             PTR_s_handleTemplateTextInput__026b6b48);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  return;
}

