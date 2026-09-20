// clipboardHistoryCustomViewMode @ 0214635c

/* Function Stack Size: 0x10 bytes */

long_long WCRefineConfig::clipboardHistoryCustomViewMode(ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_30;
  SEL local_28;
  ID local_20;
  long_long local_18;
  
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
  IVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_integerValue_026ca750);
  if ((IVar1 & 1) == 0) {
    local_18 = 0;
  }
  else {
    IVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_integerValue_026ca750);
    local_18 = (long_long)(int)(uint)(IVar1 == 1);
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}

