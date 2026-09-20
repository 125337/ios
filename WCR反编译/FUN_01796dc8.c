// FUN_01796dc8 @ 01796dc8

void FUN_01796dc8(long param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  double local_98;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined **local_28;
  long local_20;
  long local_18;
  
  ppuVar2 = &local_58;
  local_58 = PTR___NSConcreteStackBlock_02578660;
  local_50 = 0xc2000000;
  local_4c = 0;
  local_48 = FUN_01796f88;
  local_40 = &DAT_025791c0;
  local_30 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = uVar1;
  _objc_retainBlock();
  if (*(double *)(param_1 + 0x30) <= 0.0) {
    local_98 = 0.0;
  }
  else {
    local_98 = *(double *)(param_1 + 0x30);
  }
  local_28 = ppuVar2;
  if (local_98 <= 0.0) {
    (*(code *)ppuVar2[2])();
  }
  else {
    dVar3 = _dispatch_time(0,(long)(local_98 * 1000000000.0));
    puVar4 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_after(dVar3,puVar4,local_28);
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_38,0);
  return;
}

