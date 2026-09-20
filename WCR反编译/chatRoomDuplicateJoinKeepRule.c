// chatRoomDuplicateJoinKeepRule @ 0208d41c

/* Function Stack Size: 0x10 bytes */

long_long WCRefineConfig::chatRoomDuplicateJoinKeepRule(ID param_1,SEL param_2)

{
  SEL SVar1;
  ID IVar2;
  ID local_48;
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
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_28 = IVar2;
  (*(code *)PTR__objc_release_02578630)(SVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_integerValue_026ca750);
  if ((IVar2 & 1) == 0) {
    local_48 = 0;
  }
  else {
    local_48 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_integerValue_026ca750);
  }
  local_30 = local_48;
  if (((long)local_48 < 0) || (2 < (long)local_48)) {
    local_30 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return local_30;
}

