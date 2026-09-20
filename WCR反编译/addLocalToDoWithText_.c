// addLocalToDoWithText: @ 01e86a00

/* Function Stack Size: 0x18 bytes */

void WCRefineToDoCardView::addLocalToDoWithText_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineToDoStore_026cf6a0,PTR_s_addLocalEntryWithText_dueDate_st_026c7248,local_28
             ,0,0,0,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadContent_026be3a8);
  _objc_storeStrong(&local_28,0);
  return;
}

