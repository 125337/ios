// FUN_0042b154 @ 0042b154

byte FUN_0042b154(double param_1,undefined8 param_2)

{
  double dVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  double dVar5;
  long local_48;
  double local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  lVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_11 = 0;
    local_30 = 1;
  }
  else {
    FUN_0042c9c8();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
    local_38 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    lVar2 = local_38;
    local_40 = param_1;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(lVar2);
    FUN_0041102c(local_40,0x405e000000000000,local_38);
    lVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,local_20)
    ;
    _objc_retainAutoreleasedReturnValue();
    dVar1 = local_40;
    local_48 = lVar4;
    if ((lVar4 == 0) ||
       (dVar5 = local_40, (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_doubleValue_026ca608),
       120.0 <= dVar1 - dVar5)) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,local_20);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_11 = 1;
    }
    else {
      local_11 = 0;
    }
    local_30 = 1;
    _objc_storeStrong(&local_48);
    _objc_sync_exit(lVar2);
    (*(code *)PTR__objc_release_02578630)(lVar2);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

