// floatingTabBarSwitchAnimationIndex @ 0213d1a8

/* Function Stack Size: 0x10 bytes */

long_long WCRefineConfig::floatingTabBarSwitchAnimationIndex(ID param_1,SEL param_2)

{
  SEL SVar1;
  ID local_60;
  ID local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
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
    local_60 = 0;
  }
  else {
    local_60 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_integerValue_026ca750);
  }
  if ((long)local_60 < 0) {
    local_18 = 0;
  }
  else if ((long)local_60 < 4) {
    local_18 = local_60;
  }
  else {
    local_18 = 3;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_18;
}

