// viewWillAppear: @0xb48c


/* Function Stack Size: 0x14 bytes */



void _0x2f19de29::viewWillAppear_(ID param_1,SEL param_2,bool param_3)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined1 auVar4 [16];

  ID local_50;

  class_t *pcStack_48;

  

  pcStack_48 = &objc::class_t::_0x2f19de29;

  local_50 = param_1;

  _objc_msgSendSuper2(&local_50,"viewWillAppear:",param_3);

  FUN_0029e8c0(param_1,extraout_x1,1);

  FUN_0029fda0(param_1,extraout_x1_00,0);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  uVar2 = auVar4._0_8_;

  iVar1 = FUN_002924c0(uVar2,auVar4._8_8_,&cf_coversEnabled);

  if ((iVar1 != 0) && (auVar4 = FUN_00297880(&objc::class_t::_0x2f19de29), (auVar4._0_8_ & 1) == 0))

  {

    FUN_0029d080(uVar2,auVar4._8_8_,0,&cf_coversEnabled);

    FUN_002a4a40(uVar2);

    DAT_003e74b9 = 0;

    FUN_0000b684();

    DAT_003e7a2c = 0;

    FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1_01,&cf_cN_y_u,&cf_hKm0R__gsQl,1);

    auVar4 = _objc_retainAutoreleasedReturnValue();

    uVar3 = auVar4._0_8_;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar4._8_8_,&cf_SsQl,0,

                 &PTR___NSConcreteGlobalBlock_00388e90);

    auVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar3,auVar4._8_8_,auVar4._0_8_);

    _objc_release(auVar4._0_8_);

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_02,&cf_Sm,1,0);

    auVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar3,auVar4._8_8_,auVar4._0_8_);

    _objc_release(auVar4._0_8_);

    FUN_0029a500(param_1,extraout_x1_03,uVar3,1,0);

    _objc_release(uVar3);

  }

  FUN_002a4dc0(param_1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar3);

  _objc_release(uVar2);

  return;

}




