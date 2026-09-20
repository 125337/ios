// abTestNotificationAvatarMode @ 0203126c

/* Function Stack Size: 0x10 bytes */

long_long WCRefineConfig::abTestNotificationAvatarMode(ID param_1,SEL param_2)

{
  SEL SVar1;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar1 = local_20;
  local_28 = param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  FUN_0202f3fc(param_1,SVar1,&cf_abTestNotificationAvatarEnabled,0);
  (*(code *)PTR__objc_release_02578630)(SVar1);
  _objc_storeStrong(&local_28,0);
  return param_1;
}

