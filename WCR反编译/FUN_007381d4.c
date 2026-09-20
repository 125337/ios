// FUN_007381d4 @ 007381d4

void FUN_007381d4(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_80;
  ulong local_48 [3];
  ulong local_30;
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
    uVar1 = local_20;
    FUN_00737948();
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar1;
    if (uVar1 == 0) {
      local_18 = 0;
      local_24 = 1;
    }
    else {
      FUN_00731024(uVar1,PTR_s_tableView_0269e378);
      _objc_retainAutoreleasedReturnValue();
      local_48[0] = uVar1;
      if (uVar1 == 0) {
        uVar2 = local_30;
        FUN_00731024(local_30,PTR_s_getTableView_026a09c8);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_48[0];
        local_48[0] = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      uVar1 = local_48[0];
      puVar3 = PTR__OBJC_CLASS___UITableView_026ce1a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((uVar1 & 1) == 0) {
        local_80 = 0;
      }
      else {
        local_80 = local_48[0];
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_80;
      local_24 = 1;
      _objc_storeStrong(local_48,0);
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

