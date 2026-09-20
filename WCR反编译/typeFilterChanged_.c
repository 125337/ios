// typeFilterChanged: @ 019ae450

/* Function Stack Size: 0x18 bytes */

void WCRFilePathListViewController::typeFilterChanged_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedSegmentIndex_0269e998);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setTypeFilter__026ba7f0,uVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_rebuild_026ba7e8);
  _objc_storeStrong(&local_28,0);
  return;
}

