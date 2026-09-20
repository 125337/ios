// useAsGlobalNight @ 01c75db8

/* Function Stack Size: 0x10 bytes */

void WCRefinePageBackgroundLibraryViewController::useAsGlobalNight(ID param_1,SEL param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_WCRGlobalPageBackgroundStore_026ce9b0;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedFile_026c26d8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_setMediaFileName_forScene_dark__026c2698,param_1,
             _WCRPageBackgroundSceneGlobal,1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf___NhQ__Yof);
  return;
}

