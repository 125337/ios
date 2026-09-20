// editImageModel @ 017e3b7c

/* Function Stack Size: 0x10 bytes */

void WCRefineAISettingsViewController::editImageModel(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_editingProvider_026b5450);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_showInputForField_title_value_ma_026b54e0,&cf_imageModel,&cf_VGr_jW,IVar2
             ,200,0);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  return;
}

