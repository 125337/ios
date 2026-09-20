// FUN_003bed8c @ 003bed8c

void FUN_003bed8c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_40;
  undefined *local_38;
  undefined *local_30;
  undefined4 local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    local_30 = PTR_s_wcrGrouping_findMainTableView_026a2848;
    local_38 = PTR_s_wcrGrouping_snapshotForTableView_026a2a50;
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,
               PTR_s_wcrGrouping_findMainTableView_026a2848);
    if (((uVar1 & 1) == 0) ||
       (uVar1 = local_20,
       (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,local_38),
       (uVar1 & 1) == 0)) {
      local_18 = 0;
      local_24 = 1;
    }
    else {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,local_30);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_20;
      local_40 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,local_38,uVar1);
      _objc_retainAutoreleasedReturnValue();
      local_24 = 1;
      local_18 = uVar2;
      _objc_storeStrong(&local_40,0);
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

