// bubbleCropSwitchChanged: @0x3d460


/* Function Stack Size: 0x18 bytes */



void _0x2f19de29::bubbleCropSwitchChanged_(ID param_1,SEL param_2,ID param_3)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  ulong uVar4;

  ID IVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  ID IVar6;

  undefined1 auVar7 [16];

  

  _objc_retain(param_3);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  auVar7 = FUN_002979c0(param_3);

  FUN_0029d080(uVar2,auVar7._8_8_,auVar7._0_8_,&cf_bubbleCropEnabled);

  iVar1 = FUN_002979c0(param_3);

  if (iVar1 != 0) {

    auVar7 = FUN_00297480(uVar2,extraout_x1,&cf_bubbleCropTop);

    uVar3 = auVar7._8_8_;

    if (auVar7._0_8_ == 0) {

      FUN_0029efa0(uVar2,uVar3,0x14,&cf_bubbleCropTop);

      uVar3 = extraout_x1_00;

    }

    auVar7 = FUN_00297480(uVar2,uVar3,&cf_bubbleCropLeft);

    uVar3 = auVar7._8_8_;

    if (auVar7._0_8_ == 0) {

      FUN_0029efa0(uVar2,uVar3,0x14,&cf_bubbleCropLeft);

      uVar3 = extraout_x1_01;

    }

    auVar7 = FUN_00297480(uVar2,uVar3,&cf_bubbleCropBottom);

    uVar3 = auVar7._8_8_;

    if (auVar7._0_8_ == 0) {

      FUN_0029efa0(uVar2,uVar3,0x14,&cf_bubbleCropBottom);

      uVar3 = extraout_x1_02;

    }

    auVar7 = FUN_00297480(uVar2,uVar3,&cf_bubbleCropRight);

    if (auVar7._0_8_ == 0) {

      FUN_0029efa0(uVar2,auVar7._8_8_,0x14,&cf_bubbleCropRight);

    }

  }

  FUN_002a4a40(uVar2);

  _objc_retain(param_3);

  IVar6 = param_3;

  if (param_3 == 0) {

    IVar5 = 0;

  }

  else {

    do {

      uVar3 = _objc_opt_class(&_OBJC_CLASS___UITableView);

      uVar4 = _objc_opt_isKindOfClass(IVar6,uVar3);

      if ((uVar4 & 1) != 0) {

        _objc_retain(IVar6);

        FUN_0029b140(IVar6);

        IVar5 = IVar6;

        break;

      }

      FUN_002a4880(IVar6);

      IVar5 = _objc_retainAutoreleasedReturnValue();

      _objc_release(IVar6);

      IVar6 = IVar5;

    } while (IVar5 != 0);

  }

  _objc_release(IVar5);

  _objc_release(IVar5);

  _objc_release(uVar2);

  _objc_release(param_3);

  return;

}




