// editSuffix @ 0186331c

/* Function Stack Size: 0x10 bytes */

void WCRefineBatchRemarkViewController::editSuffix(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_suffixText_026b6aa8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_showTextEditorWithTitle_defaultT_026b6b28,&cf_TyRT,IVar1,0x50,
             PTR_s_handleSuffixInput__026b6b30);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  return;
}

