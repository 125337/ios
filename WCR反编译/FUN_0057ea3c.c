// FUN_0057ea3c @ 0057ea3c

void FUN_0057ea3c(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *local_b0;
  undefined *local_70;
  byte local_61;
  undefined *local_60;
  byte local_51;
  undefined *local_50;
  undefined *local_48;
  double local_40;
  undefined4 local_38;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar2 = local_28;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_38 = 1;
  }
  else {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_fireAt);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_51 = 0;
    local_61 = 0;
    local_b0 = PTR__OBJC_CLASS___NSDate_026cdf88;
    local_40 = param_1;
    if (param_1 <= 0.0) {
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      local_61 = 1;
      local_60 = local_b0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR__OBJC_CLASS___NSDate_026cdf88,
                 PTR_s_dateWithTimeIntervalSince1970__0269d1d0);
      _objc_retainAutoreleasedReturnValue();
      local_51 = 1;
      local_50 = local_b0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_b0;
    if ((local_61 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    puVar1 = PTR__OBJC_CLASS___NSCalendar_026ce070;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCalendar_026ce070,PTR_s_currentCalendar_0269cfa0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_70 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    puVar3 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_hour_026a44c8);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_numberWithInteger__0269e080,puVar3);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_hour);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    puVar3 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_minute_026a44d0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_numberWithInteger__0269e080,puVar3);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_minute);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_48,0);
    local_38 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

