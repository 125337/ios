// reloadCategory: @ 01a8cbd4

/* Function Stack Size: 0x18 bytes */

void WCRefineGradientPalettePickerViewController::reloadCategory_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_30 = &cf_hQ;
  }
  else {
    local_30 = local_28;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentCategory__026bd958,local_30);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentCategory_026bd858);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setIncludeCustomCard__026bd960,IVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar4 = PTR_WCRefineGradientPalette_026ce910;
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentCategory_026bd858);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_itemsInCategory__026bd968);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setVisibleItems__026bd970);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_collectionView_026a0fd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_storeStrong(&local_28,0);
  return;
}

