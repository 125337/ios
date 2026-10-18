// toggleCoversFunction @0x36b30


/* Function Stack Size: 0x10 bytes */



void _0x2f19de29::toggleCoversFunction(ID param_1,SEL param_2)



{

  uint uVar1;

  undefined *puVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined1 auVar6 [16];

  undefined1 auVar7 [16];

  undefined *local_a8;

  undefined8 local_a0;

  code *local_98;

  undefined *puStack_90;

  ID local_88;

  undefined *local_80;

  undefined8 local_78;

  code *local_70;

  undefined *puStack_68;

  ID local_60;

  undefined8 local_58;

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  uVar3 = auVar6._0_8_;

  auVar6 = FUN_002924c0(uVar3,auVar6._8_8_,&cf_coversEnabled);

  uVar5 = auVar6._8_8_;

  if (((auVar6._0_8_ & 1) == 0) &&

     (auVar7 = FUN_00297880(&objc::class_t::_0x2f19de29), uVar5 = auVar7._8_8_,

     (auVar7._0_8_ & 1) == 0)) {

    FUN_00291580(&_OBJC_CLASS___UIAlertController,uVar5,&::cf___,&cf__O_uX,1);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    puVar2 = PTR___NSConcreteStackBlock_003886f0;

    local_80 = PTR___NSConcreteStackBlock_003886f0;

    local_78 = 0xc2000000;

    local_70 = FUN_00036db8;

    puStack_68 = &DAT_00388d20;

    local_60 = param_1;

    _objc_retain(uVar3);

    local_58 = uVar3;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1,&cf_SsQl,0,&local_80);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar5,auVar6._8_8_,auVar6._0_8_);

    _objc_release(auVar6._0_8_);

    local_a8 = puVar2;

    local_a0 = 0xc2000000;

    local_98 = FUN_00036e4c;

    puStack_90 = &DAT_00388cf0;

    local_88 = param_1;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_00,&cf_Sm,1,&local_a8);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar5,auVar6._8_8_,auVar6._0_8_);

    _objc_release(auVar6._0_8_);

    FUN_0029a500(param_1,extraout_x1_01,uVar5,1,0);

    _objc_release(local_58);

    _objc_release(uVar5);

  }

  else {

    uVar1 = auVar6._0_4_ ^ 1;

    FUN_0029d080(uVar3,uVar5,uVar1,&cf_coversEnabled);

    DAT_003e7a2c = 0;

    FUN_002a4a40(uVar3);

    DAT_003e74b9 = (undefined1)uVar1;

    if (auVar6._0_4_ == 0) {

      FUN_00007f9c();

    }

    else {

      FUN_0000b684();

    }

    FUN_00298800(param_1);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar4 != 0) {

      FUN_00298800(param_1);

      auVar6 = _objc_retainAutoreleasedReturnValue();

      FUN_002a0120(auVar6._0_8_,auVar6._8_8_,uVar1);

      _objc_release(auVar6._0_8_);

    }

    FUN_0029af80(param_1);

  }

  _objc_release(uVar3);

  return;

}




