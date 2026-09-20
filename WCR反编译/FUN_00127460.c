// FUN_00127460 @ 00127460

byte FUN_00127460(double param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  double dVar5;
  long local_48;
  undefined *local_40;
  undefined4 local_38;
  long local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (((lVar2 == 0) ||
      (lVar2 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
      lVar2 == 0)) || (DAT_028c8560 == 0)) {
    local_11 = 0;
    local_38 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = DAT_028c8560;
    local_48 = 0;
    local_40 = puVar3;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(lVar2);
    lVar4 = DAT_028c8560;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028c8560,PTR_s_objectForKeyedSubscript__0269d098,local_40);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_48;
    local_48 = lVar4;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    _objc_sync_exit(lVar2);
    (*(code *)PTR__objc_release_02578630)(lVar2);
    if (local_48 == 0) {
      local_11 = 0;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      dVar5 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_doubleValue_026ca608);
      local_11 = param_1 - dVar5 < 5.0;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    local_38 = 1;
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

