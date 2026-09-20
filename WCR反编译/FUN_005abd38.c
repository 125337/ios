// FUN_005abd38 @ 005abd38

void FUN_005abd38(ulong param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  dispatch_time_t dVar2;
  undefined *puVar3;
  uint local_7c;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [31];
  byte local_31;
  ulong local_30;
  byte local_22;
  byte local_21;
  undefined8 local_20;
  ulong local_18;
  
  local_21 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028cb688)(param_1,param_2,param_3 & 1);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isBeingDismissed_0269f460);
  local_31 = 0;
  local_7c = 1;
  if ((uVar1 & 1) == 0) {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isMovingFromParentViewController_0269f458);
    local_7c = 1;
    if ((uVar1 & 1) == 0) {
      uVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      local_31 = 1;
      local_30 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_7c = (uint)uVar1;
    }
  }
  if ((local_31 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  local_22 = (byte)local_7c & 1;
  if ((local_7c & 1) != 0) {
    _objc_initWeak(auStack_50,local_18);
    dVar2 = _dispatch_time(0,1000000000);
    puVar3 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_005cdd70;
    local_60 = &DAT_02578da0;
    _objc_copyWeak(auStack_58,auStack_50);
    _dispatch_after(dVar2,puVar3,&local_78);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_50);
  }
  return;
}

