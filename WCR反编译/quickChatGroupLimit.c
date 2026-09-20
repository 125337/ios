// quickChatGroupLimit @ 0214be90

/* Function Stack Size: 0x10 bytes */

long_long WCRefineConfig::quickChatGroupLimit(ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_78;
  ID local_70;
  ID local_68;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = IVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_integerValue_026ca750);
  if ((IVar1 & 1) == 0) {
    local_78 = 3;
  }
  else {
    local_68 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_integerValue_026ca750);
    if (200 < (long)local_68) {
      local_68 = 200;
    }
    if ((long)local_68 < 2) {
      local_70 = 1;
    }
    else {
      local_70 = local_68;
    }
    local_78 = local_70;
  }
  _objc_storeStrong(&local_28,0);
  return local_78;
}

