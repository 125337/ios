// FUN_000a6b38 @0xa6b38


uint FUN_000a6b38(undefined8 param_1)



{

  undefined8 uVar1;

  long lVar2;

  long lVar3;

  ulong uVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 uVar5;

  undefined8 extraout_x1_01;

  uint uVar6;

  undefined1 auVar7 [16];

  

  _objc_retain();

  lVar2 = FUN_00297fa0(param_1);

  if (lVar2 == 0) {

    uVar6 = 0;

  }

  else {

    if (DAT_003e79f8 != -1) {

      FUN_0028efc8();

    }

    uVar1 = DAT_003e7620;

    _objc_retain(DAT_003e7620);

    _objc_sync_enter(uVar1);

    uVar5 = extraout_x1;

    if (DAT_003e7618 == 0) {

      FUN_0029c6e0(&_OBJC_CLASS___NSMutableSet);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      lVar2 = DAT_003e7618;

      DAT_003e7618 = lVar3;

      _objc_release(lVar2);

      uVar5 = extraout_x1_00;

    }

    auVar7 = FUN_00293560(DAT_003e7618,uVar5,param_1);

    if ((auVar7._0_8_ & 1) == 0) {

      FUN_00291240(DAT_003e7618,auVar7._8_8_,param_1);

      uVar4 = FUN_00293860(DAT_003e7618);

      if (1000 < uVar4) {

        FUN_0029b240(DAT_003e7618);

        FUN_00291240(DAT_003e7618,extraout_x1_01,param_1);

      }

    }

    uVar6 = auVar7._0_4_ ^ 1;

    _objc_sync_exit(uVar1);

    _objc_release(uVar1);

  }

  _objc_release(param_1);

  return uVar6;

}




