// FUN_00f24454 @ 00f24454

void FUN_00f24454(double param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  dispatch_time_t dVar3;
  undefined *local_30;
  uint local_24;
  double local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  puVar2 = PTR___dispatch_main_q_02578680;
  local_20 = param_1;
  if (local_18 == 0) {
    local_24 = 1;
  }
  else {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = local_20 <= 0.0;
    local_30 = puVar2;
    if (bVar1) {
      _dispatch_async(puVar2,local_18);
    }
    else {
      dVar3 = _dispatch_time(0,(long)(local_20 * 1000000000.0));
      _dispatch_after(dVar3,local_30,local_18);
    }
    local_24 = (uint)!bVar1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

