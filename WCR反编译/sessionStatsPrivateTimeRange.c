// sessionStatsPrivateTimeRange @ 0212c7f8

/* Function Stack Size: 0x10 bytes */

long_long WCRefineConfig::sessionStatsPrivateTimeRange(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_objectForKey__0269e048,&cf_sessionStatsPrivateTimeRange);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (param_1 == 0) {
    local_18 = 4;
  }
  else {
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    IVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKey__0269e048,&cf_sessionStatsPrivateTimeRange);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_clampedSessionStatsTimeRange__026af710,IVar3);
    local_18 = IVar1;
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}

