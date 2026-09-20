// FUN_00fd18c0 @ 00fd18c0

void FUN_00fd18c0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar1 = param_1 + 0x20;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = uVar1;
  if (uVar1 == 0) {
    local_2c = 1;
  }
  else {
    _objc_setAssociatedObject(uVar1,&DAT_028e3048,0,1);
    uVar2 = local_28;
    FUN_00fd148c();
    uVar1 = local_28;
    if ((uVar2 & 1) == 0) {
      _objc_getAssociatedObject(local_28,&DAT_028e3047);
      _objc_retainAutoreleasedReturnValue();
      local_38 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x28),PTR_s_applyOnTableView_owner__026a23c8,local_28,
                 uVar1);
      _objc_storeStrong(&local_38,0);
      local_2c = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      uVar2 = local_28;
      _objc_getAssociatedObject(local_28,&DAT_028e3047);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_scheduleSettleOnTableView_owner__026a2470,uVar1);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      local_2c = 1;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

