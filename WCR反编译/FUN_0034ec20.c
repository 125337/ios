// FUN_0034ec20 @ 0034ec20

void FUN_0034ec20(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_58;
  bool local_39;
  ulong local_38;
  ulong local_30;
  undefined4 local_24;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar1 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar1,param_2);
  FUN_0034e7a8();
  if (((ulong)puVar1 & 1) == 0) {
    local_24 = 1;
  }
  else {
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,
               PTR_s_wcrHomeAvatarStrip_findMainTable_026a23a8);
    local_39 = (uVar2 & 1) == 0;
    if (local_39) {
      local_58 = 0;
    }
    else {
      local_58 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_wcrHomeAvatarStrip_findMainTable_026a23a8);
      _objc_retainAutoreleasedReturnValue();
      local_38 = local_58;
    }
    local_39 = !local_39;
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = local_58;
    if (local_39) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
    puVar3 = PTR_WCRefineHomeTableHeaderHost_026ce570;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHomeTableHeaderHost_026ce570,PTR_s_stripSlotInTableView__026a23a0,
               local_30);
    _objc_retainAutoreleasedReturnValue();
    FUN_00355298();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    uVar2 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028ca004);
    _objc_retainAutoreleasedReturnValue();
    FUN_00355298();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028ca003);
    _objc_retainAutoreleasedReturnValue();
    FUN_00355298();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    _objc_storeStrong(&local_30,0);
    local_24 = 0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

