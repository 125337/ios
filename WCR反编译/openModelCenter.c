// openModelCenter @ 017bc2ac

/* Function Stack Size: 0x10 bytes */

void WCRefineAIFeatureViewController::openModelCenter(ID param_1,SEL param_2)

{
  undefined *puVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_WCRefineAISettingsViewController_026ceff0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineAISettingsViewController_026ceff0,PTR_s_new_0269d288);
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_PushViewController_animated__0269cd40,puVar1,1);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  return;
}

