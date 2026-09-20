// FUN_00373d3c @ 00373d3c

byte FUN_00373d3c(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  byte local_40;
  long local_38;
  long local_30;
  undefined4 local_24;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 1;
    local_24 = 1;
  }
  else {
    lVar2 = local_20;
    _WCRGroupingState();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_30 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    bVar1 = false;
    local_40 = 1;
    if (local_30 != 0) {
      local_38 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_entries_026a25d0);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      lVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_40 = 1;
      if (lVar2 != 0) {
        lVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_budgetFallback_026a25d8);
        local_40 = (byte)lVar2;
      }
    }
    local_11 = local_40 & 1;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

