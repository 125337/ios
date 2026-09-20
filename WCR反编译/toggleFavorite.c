// toggleFavorite @ 01bce684

/* Function Stack Size: 0x10 bytes */

void WCRMomentsCacheDetailViewController::toggleFavorite(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  
  puVar1 = PTR_WCRefineMomentsMonitor_026ce718;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineMomentsMonitor_026ce718,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_item_026a1890);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_toggleFavoriteForDataItem__026c06b0);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_updateFavoriteButton_026c0690);
  return;
}

