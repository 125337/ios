// momentsDisableFlutterPersonalEnabled @ 021646c0

/* Function Stack Size: 0x10 bytes */

bool WCRefineConfig::momentsDisableFlutterPersonalEnabled(ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_objectForKey__0269e048,&cf_momentsDisableFlutterPersonalEnabled);
  _objc_retainAutoreleasedReturnValue();
  local_38 = param_1;
  if (param_1 == 0) {
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_momentsAntiDeleteMomentsEnabled_026a4918);
    local_11 = (byte)IVar1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_boolValue_026ca540);
    local_11 = (byte)param_1;
  }
  local_11 = local_11 & 1;
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

