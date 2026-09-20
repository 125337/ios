// _WCRMomentsScheduledRescheduleTask @ 00585884

byte _WCRMomentsScheduledRescheduleTask(double param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long local_48;
  undefined4 local_40;
  long local_30;
  long local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_20;
  FUN_005854b8();
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar1;
  if ((lVar1 == 0) || (local_28 == 0)) {
    local_11 = 0;
    local_40 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_timeIntervalSinceNow_0269cd28);
    if (30.0 <= param_1) {
      lVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_mutableCopy_0269d8a0);
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_48 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_timeIntervalSince1970_0269cfc8);
      (*(code *)PTR__objc_msgSend_02578628)(param_1,puVar2,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_fireAt);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_enabled);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,DAT_0257dec8,&cf_state);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_removeObjectForKey__0269d700,&cf_triggeredAt);
      FUN_0057dfd8(local_48);
      local_11 = 1;
      local_40 = 1;
      _objc_storeStrong(&local_48,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_Se_ZfNS_MR);
      local_11 = 0;
      local_40 = 1;
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

