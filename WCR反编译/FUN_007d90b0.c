// FUN_007d90b0 @ 007d90b0

void FUN_007d90b0(double param_1,long param_2)

{
  dispatch_time_t dVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  double local_20;
  long local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  local_18 = param_2;
  dVar1 = _dispatch_time(0,(long)(param_1 * 1000000000.0));
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  local_38 = uVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = uVar4;
  _dispatch_after(dVar1,puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_38,0);
  return;
}

