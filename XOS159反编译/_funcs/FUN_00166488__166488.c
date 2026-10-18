// FUN_00166488 @0x166488


void FUN_00166488(long param_1)



{

  undefined8 uVar1;

  dispatch_time_t dVar2;

  long lVar3;

  undefined1 auVar4 [16];

  undefined *local_58;

  undefined8 local_50;

  code *local_48;

  undefined *puStack_40;

  undefined8 local_38;

  

  lVar3 = *(long *)(param_1 + 0x20);

  FUN_00136588();

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_0029efa0(auVar4._0_8_,auVar4._8_8_,lVar3 != 1,&cf_CadisWeatherLang);

  _objc_release(auVar4._0_8_);

  FUN_00136588();

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4a40();

  _objc_release(uVar1);

  FUN_00136efc();

  FUN_00136604();

  dVar2 = _dispatch_time(0,3000000000);

  local_58 = PTR___NSConcreteStackBlock_003886f0;

  local_50 = 0xc0000000;

  local_48 = FUN_00166578;

  puStack_40 = &DAT_0038abe0;

  local_38 = *(undefined8 *)(param_1 + 0x28);

  _dispatch_after(dVar2,PTR___dispatch_main_q_00388740,&local_58);

  return;

}




