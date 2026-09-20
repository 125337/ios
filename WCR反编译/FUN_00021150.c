// FUN_00021150 @ 00021150

byte FUN_00021150(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong local_b0;
  ulong local_60;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48 [3];
  ulong local_30;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar1 = local_20;
  FUN_00021ab4();
  _objc_retainAutoreleasedReturnValue();
  local_48[0] = 0;
  local_50 = 0;
  local_30 = uVar1;
  FUN_00021e10(uVar1,&local_50);
  _objc_storeStrong(local_48,local_50);
  if ((uVar1 & 1) == 0) {
    local_11 = 0;
    local_54 = 1;
  }
  else {
    puVar2 = PTR_WCRefineAIStore_026ce048;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (((ulong)puVar3 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQ);
      FUN_00022174(local_28);
      local_11 = 1;
      local_54 = 1;
    }
    else {
      uVar1 = local_28;
      FUN_0002278c();
      _objc_retainAutoreleasedReturnValue();
      local_60 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
      if (uVar1 == 0) {
        local_b0 = local_30;
      }
      else {
        local_b0 = local_60;
      }
      FUN_000228b8();
      if ((local_b0 & 1) != 0) {
        FUN_00022174(local_28);
        uVar1 = local_28;
        FUN_00022d10();
        _objc_retainAutoreleasedReturnValue();
        FUN_00022aa4();
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      local_11 = 1;
      local_54 = 1;
      _objc_storeStrong(&local_60,0);
    }
  }
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

