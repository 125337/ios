// FUN_00404cb0 @ 00404cb0

void FUN_00404cb0(double param_1)

{
  undefined **ppuVar1;
  dispatch_time_t dVar2;
  undefined *puVar3;
  undefined **local_20;
  double local_18;
  
  ppuVar1 = &PTR___NSConcreteGlobalBlock_0257d0e8;
  local_18 = param_1;
  _objc_retainBlock();
  local_20 = ppuVar1;
  if (0.0 < local_18) {
    dVar2 = _dispatch_time(0,(long)(local_18 * 1000000000.0));
    puVar3 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_after(dVar2,puVar3,local_20);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  else {
    (*(code *)ppuVar1[2])();
  }
  _objc_storeStrong(&local_20,0);
  return;
}

