// FUN_01806734 @ 01806734

double FUN_01806734(double param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long local_28;
  long local_20;
  double local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  lVar1 = local_20;
  FUN_01804f2c();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__)
  ;
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_28;
  local_28 = lVar1;
  (*(code *)PTR__objc_release_02578630)(lVar2);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,&cf___);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_28;
  local_28 = lVar1;
  (*(code *)PTR__objc_release_02578630)(lVar2);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf_CQ,&cf___);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_28;
  local_28 = lVar1;
  (*(code *)PTR__objc_release_02578630)(lVar2);
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_18 = 0.0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_doubleValue_026ca608);
    local_18 = (double)(long)(param_1 * 100.0) / 100.0;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

