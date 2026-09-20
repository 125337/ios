// FUN_0011ab98 @ 0011ab98

void FUN_0011ab98(double param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  double local_58;
  long local_48 [3];
  byte local_29;
  undefined *local_28;
  undefined *local_20;
  double local_18;
  
  puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
  local_29 = 0;
  local_58 = param_1;
  local_18 = param_1;
  if (param_1 <= 0.0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    local_29 = 1;
    local_28 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_58 = param_1;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,puVar2,PTR_s_dateWithTimeIntervalSince1970__0269d1d0);
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar2;
  if ((local_29 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  lVar3 = DAT_028c84d8;
  FUN_0010ee50();
  _objc_retainAutoreleasedReturnValue();
  local_48[0] = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
  if (lVar3 == 0) {
    _objc_storeStrong(local_48,&cf_yyyy_MM_ddHH_mm_ss);
  }
  lVar3 = local_48[0];
  _WCRefineFormatDateWithChatTimeRules(local_48[0],local_20);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(lVar3);
  return;
}

