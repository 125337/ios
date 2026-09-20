// selectPendingNight @ 01a84464

/* Function Stack Size: 0x10 bytes */

void WCRefineGlobalPageBackgroundViewController::selectPendingNight(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_expandedScene_026bd750);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_openLibraryForScene_dark__026bd800,IVar1,1);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  return;
}

