// FUN_002d8bb4 @ 002d8bb4

void FUN_002d8bb4(undefined8 param_1,undefined8 param_2,long param_3)

{
  dispatch_time_t dVar1;
  undefined *puVar2;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  long local_50;
  double local_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [12];
  undefined4 local_2c;
  long local_28;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = param_3;
  if ((local_18 == 0) || (local_20 == 0)) {
    local_2c = 1;
  }
  else {
    _objc_initWeak(auStack_38,local_18);
    _objc_initWeak(auStack_40,local_20);
    local_48 = 1.2;
    if (local_28 != 0) {
      local_48 = DAT_02323c78;
    }
    dVar1 = _dispatch_time(0,(long)(local_48 * 1000000000.0));
    puVar2 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_80 = PTR___NSConcreteStackBlock_02578660;
    local_78 = 0xc2000000;
    local_74 = 0;
    local_70 = FUN_002d8d78;
    local_68 = &DAT_0257bad8;
    _objc_copyWeak(auStack_60,auStack_38);
    _objc_copyWeak(auStack_58,auStack_40);
    local_50 = local_28;
    _dispatch_after(dVar1,puVar2,&local_80);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    local_2c = 0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

