// FUN_0040b7bc @ 0040b7bc

byte FUN_0040b7bc(double param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  double dVar5;
  long local_58;
  double local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  undefined8 local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = local_20;
  FUN_00410cf8(local_20,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_11 = 0;
    local_40 = 1;
  }
  else {
    FUN_00410fb8();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
    local_48 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    lVar2 = local_48;
    local_50 = param_1;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(lVar2);
    FUN_0041102c(local_50,0x4020000000000000,local_48);
    lVar4 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_objectForKeyedSubscript__0269d098,local_30)
    ;
    _objc_retainAutoreleasedReturnValue();
    dVar1 = local_50;
    local_11 = false;
    local_58 = lVar4;
    if (lVar4 != 0) {
      dVar5 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_doubleValue_026ca608);
      local_11 = dVar1 - dVar5 < 8.0;
    }
    local_40 = 1;
    _objc_storeStrong(&local_58);
    _objc_sync_exit(lVar2);
    (*(code *)PTR__objc_release_02578630)(lVar2);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

