// FUN_006e1080 @ 006e1080

long FUN_006e1080(undefined8 param_1,ulong *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long local_58;
  long local_50;
  ulong local_30;
  ulong *local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  local_28 = param_2;
  FUN_006e1438(local_20,&cf_m_tableView,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UITableView_026ce1a8;
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar1 & 1) == 0) {
    if (local_28 != (ulong *)0x0) {
      *local_28 = 0xffffffffffffffff;
    }
    local_18 = 0;
  }
  else {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_numberOfSections_026a2068);
    if (local_28 != (ulong *)0x0) {
      *local_28 = uVar1;
    }
    local_50 = 0;
    for (local_58 = 0; local_58 < (long)uVar1; local_58 = local_58 + 1) {
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_numberOfRowsInSection__026a2008,local_58)
      ;
      local_50 = local_50 + uVar3;
    }
    local_18 = local_50;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

