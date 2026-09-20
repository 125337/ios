// setSessionStatsPrivateTimeRange: @ 0212c954

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setSessionStatsPrivateTimeRange_(ID param_1,SEL param_2,long_long param_3)

{
  ID IVar1;
  undefined *puVar2;
  ID local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  IVar1 = local_18;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithInteger__0269e080,IVar1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_setObject_forKey__026ca9e8,puVar2,&cf_sessionStatsPrivateTimeRange);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_30,0);
  return;
}

