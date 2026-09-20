// wcrToggleMode @ 017c4b6c

/* Function Stack Size: 0x10 bytes */

void WCRefineAIPersonaLibraryViewController::wcrToggleMode(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_mode_026ab488);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setMode__026ac3b0,IVar1 != 1);
  puVar2 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_mode_026ab488);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_setInteger_forKey__026a9610,IVar1,&cf_WCRAIPersonaLibraryModeV1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrApplyMode_026b4e10);
  return;
}

