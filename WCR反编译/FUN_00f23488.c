// FUN_00f23488 @ 00f23488

double FUN_00f23488(double param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  long local_30;
  long local_28;
  long local_20;
  double local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_doNotDisturbScheduleStartMinutes_026abdc0);
  lVar2 = local_20;
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_doNotDisturbScheduleEndMinutes_026abdc8);
  puVar3 = PTR__OBJC_CLASS___NSCalendar_026ce070;
  local_30 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCalendar_026ce070,PTR_s_currentCalendar_0269cfa0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
  local_38 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_38;
  local_40 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_components_fromDate__026a44c0,0x7c,puVar4);
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_hour_026a44c8);
  puVar4 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_minute_026a44d0);
  local_50 = puVar4 + (long)puVar3 * 0x3c;
  puVar3 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_copy_0269d150);
  local_58 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setHour__026a52f0,local_30 / 0x3c);
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setMinute__026a52f8,local_30 % 0x3c);
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setSecond__026a5308,0);
  puVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_dateFromComponents__026a52c8,local_58);
  _objc_retainAutoreleasedReturnValue();
  local_60 = puVar3;
  if (local_28 == local_30) {
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_timeIntervalSince1970_0269cfc8);
    local_18 = param_1 + 86400.0;
  }
  else {
    if (local_28 < local_30) {
      if (local_30 <= (long)local_50) {
        puVar4 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_dateByAddingUnit_value_toDate_op_0269cfc0,0x10,1,puVar3,0);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = local_60;
        local_60 = puVar4;
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
    }
    else if (local_28 <= (long)local_50) {
      puVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_dateByAddingUnit_value_toDate_op_0269cfc0,0x10,1,puVar3,0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_60;
      local_60 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_timeIntervalSince1970_0269cfc8);
    local_18 = param_1;
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

