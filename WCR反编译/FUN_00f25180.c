// FUN_00f25180 @ 00f25180

byte FUN_00f25180(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  long local_b0;
  undefined8 local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  dVar3 = 0.0;
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_m_uiCreateTime);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (0.0 < dVar3) {
    local_b0 = param_2;
    if (param_2 < 2) {
      local_b0 = 1;
    }
    puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
    dVar4 = dVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_11 = dVar4 - dVar3 <= (double)local_b0 * 60.0;
  }
  else {
    local_11 = false;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

