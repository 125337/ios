// FUN_008c0ca8 @ 008c0ca8

void FUN_008c0ca8(double param_1)

{
  dispatch_time_t dVar1;
  undefined *puVar2;
  double local_68;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined8 local_40;
  double local_38;
  undefined8 local_30;
  double local_28;
  undefined8 local_20;
  double local_18;
  
  local_20 = DAT_028ce020;
  local_30 = 0;
  local_68 = param_1;
  if (param_1 < 0.0) {
    local_68 = 0.0;
  }
  local_38 = local_68;
  local_28 = param_1;
  local_18 = param_1;
  dVar1 = _dispatch_time(0,(long)(local_68 * 1000000000.0));
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_60 = PTR___NSConcreteStackBlock_02578660;
  local_58 = 0xc0000000;
  local_54 = 0;
  local_50 = FUN_008c1210;
  local_48 = &DAT_02578c00;
  local_40 = local_20;
  _dispatch_after(dVar1,puVar2,&local_60);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  return;
}

