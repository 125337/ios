// bubbleEnableSwitchChanged: @0x3d648


/* Function Stack Size: 0x18 bytes */



void _0x2f19de29::bubbleEnableSwitchChanged_(ID param_1,SEL param_2,ID param_3)



{

  ID IVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  ulong uVar4;

  ID IVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar6 [16];

  

  _objc_retain(param_3);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  auVar6 = FUN_002979c0(param_3);

  FUN_0029d080(uVar2,auVar6._8_8_,auVar6._0_8_,&cf_mesMsgMergeBubbleEnabled);

  auVar6 = FUN_002979c0(param_3);

  if ((auVar6._0_8_ & 1) == 0) {

    FUN_002a0060(uVar2,auVar6._8_8_,&::cf___,&cf_mesMsgMergeSelectedBubble);

    FUN_0029b4a0(uVar2,extraout_x1,&cf_mesMsgMergeSelectedSubPackage);

  }

  FUN_002a4a40(uVar2);

  FUN_0029af00(param_1);

  _objc_retain(param_3);

  IVar1 = param_3;

  do {

    if (IVar1 == 0) {

LAB_0003d784:

      _objc_release(uVar2);

      _objc_release(param_3);

      return;

    }

    uVar3 = _objc_opt_class(&_OBJC_CLASS___UITableView);

    uVar4 = _objc_opt_isKindOfClass(IVar1,uVar3);

    if ((uVar4 & 1) != 0) {

      _objc_retain(IVar1);

      FUN_00296800(&_OBJC_CLASS___NSIndexSet,extraout_x1_00,2);

      auVar6 = _objc_retainAutoreleasedReturnValue();

      FUN_0029b1c0(IVar1,auVar6._8_8_,auVar6._0_8_,100);

      _objc_release(auVar6._0_8_);

      _objc_release(IVar1);

      _objc_release(IVar1);

      goto LAB_0003d784;

    }

    FUN_002a4880(IVar1);

    IVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_release(IVar1);

    IVar1 = IVar5;

  } while( true );

}




