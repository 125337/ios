// autoParseLinkTikTokEnabled @ 02152e68

/* Function Stack Size: 0x10 bytes */

bool WCRefineConfig::autoParseLinkTikTokEnabled(ID param_1,SEL param_2)

{
  ID IVar1;
  int local_34;
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
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_boolValue_026ca540);
  if ((IVar1 & 1) == 0) {
    local_34 = 1;
  }
  else {
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_boolValue_026ca540);
    local_34 = (int)IVar1;
  }
  _objc_storeStrong(&local_28,0);
  return (uint)(local_34 != 0);
}

