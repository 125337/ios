// FUN_0156c460 @ 0156c460

void FUN_0156c460(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  ulong local_48;
  ulong local_40;
  uint local_34;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  uVar1 = param_1;
  local_20 = param_1;
  local_18 = param_1;
  FUN_0156c6b8();
  if ((uVar1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x20);
    FUN_01564574();
    if ((uVar1 & 1) == 0) {
      uVar1 = *(ulong *)(param_1 + 0x20);
      FUN_0156c720();
      if ((uVar1 & 1) != 0) {
        return;
      }
    }
  }
  uVar2 = *(ulong *)(param_1 + 0x20);
  uVar1 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = uVar2;
  FUN_01532090();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + 0x20);
  local_30 = uVar1;
  FUN_01564574();
  if ((((uVar2 & 1) == 0) && (local_30 != 0)) &&
     (uVar1 = local_30, FUN_01564574(), (uVar1 & 1) != 0)) {
    _objc_storeStrong(&local_28,local_30);
  }
  uVar1 = local_28;
  FUN_01551a44();
  if ((((uVar1 & 1) == 0) && (FUN_0156c6b8(), (uVar1 & 1) == 0)) ||
     (uVar1 = local_28, FUN_015321f0(local_28,0), (uVar1 & 1) == 0)) {
    FUN_015611fc();
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar1;
    if (uVar1 != 0) {
      FUN_01560ee4(local_28,uVar1);
      dVar3 = _dispatch_time(0,280000000);
      puVar4 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_28;
      local_68 = PTR___NSConcreteStackBlock_02578660;
      local_60 = 0xc2000000;
      local_5c = 0;
      local_58 = FUN_0156ca78;
      local_50 = &DAT_0257a800;
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = uVar2;
      _dispatch_after(dVar3,puVar4,&local_68);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_storeStrong(&local_48,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_J_YU_g_b_u1Y_);
    }
    local_34 = (uint)(uVar1 == 0);
    _objc_storeStrong(&local_40,0);
  }
  else {
    local_34 = 1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

