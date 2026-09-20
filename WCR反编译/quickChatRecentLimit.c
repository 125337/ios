// quickChatRecentLimit @ 0214d914

/* Function Stack Size: 0x10 bytes */

long_long WCRefineConfig::quickChatRecentLimit(ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_50;
  ID local_40;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (local_30 == 0) {
    local_18 = 0;
  }
  else {
    IVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_integerValue_026ca750);
    if ((IVar1 & 1) == 0) {
      local_50 = 0;
    }
    else {
      local_50 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_integerValue_026ca750);
    }
    local_40 = local_50;
    if ((long)local_50 < 0) {
      local_40 = 0;
    }
    if (200 < (long)local_40) {
      local_40 = 200;
    }
    local_18 = local_40;
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}

