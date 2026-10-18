// FUN_000e3dc8 @0xe3dc8


void FUN_000e3dc8(undefined8 param_1)



{

  int iVar1;

  undefined8 extraout_x1;

  undefined8 uVar2;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  double dVar3;

  undefined1 auVar4 [16];

  

  (*DAT_003e7db0)();

  if (DAT_003e7d99 == '\x01') {

    if (DAT_003e7d9b == '\x01') {

      iVar1 = FUN_000eb7a0(param_1);

      if (iVar1 != 0) {

        auVar4 = FUN_002978a0(param_1);

        uVar2 = auVar4._8_8_;

        if (((auVar4._0_8_ & 1) != 0) ||

           (dVar3 = (double)FUN_002916a0(param_1), uVar2 = extraout_x1, dVar3 != 1.0)) {

          FUN_0029e8a0(param_1,uVar2,0);

          FUN_0029cb60(0x3ff0000000000000,param_1);

          return;

        }

      }

    }

    else if ((DAT_003e7d9c == '\x01') && (iVar1 = FUN_000eb7a0(param_1), iVar1 != 0)) {

      FUN_0029df80(param_1,extraout_x1_00,0);

      FUN_00292dc0(&_OBJC_CLASS___UIColor);

      auVar4 = _objc_retainAutoreleasedReturnValue();

      FUN_0029cf60(param_1,auVar4._8_8_,auVar4._0_8_);

      _objc_release(auVar4._0_8_);

      FUN_0029cb60(0,param_1);

      FUN_0029e8a0(param_1,extraout_x1_01,1);

      return;

    }

  }

  return;

}




