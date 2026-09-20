// wcrEditPrefix @ 017d1b28

/* Function Stack Size: 0x10 bytes */

void WCRefineAISessionSettingsViewController::wcrEditPrefix(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  ID IVar3;
  
  uVar1 = _WCRAISessionPrefix;
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrOptions_026b5098);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_wcrShowInput_title_value_max__026b5160,uVar1,&cf_n_VYMR,IVar3,100);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  return;
}

