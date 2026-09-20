// updateInlineHTMLSearchCountLabel @ 01efe404

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoListWebSettingsViewController::updateInlineHTMLSearchCountLabel
               (ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *local_30;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_htmlSearchMatchRanges_026c8130);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (IVar2 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_htmlSearchMatchIndex_026c8148);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf__ld__lu);
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar3;
  }
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_htmlSearchCountLabel_026c8068);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (IVar2 != 0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  return;
}

