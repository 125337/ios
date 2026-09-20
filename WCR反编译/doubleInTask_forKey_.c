// doubleInTask:forKey: @ 014b5f54

/* Function Stack Size: 0x20 bytes */

double __thiscall
WCRefineScheduledTask::doubleInTask_forKey_
          (WCRefineScheduledTask *this,ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ulong uVar1;
  double in_d0;
  double local_48;
  ulong local_38;
  undefined8 local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKeyedSubscript__0269d098,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_doubleValue_026ca608);
  if ((uVar1 & 1) == 0) {
    local_48 = 0.0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_doubleValue_026ca608);
    local_48 = in_d0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return local_48;
}

