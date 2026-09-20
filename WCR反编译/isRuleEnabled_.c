// isRuleEnabled: @ 010acb44

/* Function Stack Size: 0x18 bytes */

bool WCRefineMessageSyncRule::isRuleEnabled_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  int local_34;
  ulong local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_boolValue_026ca540);
  if ((uVar1 & 1) == 0) {
    local_34 = 1;
  }
  else {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_boolValue_026ca540);
    local_34 = (int)uVar1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return (uint)(local_34 != 0);
}

