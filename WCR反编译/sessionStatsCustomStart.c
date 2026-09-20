// sessionStatsCustomStart @ 0212d070

/* Function Stack Size: 0x10 bytes */

double __thiscall
WCRefineConfig::sessionStatsCustomStart(WCRefineConfig *this,ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  double dVar3;
  double in_d0;
  ID local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  double local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_objectForKey__0269e048,&cf_sessionStatsCustomStart);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((param_1 & 1) == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_doubleValue_026ca608), in_d0 <= 0.0)) {
    dVar3 = -604800.0;
    puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_dateWithTimeIntervalSinceNow__0269cf50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_18 = dVar3;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  else {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_doubleValue_026ca608);
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_clampedSessionStatsCustomDate__026ca3c8);
    local_18 = in_d0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_18;
}

