// pickEditingImageModel @ 017dccb0

/* Function Stack Size: 0x10 bytes */

void WCRefineAISettingsViewController::pickEditingImageModel(ID param_1,SEL param_2)

{
  ID IVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrBindKind__026b5330);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrProviderForKind__026b5230,&cf_image);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_wcrFetchCloudModelsForProvider_k_026b53c8,IVar1,&cf_image);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  return;
}

