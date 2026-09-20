// homeAvatarStripSortMode @ 02156148

/* Function Stack Size: 0x10 bytes */

long_long WCRefineConfig::homeAvatarStripSortMode(ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_40;
  ID local_30;
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
    local_40 = 2;
  }
  else {
    local_40 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_integerValue_026ca750);
  }
  local_30 = local_40;
  if (((long)local_40 < 0) || (2 < (long)local_40)) {
    local_30 = 2;
  }
  _objc_storeStrong(&local_28,0);
  return local_30;
}

