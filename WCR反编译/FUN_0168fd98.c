// FUN_0168fd98 @ 0168fd98

void FUN_0168fd98(long param_1)

{
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,
             &cf_WCRefine,&cf__Rbc__u_N8__uRqQ_u0,&cf_wSN,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_storeStrong(&local_20,0);
  return;
}

