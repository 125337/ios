// presentBetaVersionAccessDeniedAlertIfNeeded @ 00fc1ca4

/* Function Stack Size: 0x10 bytes */

void WCRefineHelper::presentBetaVersionAccessDeniedAlertIfNeeded(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_getCurrentUserWxid_0269e148);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = IVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (((IVar2 != 0) && (FUN_0097baf0(), (IVar2 & 1) != 0)) && ((DAT_028e2fc9 & 1) == 0)) {
    DAT_028e2fc9 = 1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf_WCRefine,&cf_cNKm_N,
               &cf_bwSN,&PTR___NSConcreteGlobalBlock_02583bd0);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_storeStrong(&local_28,0);
  return;
}

