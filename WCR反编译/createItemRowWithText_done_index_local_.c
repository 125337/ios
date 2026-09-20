// createItemRowWithText:done:index:local: @ 01e827b4

/* Function Stack Size: 0x28 bytes */

ID WCRefineToDoCardView::createItemRowWithText_done_index_local_
             (ID param_1,SEL param_2,ID param_3,bool param_4,unsigned_long_long param_5,bool param_6
             )

{
  ID IVar1;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_createItemRowWithText_done_index_026c7140,local_28,param_4 & 1,param_5,
             param_6 & 1,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar1;
}

