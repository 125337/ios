// FUN_0016cd9c @0x16cd9c


void FUN_0016cd9c(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  long lVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 uVar6;

  undefined1 auVar7 [16];

  undefined *local_68;

  undefined8 local_60;

  code *local_58;

  undefined *puStack_50;

  undefined8 local_48;

  

  uVar1 = _objc_alloc_init(&_OBJC_CLASS___PHPickerConfiguration);

  if (*(char *)(param_1 + 0x28) == '\x01') {

    FUN_00296660();

    auVar7 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    FUN_002a6200(&_OBJC_CLASS___PHPickerFilter);

    auVar7 = _objc_retainAutoreleasedReturnValue();

  }

  FUN_0029e400(uVar1,auVar7._8_8_,auVar7._0_8_);

  _objc_release(auVar7._0_8_);

  FUN_002a1260(uVar1,extraout_x1,*(byte *)(param_1 + 0x29) ^ 1);

  auVar7 = _objc_alloc(&_OBJC_CLASS___PHPickerViewController);

  uVar2 = FUN_00296a00(auVar7._0_8_,auVar7._8_8_,uVar1);

  _objc_setAssociatedObject(uVar2,PTR_LOOP_003e6c10,PTR____kCFBooleanTrue_00388320,1);

  uVar3 = _objc_alloc_init(&objc::class_t::CadisPHPickerDelegate);

  local_68 = PTR___NSConcreteStackBlock_003886f0;

  local_60 = 0xc2000000;

  local_58 = FUN_0016cfd4;

  puStack_50 = &DAT_0038da58;

  uVar6 = *(undefined8 *)(param_1 + 0x20);

  _objc_retain(uVar6);

  local_48 = uVar6;

  FUN_0029d5c0(uVar3,extraout_x1_00,&local_68);

  FUN_0029dca0(uVar2,extraout_x1_01,uVar3);

  uVar6 = extraout_x1_02;

  if (DAT_003e8a20 == 0) {

    FUN_0029c6e0(&_OBJC_CLASS___NSMutableSet);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    lVar5 = DAT_003e8a20;

    DAT_003e8a20 = lVar4;

    _objc_release(lVar5);

    uVar6 = extraout_x1_03;

  }

  FUN_00291240(DAT_003e8a20,uVar6,uVar3);

  FUN_0016cb00();

  auVar7 = _objc_retainAutoreleasedReturnValue();

  lVar5 = auVar7._0_8_;

  if (lVar5 == 0) {

    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);

  }

  else {

    FUN_0029a500(lVar5,auVar7._8_8_,uVar2,1,0);

  }

  _objc_release(lVar5);

  _objc_release(local_48);

  _objc_release(uVar3);

  _objc_release(uVar2);

  _objc_release(uVar1);

  return;

}




