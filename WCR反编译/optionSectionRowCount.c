// optionSectionRowCount @ 01aab4ac

/* Function Stack Size: 0x10 bytes */

long_long WCRGroupCreateViewController::optionSectionRowCount(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_optionTitles_026bdc78);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_managementOptionTitles_026bdc80);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  return IVar2 + IVar3;
}

