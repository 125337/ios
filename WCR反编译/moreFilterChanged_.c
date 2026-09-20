// moreFilterChanged: @ 0090f2c8

/* Function Stack Size: 0x18 bytes */

void LogViewerViewController::moreFilterChanged_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedSegmentIndex_0269e998);
  if (lVar1 != -1) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_filterSegment_026aa148);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (IVar2 != 0) {
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_filterSegment_026aa148);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedSegmentIndex_0269e998);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentFilter__026aa198,lVar1 + 5);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_updateLogs_026aa030);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

