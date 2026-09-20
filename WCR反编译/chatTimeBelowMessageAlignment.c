// chatTimeBelowMessageAlignment @ 02078d88

/* Function Stack Size: 0x10 bytes */

long_long WCRefineConfig::chatTimeBelowMessageAlignment(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 local_50;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_50 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_release_02578630)(param_2);
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (((long)local_50 < 0) || (4 < (long)local_50)) {
    local_50 = 0;
  }
  return local_50;
}

