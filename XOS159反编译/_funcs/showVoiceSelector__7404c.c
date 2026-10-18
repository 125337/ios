// showVoiceSelector @0x7404c


/* Function Stack Size: 0x10 bytes */



void _0x016d26c7::showVoiceSelector(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 extraout_x1;

  undefined1 auVar2 [16];

  undefined *local_60;

  undefined8 local_58;

  code *local_50;

  undefined *puStack_48;

  undefined1 auStack_40 [8];

  undefined1 auStack_38 [8];

  

  uVar1 = _objc_alloc_init(&objc::class_t::_0x00bdda58);

  _objc_initWeak(auStack_38,param_1);

  local_60 = PTR___NSConcreteStackBlock_003886f0;

  local_58 = 0xc2000000;

  local_50 = FUN_00074158;

  puStack_48 = &DAT_0038a1c0;

  _objc_copyWeak(auStack_40,auStack_38);

  FUN_002a03c0(uVar1,extraout_x1,&local_60);

  FUN_002990e0(param_1);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029aa80(auVar2._0_8_,auVar2._8_8_,uVar1,1);

  _objc_release(auVar2._0_8_);

  _objc_destroyWeak(auStack_40);

  _objc_destroyWeak(auStack_38);

  _objc_release(uVar1);

  return;

}




