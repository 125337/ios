// FUN_004d0d20 @ 004d0d20

void FUN_004d0d20(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_70;
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
    local_30 = 0;
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_m_tableView);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_30;
    local_30 = uVar1;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_30;
    puVar2 = PTR__OBJC_CLASS___UITableView_026ce1a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) == 0) {
      local_70 = 0;
    }
    else {
      local_70 = local_30;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_70;
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

