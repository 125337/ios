// FUN_00240bc0 @ 00240bc0

void FUN_00240bc0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  dispatch_time_t dVar4;
  undefined *puVar5;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined **local_60 [3];
  undefined8 local_48;
  double local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  uVar1 = local_28;
  local_40 = param_1;
  FUN_0023fa84();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_48 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar2 = local_38;
  ppuVar3 = &local_90;
  local_90 = PTR___NSConcreteStackBlock_02578660;
  local_88 = 0xc2000000;
  local_84 = 0;
  local_80 = FUN_00240f2c;
  local_78 = &DAT_02578e60;
  (*(code *)PTR__objc_retain_02578638)();
  uVar1 = local_48;
  local_70 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = uVar1;
  _objc_retainBlock();
  puVar5 = PTR___dispatch_main_q_02578680;
  local_60[0] = ppuVar3;
  if (0.0 < local_40) {
    dVar4 = _dispatch_time(0,(long)(local_40 * 1000000000.0));
    puVar5 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_after(dVar4,puVar5,local_60[0]);
    (*(code *)PTR__objc_release_02578630)(puVar5);
  }
  else {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_async();
    (*(code *)PTR__objc_release_02578630)(puVar5);
  }
  _objc_storeStrong(local_60);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

