// FUN_002ba42c @ 002ba42c

void FUN_002ba42c(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  dispatch_time_t dVar2;
  undefined *puVar3;
  undefined8 local_28;
  double local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  local_20 = param_1;
  dVar2 = _dispatch_time(0,(long)(param_1 * 1000000000.0));
  puVar3 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = uVar1;
  _dispatch_after(dVar2,puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return;
}

