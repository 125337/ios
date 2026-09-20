// categoryTapped: @ 01a8fa20

/* Function Stack Size: 0x18 bytes */

void WCRefineGradientPalettePickerViewController::categoryTapped_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  long lVar3;
  undefined *local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar2 = PTR_WCRefineGradientPalette_026ce910;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineGradientPalette_026ce910,PTR_s_categoryNames_026bd948);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = local_28;
  local_30 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  if (-1 < lVar3) {
    lVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
    puVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
    if (lVar3 < (long)puVar2) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
      IVar1 = local_18;
      puVar2 = local_30;
      lVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_objectAtIndexedSubscript__0269cc78,lVar3);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_reloadCategory__026bd860);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_refreshCategoryChips_026bd878);
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

