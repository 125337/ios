// wcr_rankItems:visit:limit: @ 01dac4bc

/* Function Stack Size: 0x24 bytes */

ID WCRefineSessionStatsBoardView::wcr_rankItems_visit_limit_
             (ID param_1,SEL param_2,ID param_3,bool param_4,unsigned_long_long param_5)

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
            (local_18,PTR_s_wcr_rankItems_visit_selfSent_wra_026c5038,local_28,param_4 & 1,0,0,
             param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar1;
}

