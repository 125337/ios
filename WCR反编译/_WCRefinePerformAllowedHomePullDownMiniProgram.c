// _WCRefinePerformAllowedHomePullDownMiniProgram @ 008636dc

void _WCRefinePerformAllowedHomePullDownMiniProgram(undefined8 param_1)

{
  dispatch_time_t dVar1;
  undefined *puVar2;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  long local_40;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  DAT_028cd4d0 = 1;
  DAT_028cd4d1 = 1;
  DAT_028cd4d8 = DAT_028cd4d8 + 1;
  local_20 = DAT_028cd4d8;
  if (local_18 != 0) {
    (**(code **)(local_18 + 0x10))();
  }
  dVar1 = _dispatch_time(0,8000000000);
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_60 = PTR___NSConcreteStackBlock_02578660;
  local_58 = 0xc0000000;
  local_54 = 0;
  local_50 = FUN_008638cc;
  local_48 = &DAT_02578c00;
  local_40 = local_20;
  _dispatch_after(dVar1,puVar2,&local_60);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_18,0);
  return;
}

