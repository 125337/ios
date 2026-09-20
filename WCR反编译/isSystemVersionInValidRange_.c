// isSystemVersionInValidRange: @ 01f53124

/* Function Stack Size: 0x18 bytes */

bool __thiscall
WCRefineVersionController::isSystemVersionInValidRange_
          (WCRefineVersionController *this,ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  double in_d0;
  bool local_7c;
  double local_70;
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
            (local_28,PTR_s_componentsSeparatedByString__0269d3c0,&::cf__);
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_objectAtIndexedSubscript__0269cc78,0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_30;
  local_70 = in_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
  if (uVar1 < 2) {
    local_70 = 0.0;
  }
  else {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectAtIndexedSubscript__0269cc78,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_70 = local_70 / 10.0;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  local_7c = 0;
  if (14.0 <= in_d0 + local_70) {
    local_7c = (bool)(in_d0 + local_70 <= 18.4);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return local_7c;
}

