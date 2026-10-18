// FUN_00166260 @0x166260


void FUN_00166260(long param_1)



{

  cfstringStruct *pcVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  cfstringStruct *pcVar4;

  dispatch_time_t dVar5;

  undefined1 auVar6 [16];

  undefined *local_68;

  undefined8 local_60;

  code *local_58;

  undefined *puStack_50;

  undefined8 local_48;

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  pcVar4 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar1 = &cf___;

  if (pcVar4 != (cfstringStruct *)0x0) {

    pcVar1 = pcVar4;

  }

  _objc_retain(pcVar1);

  _objc_release(pcVar4);

  _objc_release(uVar3);

  _objc_release(uVar2);

  FUN_002a64c0(&_OBJC_CLASS___NSCharacterSet);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_002a45c0(pcVar1,auVar6._8_8_,auVar6._0_8_);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(pcVar1);

  _objc_release(auVar6._0_8_);

  FUN_00136588();

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_002a0060(auVar6._0_8_,auVar6._8_8_,uVar2,&cf_CadisWeatherCity);

  _objc_release(auVar6._0_8_);

  FUN_00136588();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4a40();

  _objc_release(uVar3);

  FUN_00136efc();

  FUN_00136604();

  dVar5 = _dispatch_time(0,3000000000);

  local_68 = PTR___NSConcreteStackBlock_003886f0;

  local_60 = 0xc0000000;

  local_58 = FUN_00166438;

  puStack_50 = &DAT_0038abe0;

  local_48 = *(undefined8 *)(param_1 + 0x28);

  _dispatch_after(dVar5,PTR___dispatch_main_q_00388740,&local_68);

  _objc_release(uVar2);

  return;

}




