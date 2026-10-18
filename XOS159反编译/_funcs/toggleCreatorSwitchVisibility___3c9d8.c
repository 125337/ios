// toggleCreatorSwitchVisibility: @0x3c9d8


/* Function Stack Size: 0x18 bytes */



void _0x2f19de29::toggleCreatorSwitchVisibility_(ID param_1,SEL param_2,ID param_3)



{

  uint uVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 extraout_x1;

  undefined1 auVar5 [16];

  

  lVar2 = FUN_002a4240(param_3);

  if (lVar2 == 1) {

    _objc_getAssociatedObject(param_1,"showCreatorPermissionSwitch");

    uVar3 = _objc_retainAutoreleasedReturnValue();

    uVar1 = FUN_002924e0();

    _objc_release(uVar3);

    FUN_00299380(&_OBJC_CLASS___NSNumber,extraout_x1,uVar1 ^ 1);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_setAssociatedObject(param_1,"showCreatorPermissionSwitch",uVar3,1);

    _objc_release(uVar3);

    FUN_002990e0(param_1);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_002a5520();

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_002a6220();

    auVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_002a62a0(auVar5._0_8_,auVar5._8_8_,0x3ea);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar5._0_8_);

    _objc_release(uVar4);

    _objc_release(uVar3);

    if (lVar2 != 0) {

      uVar3 = _objc_opt_class(&_OBJC_CLASS___UITableView);

      auVar5 = _objc_opt_isKindOfClass(lVar2,uVar3);

      if ((auVar5._0_8_ & 1) != 0) {

        FUN_00296800(&_OBJC_CLASS___NSIndexSet,auVar5._8_8_,6);

        auVar5 = _objc_retainAutoreleasedReturnValue();

        FUN_0029b1c0(lVar2,auVar5._8_8_,auVar5._0_8_,100);

        _objc_release(auVar5._0_8_);

      }

    }

    _objc_release(lVar2);

    return;

  }

  return;

}




