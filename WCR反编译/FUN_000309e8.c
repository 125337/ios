// FUN_000309e8 @ 000309e8

void FUN_000309e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  dispatch_time_t dVar2;
  undefined *puVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028c7ab8)(param_1,param_2);
  uVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = uVar1;
  dVar2 = _dispatch_time(0,8000000000);
  puVar3 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = uVar1;
  _dispatch_after(dVar2,puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

