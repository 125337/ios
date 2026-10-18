// FUN_001665c8 @0x1665c8


void FUN_001665c8(long param_1)



{

  undefined8 uVar1;

  dispatch_time_t dVar2;

  undefined1 auVar3 [16];

  undefined *local_48;

  undefined8 local_40;

  code *local_38;

  undefined *puStack_30;

  undefined8 local_28;

  

  FUN_00136588();

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b4a0(auVar3._0_8_,auVar3._8_8_,&cf_CadisWeatherCache);

  _objc_release(auVar3._0_8_);

  FUN_00136588();

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4a40();

  _objc_release(uVar1);

  FUN_00136efc();

  FUN_00136604();

  dVar2 = _dispatch_time(0,3000000000);

  local_48 = PTR___NSConcreteStackBlock_003886f0;

  local_40 = 0xc0000000;

  local_38 = FUN_001666a0;

  puStack_30 = &DAT_0038abe0;

  local_28 = *(undefined8 *)(param_1 + 0x20);

  _dispatch_after(dVar2,PTR___dispatch_main_q_00388740,&local_48);

  return;

}




