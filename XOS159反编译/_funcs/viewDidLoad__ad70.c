// viewDidLoad @0xad70


/* Function Stack Size: 0x10 bytes */



void _0x2f19de29::viewDidLoad(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined **ppuVar2;

  undefined8 extraout_x1_01;

  undefined8 uVar3;

  undefined8 extraout_x1_02;

  float fVar4;

  double dVar5;

  undefined1 auVar6 [16];

  undefined *local_c0;

  undefined8 local_b8;

  code *local_b0;

  undefined *puStack_a8;

  undefined8 local_a0;

  ID IStack_98;

  undefined *local_90;

  undefined8 local_88;

  code *local_80;

  undefined *puStack_78;

  ID local_70;

  undefined *local_68;

  undefined8 local_60;

  code *local_58;

  undefined *puStack_50;

  ID local_48;

  ID local_40;

  class_t *pcStack_38;

  

  pcStack_38 = &objc::class_t::_0x2f19de29;

  local_40 = param_1;

  _objc_msgSendSuper2(&local_40,"viewDidLoad");

  FUN_0029e8c0(param_1,extraout_x1,1);

  FUN_0029fda0(param_1,extraout_x1_00,0);

  if (DAT_003e76f8 == '\x01') {

    FUN_002a4a60(&_OBJC_CLASS___UIColor);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    FUN_002a6220(param_1);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_0029cf60(auVar6._0_8_,auVar6._8_8_,uVar1);

    _objc_release(auVar6._0_8_);

    _objc_release(uVar1);

    local_68 = PTR___NSConcreteStackBlock_003886f0;

    local_60 = 0xc2000000;

    local_58 = FUN_0000b0f8;

    puStack_50 = &DAT_00388e60;

    ppuVar2 = &local_68;

    local_48 = param_1;

  }

  else {

    if (DAT_003e74b8 != '\x01') {

      auVar6 = FUN_00297fa0(DAT_003e74a8);

      uVar1 = DAT_003e74a8;

      uVar3 = auVar6._8_8_;

      if (auVar6._0_8_ != 0) {

        _objc_retain(DAT_003e74a8);

        uVar3 = DAT_003e74a8;

        DAT_003e74a8 = 0;

        _objc_release(uVar3);

        local_c0 = PTR___NSConcreteStackBlock_003886f0;

        local_b8 = 0xc2000000;

        local_b0 = FUN_0000b3c8;

        puStack_a8 = &DAT_00388d50;

        local_a0 = uVar1;

        IStack_98 = param_1;

        _objc_retain(uVar1);

        _dispatch_async(PTR___dispatch_main_q_00388740,&local_c0);

        _objc_release(local_a0);

        _objc_release(uVar1);

        uVar3 = extraout_x1_01;

      }

      FUN_002a1f60(param_1,uVar3,&cf_cNn_);

      FUN_002a4ba0(&_OBJC_CLASS___UIColor);

      uVar1 = _objc_retainAutoreleasedReturnValue();

      FUN_002a6220(param_1);

      auVar6 = _objc_retainAutoreleasedReturnValue();

      FUN_0029cf60(auVar6._0_8_,auVar6._8_8_,uVar1);

      _objc_release(auVar6._0_8_);

      _objc_release(uVar1);

      auVar6 = _objc_alloc(&_OBJC_CLASS___UIBarButtonItem);

      uVar1 = FUN_00296f40(auVar6._0_8_,auVar6._8_8_,&::cf___,0,0,0);

      FUN_00299140(param_1);

      auVar6 = _objc_retainAutoreleasedReturnValue();

      FUN_0029cea0(auVar6._0_8_,auVar6._8_8_,uVar1);

      _objc_release(auVar6._0_8_);

      _objc_release(uVar1);

      FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

      auVar6 = _objc_retainAutoreleasedReturnValue();

      uVar1 = auVar6._0_8_;

      fVar4 = (float)FUN_00295460(uVar1,auVar6._8_8_,&cf_coverImageSize);

      FUN_0029ec80((double)fVar4,param_1);

      dVar5 = (double)FUN_00296520(param_1);

      if (dVar5 <= 0.0) {

        FUN_0029ec80(0x4051800000000000,param_1);

        dVar5 = (double)FUN_00296520(param_1);

        FUN_0029e500((float)dVar5,uVar1,extraout_x1_02,&cf_coverImageSize);

        FUN_002a4a40(uVar1);

      }

      FUN_00298100(param_1);

      FUN_002a2c00(param_1);

      FUN_002a2d80(param_1);

      _objc_release(uVar1);

      return;

    }

    FUN_002a4a60(&_OBJC_CLASS___UIColor);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    FUN_002a6220(param_1);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_0029cf60(auVar6._0_8_,auVar6._8_8_,uVar1);

    _objc_release(auVar6._0_8_);

    _objc_release(uVar1);

    local_90 = PTR___NSConcreteStackBlock_003886f0;

    local_88 = 0xc2000000;

    local_80 = FUN_0000b258;

    puStack_78 = &DAT_00388e60;

    ppuVar2 = &local_90;

    local_70 = param_1;

  }

  _dispatch_async(PTR___dispatch_main_q_00388740,ppuVar2);

  return;

}




