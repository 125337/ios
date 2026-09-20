// isTaskEnabled: @ 014b5b00

/* Function Stack Size: 0x18 bytes */

bool WCRefineScheduledTask::isTaskEnabled_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  int local_4c;
  ulong local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    local_4c = 0;
  }
  else {
    local_38 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_4c = (int)uVar3;
  }
  local_11 = local_4c != 0;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

