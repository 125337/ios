// screenshotWatermark2NightScale @ 02103690

/* Function Stack Size: 0x10 bytes */

double __thiscall
WCRefineConfig::screenshotWatermark2NightScale(WCRefineConfig *this,ID param_1,SEL param_2)

{
  SEL SVar1;
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
  SVar1 = local_28;
  local_30 = param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_38 = param_1;
  (*(code *)PTR__objc_release_02578630)(SVar1);
  if (local_38 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_screenshotWatermark2Scale_026a7928);
    local_18 = in_d0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_floatValue_026a5b48);
    local_18 = (double)SUB84(in_d0,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_18;
}

