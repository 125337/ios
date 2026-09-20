// FUN_003cccac @ 003cccac

void FUN_003cccac(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if (((local_20 == 0) || (local_28 == 0)) || (uVar2 = local_20, FUN_003adbe4(), (uVar2 & 1) == 0))
  {
    local_18 = 0;
    local_2c = 1;
  }
  else {
    uVar2 = local_20;
    FUN_003bed8c();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_28;
    local_38 = uVar2;
    FUN_0039d120(local_28,uVar2);
    if ((uVar3 & 1) == 0) {
      local_18 = 0;
    }
    else {
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_row_0269e210);
      uVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_preservedOriginalRows_026a2ce0);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      bVar1 = true;
      if (-1 < (long)(uVar2 - uVar4)) {
        uVar3 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_entries_026a25d0);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = (long)uVar5 <= (long)(uVar2 - uVar4);
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      if (bVar1) {
        local_18 = 0;
      }
      else {
        uVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_entries_026a25d0);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_18 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
    }
    local_2c = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

