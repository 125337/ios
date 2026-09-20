// floatingTabBarSizeIndex @ 021365dc

/* Function Stack Size: 0x10 bytes */

long_long WCRefineConfig::floatingTabBarSizeIndex(ID param_1,SEL param_2)

{
  SEL SVar1;
  ID local_88;
  ID local_80;
  ID local_78;
  ID local_30;
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
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  (*(code *)PTR__objc_release_02578630)(SVar1);
  if (local_30 == 0) {
    local_88 = 2;
  }
  else {
    local_78 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_integerValue_026ca750);
    if ((long)local_78 < 1) {
      local_78 = 0;
    }
    if ((long)local_78 < 3) {
      local_80 = local_78;
    }
    else {
      local_80 = 2;
    }
    local_88 = local_80;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return local_88;
}

