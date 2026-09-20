// sessionStatsSessionScanCap @ 02132f94

/* Function Stack Size: 0x10 bytes */

long_long WCRefineConfig::sessionStatsSessionScanCap(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID local_30;
  SEL local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_28 = param_2;
  local_20 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_objectForKey__0269e048,&cf_sessionStatsSessionScanCap);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (param_1 == 0) {
    local_18 = &DAT_00003a98;
  }
  else {
    puVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    IVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKey__0269e048,&cf_sessionStatsSessionScanCap);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_clampedSessionStatsSessionScanCa_026ca400,IVar3);
    local_18 = puVar1;
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  _objc_storeStrong(&local_30,0);
  return (long_long)local_18;
}

