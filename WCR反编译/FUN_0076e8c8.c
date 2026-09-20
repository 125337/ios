// FUN_0076e8c8 @ 0076e8c8

void FUN_0076e8c8(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  dispatch_time_t dVar1;
  undefined *puVar2;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined1 auStack_58 [24];
  double local_40;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_2;
  _objc_storeStrong(&local_20);
  local_38 = param_2;
  local_30 = param_5;
  local_28 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_doubleValue_026ca608);
  local_40 = param_1;
  dVar1 = _dispatch_time(0,(long)(param_1 * 1000000000.0));
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_78 = PTR___NSConcreteStackBlock_02578660;
  local_70 = 0xc2000000;
  local_6c = 0;
  local_68 = FUN_0076ea24;
  local_60 = &DAT_02578da0;
  _objc_copyWeak(auStack_58,param_2 + 0x20);
  _dispatch_after(dVar1,puVar2,&local_78);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_destroyWeak(auStack_58);
  _objc_storeStrong(&local_20,0);
  return;
}

