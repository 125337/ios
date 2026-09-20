// _WCRefineVoiceRippleSetPressToTalkActive @ 008c5834

void _WCRefineVoiceRippleSetPressToTalkActive(undefined8 param_1,byte param_2)

{
  undefined8 local_28;
  byte local_19;
  undefined8 local_18;
  
  local_19 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = param_1;
  FUN_008c58c4(1,local_19 & 1,param_1);
  _objc_storeStrong(&local_28,0);
  return;
}

