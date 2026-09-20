// atMentionNotificationType @ 01fea66c

/* Function Stack Size: 0x10 bytes */

long_long WCRefineConfig::atMentionNotificationType(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  FUN_01fd9510();
  _objc_retainAutoreleasedReturnValue();
  local_28 = IVar2;
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_integerValue_026ca750);
  bVar1 = false;
  if ((IVar2 & 1) != 0) {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_integerValue_026ca750);
    bVar1 = IVar2 == 1;
  }
  _objc_storeStrong(&local_28,0);
  return (long)(int)(uint)bVar1;
}

