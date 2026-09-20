// FUN_003736ec @ 003736ec

void FUN_003736ec(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  uint local_38;
  ulong local_30;
  ulong local_28;
  uint local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    uVar2 = local_18;
    _WCRGroupingState();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_28 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_18;
    FUN_00378468();
    bVar1 = false;
    local_38 = 0;
    if (((uVar2 & 1) != 0) && (local_38 = 0, local_28 != 0)) {
      local_30 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_entries_026a25d0);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_38 = 0;
      if (uVar2 != 0) {
        uVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_budgetFallback_026a25d8);
        local_38 = (uint)uVar2 ^ 1;
      }
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_30);
    }
    bVar1 = (local_38 & 1) == 0;
    if (bVar1) {
      uVar2 = local_18;
      _WCRGroupingState();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_18;
      _WCRGroupingState();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      FUN_00378588(local_18);
    }
    local_1c = (uint)!bVar1;
    _objc_storeStrong(&local_28,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

