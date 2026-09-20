// FUN_0002ff30 @ 0002ff30

void FUN_0002ff30(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  ulong local_40;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_objectForKeyedSubscript__0269d098,&cf_session);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_0003102c();
  _objc_retainAutoreleasedReturnValue();
  local_20 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_30 = 1;
    goto LAB_000301a0;
  }
  uVar1 = local_18;
  FUN_00031114();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar1;
  if (uVar1 == 0) {
LAB_000300a4:
    uVar1 = local_20;
    FUN_00031e08();
    if ((uVar1 & 1) == 0) {
      local_30 = 1;
    }
    else {
      dVar3 = _dispatch_time(0,800000000);
      puVar4 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_18;
      local_60 = PTR___NSConcreteStackBlock_02578660;
      local_58 = 0xc2000000;
      local_54 = 0;
      local_50 = FUN_000321dc;
      local_48 = &DAT_02578c20;
      (*(code *)PTR__objc_retain_02578638)();
      local_40 = uVar1;
      _dispatch_after(dVar3,puVar4,&local_60);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_storeStrong(&local_40,0);
      local_30 = 0;
    }
  }
  else {
    uVar2 = local_18;
    FUN_00031874(local_18,uVar1);
    if ((uVar2 & 1) == 0) goto LAB_000300a4;
    local_30 = 1;
  }
  _objc_storeStrong(&local_38,0);
LAB_000301a0:
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

