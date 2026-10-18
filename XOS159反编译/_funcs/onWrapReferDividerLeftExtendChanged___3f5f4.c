// onWrapReferDividerLeftExtendChanged: @0x3f5f4


/* Function Stack Size: 0x18 bytes */



void _0x2f19de29::onWrapReferDividerLeftExtendChanged_(ID param_1,SEL param_2,ID param_3)



{

  ID IVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  ID IVar4;

  long lVar5;

  double dVar6;

  undefined1 auVar7 [16];

  

  _objc_retain(param_3);

  dVar6 = (double)FUN_002a6060(param_3);

  lVar5 = (long)dVar6;

  if (lVar5 < -0x13) {

    lVar5 = -0x14;

  }

  if (0x13 < lVar5) {

    lVar5 = 0x14;

  }

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  uVar2 = auVar7._0_8_;

  auVar7 = FUN_00297480(uVar2,auVar7._8_8_,&cf_mesMsgMergeWrapReferDividerLeftExtendPt);

  if (auVar7._0_8_ != lVar5) {

    FUN_0029efa0(uVar2,auVar7._8_8_,lVar5,&cf_mesMsgMergeWrapReferDividerLeftExtendPt);

    FUN_002a4a40(uVar2);

    DAT_003e74e0 = DAT_003e74e0 + 1;

    DAT_003e7518 = lVar5;

    FUN_0003dcfc();

  }

  _objc_retain(param_3);

  IVar1 = param_3;

  do {

    if (IVar1 == 0) {

LAB_0003f768:

      _objc_release(uVar2);

      _objc_release(param_3);

      return;

    }

    uVar3 = _objc_opt_class(&_OBJC_CLASS___UITableViewCell);

    auVar7 = _objc_opt_isKindOfClass(IVar1,uVar3);

    if ((auVar7._0_8_ & 1) != 0) {

      FUN_002a4680(&_OBJC_CLASS___NSString,auVar7._8_8_,&cf____ldpt);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      FUN_002944a0(IVar1);

      auVar7 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1d60(auVar7._0_8_,auVar7._8_8_,uVar3);

      _objc_release(auVar7._0_8_);

      _objc_release(uVar3);

      _objc_release(IVar1);

      goto LAB_0003f768;

    }

    FUN_002a4880(IVar1);

    IVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release(IVar1);

    IVar1 = IVar4;

  } while( true );

}




