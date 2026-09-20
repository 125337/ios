// FUN_0039438c @ 0039438c

void FUN_0039438c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_b8;
  ulong local_78;
  ulong local_70;
  byte local_61;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  local_40 = 0;
  local_38 = param_1;
  _objc_storeStrong(&local_40,param_4);
  _CACurrentMediaTime();
  uVar2 = local_28;
  local_48 = param_1;
  FUN_00392c04(local_28,local_30);
  uVar3 = local_28;
  local_50 = uVar2;
  _WCRGroupingState();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_58 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  local_b8 = local_28;
  _WCRGroupingState();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_60 = uVar2;
  (*(code *)PTR__objc_release_02578630)();
  local_61 = false;
  if (local_58 != 0) {
    local_b8 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_budgetFallback_026a25d8);
    local_61 = false;
    if ((local_b8 & 1) == 0) {
      local_b8 = local_58;
      FUN_00357d1c();
      local_61 = false;
      if (((local_b8 & 1) != 0) && (local_61 = false, local_60 != 0)) {
        local_b8 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_integerValue_026ca750);
        local_61 = local_b8 == local_50;
      }
    }
  }
  bVar1 = (bool)local_61 == false;
  if (bVar1) {
    FUN_00392a24();
    _objc_retainAutoreleasedReturnValue();
    local_78 = local_b8;
  }
  else {
    local_b8 = local_58;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = local_b8;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_70,PTR_s_setBudgetFallback__026a30e0,(local_61 ^ 1) & 1);
  uVar2 = local_28;
  _WCRGroupingState();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if ((local_61 & 1) == 0) {
    uVar2 = local_28;
    _WCRGroupingState();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_28;
    _WCRGroupingState();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_50);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_28;
  _WCRGroupingState();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  uVar2 = local_70;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(uVar2);
  return;
}

