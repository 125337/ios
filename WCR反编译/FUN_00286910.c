// FUN_00286910 @ 00286910

void FUN_00286910(undefined8 param_1)

{
  long lVar1;
  long local_30 [3];
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  FUN_002762e0(0x40ac200000000000);
  lVar1 = local_18;
  FUN_00276030();
  _objc_retainAutoreleasedReturnValue();
  local_30[0] = lVar1;
  if (lVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRQ_eSN_);
  }
  else {
    FUN_00276920();
    FUN_0027bee4(local_30[0],1,&PTR___NSConcreteGlobalBlock_0257b4d8);
  }
  _objc_storeStrong(local_30);
  _objc_storeStrong(&local_18,0);
  return;
}

