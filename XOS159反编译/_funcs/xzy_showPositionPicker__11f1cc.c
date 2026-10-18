// xzy_showPositionPicker @0x11f1cc


/* Function Stack Size: 0x10 bytes */



void XZYHomeNPPickerVC::xzy_showPositionPicker(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  long lVar3;

  undefined1 auVar4 [16];

  undefined *local_d0;

  undefined8 local_c8;

  code *local_c0;

  undefined *puStack_b8;

  undefined1 auStack_b0 [8];

  undefined *local_a8;

  undefined8 local_a0;

  code *local_98;

  undefined *puStack_90;

  undefined1 auStack_88 [8];

  long local_80;

  undefined1 auStack_78 [8];

  

  FUN_00291580(&_OBJC_CLASS___UIAlertController,param_2,&cf_LrMOn_,0,0);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_initWeak(auStack_78,param_1);

  local_d0 = PTR___NSConcreteStackBlock_003886f0;

  lVar3 = 0;

  while( true ) {

    auVar4 = FUN_00293860(&PTR__OBJC_CLASS___NSConstantArray_003be230);

    if (auVar4._0_8_ <= lVar3) break;

    FUN_00299500(&PTR__OBJC_CLASS___NSConstantArray_003be230,auVar4._8_8_,lVar3);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    local_a8 = local_d0;

    local_a0 = 0xc2000000;

    local_98 = FUN_0011f44c;

    puStack_90 = &DAT_0038cb28;

    _objc_copyWeak(auStack_88,auStack_78);

    local_80 = lVar3;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1,uVar2,0,&local_a8);

    auVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar1,auVar4._8_8_,auVar4._0_8_);

    _objc_release(auVar4._0_8_);

    _objc_release(uVar2);

    _objc_destroyWeak(auStack_88);

    lVar3 = lVar3 + 1;

  }

  local_c8 = 0xc2000000;

  local_c0 = FUN_0011f5cc;

  puStack_b8 = &DAT_00389250;

  _objc_copyWeak(auStack_b0,auStack_78);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_00,&cf_n__NhQ__,2,&local_d0);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar1,auVar4._8_8_,auVar4._0_8_);

  _objc_release(auVar4._0_8_);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_Sm,1,0);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar1,auVar4._8_8_,auVar4._0_8_);

  _objc_release(auVar4._0_8_);

  FUN_0029a500(param_1,extraout_x1_02,uVar1,1,0);

  _objc_destroyWeak(auStack_b0);

  _objc_destroyWeak(auStack_78);

  _objc_release(uVar1);

  return;

}




