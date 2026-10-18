// FUN_002444e4 @0x2444e4


void FUN_002444e4(undefined8 param_1,long param_2,int param_3)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined *puVar4;

  long lVar5;

  undefined1 auVar6 [16];

  

  _objc_retain();

  uVar2 = extraout_x1;

  if (0 < param_2) {

    lVar5 = 0;

    do {

      FUN_00244c70(param_1,lVar5);

      auVar6 = _objc_retainAutoreleasedReturnValue();

      uVar2 = auVar6._0_8_;

      if (param_3 == 0) {

        FUN_0029e8a0(uVar2,auVar6._8_8_,0);

        FUN_00237f98(lVar5);

        auVar6 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1d60(uVar2,auVar6._8_8_,auVar6._0_8_);

        _objc_release(auVar6._0_8_);

        FUN_00293060(0x3fdae147ae147ae1,0x3ff0000000000000,&_OBJC_CLASS___UIColor);

        uVar3 = _objc_retainAutoreleasedReturnValue();

        FUN_00293060(0x3fe51eb851eb851f,0x3ff0000000000000,&_OBJC_CLASS___UIColor);

        uVar1 = _objc_retainAutoreleasedReturnValue();

        FUN_00231604(uVar3,uVar1);

        auVar6 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1da0(uVar2,auVar6._8_8_,auVar6._0_8_);

        _objc_release(auVar6._0_8_);

        _objc_release(uVar1);

        _objc_release(uVar3);

      }

      else {

        FUN_0029e8a0(uVar2,auVar6._8_8_,1);

      }

      _objc_release(uVar2);

      lVar5 = lVar5 + 1;

    } while (param_2 != lVar5);

    uVar2 = extraout_x1_00;

    if (3 < param_2) goto LAB_00244688;

  }

  lVar5 = 4 - param_2;

  puVar4 = &UNK_000024b8 + param_2;

  do {

    FUN_002a62a0(param_1,uVar2,puVar4);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    uVar3 = _objc_opt_class(&_OBJC_CLASS___UILabel);

    auVar6 = _objc_opt_isKindOfClass(uVar2,uVar3);

    if ((auVar6._0_8_ & 1) != 0) {

      FUN_0029e8a0(uVar2,auVar6._8_8_,1);

    }

    _objc_release(uVar2);

    puVar4 = puVar4 + 1;

    lVar5 = lVar5 + -1;

    uVar2 = extraout_x1_01;

  } while (lVar5 != 0);

LAB_00244688:

  _objc_release(param_1);

  return;

}




