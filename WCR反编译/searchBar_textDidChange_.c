// searchBar:textDidChange: @ 01fa6f28

/* Function Stack Size: 0x20 bytes */

void WCRefineWatermarkLibraryViewController::searchBar_textDidChange_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_applySearchFilter_026b6408);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_18 + (long)_collectionView),PTR_s_reloadData_0269e400);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_updateTitle_026b63c8);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

