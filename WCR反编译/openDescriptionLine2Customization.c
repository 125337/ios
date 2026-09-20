// openDescriptionLine2Customization @ 01cac494

/* Function Stack Size: 0x10 bytes */

void WCRefinePluginTopViewController::openDescriptionLine2Customization(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  ID local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_triggerHapticFeedback_0269dc78);
  (*(code *)PTR__objc_retain_02578638)();
  IVar1 = local_18;
  local_28 = &cf__N_O_ucN_v;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_SeW__);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_descriptionLine2Replacement_026c2f60);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_showInputAlertWithTitle_placehol_026b9588,&cf_f__NLfbc_N,puVar3,IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

