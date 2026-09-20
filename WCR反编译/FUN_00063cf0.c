// FUN_00063cf0 @ 00063cf0

byte FUN_00063cf0(double param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  double dVar4;
  long local_28;
  long local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  FUN_00064d60();
  if (lVar1 == 0) {
    local_11 = true;
  }
  else {
    lVar2 = local_20;
    FUN_0006516c(local_20,&cf_m_uiCreateTime);
    if (lVar2 == 0) {
      local_11 = false;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      dVar4 = (double)NEON_ucvtf(lVar2);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_11 = param_1 - dVar4 <= (double)lVar1 * 60.0;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

