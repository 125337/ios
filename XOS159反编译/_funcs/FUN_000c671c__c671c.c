// FUN_000c671c @0xc671c


/* WARNING: Removing unreachable block (ram,0x000c6940) */



void FUN_000c671c(undefined1 param_1 [16],double param_2,undefined8 param_3,double param_4,

                 undefined8 param_5,undefined8 param_6)



{

  bool bVar1;

  long lVar2;

  ulong uVar3;

  undefined8 uVar4;

  long lVar5;

  undefined8 extraout_x1;

  double dVar6;

  double dVar7;

  undefined1 auVar8 [16];

  

  if ((DAT_003eb410 == '\x01') && (lVar2 = FUN_00297fa0(DAT_003eb3a8), lVar2 != 0)) {

    bVar1 = true;

    DAT_003eb3b0 = 1;

  }

  else {

    bVar1 = false;

  }

  (*DAT_003e7c60)(param_5,param_6);

  if (bVar1) {

    DAT_003eb3b0 = 0;

  }

  uVar3 = FUN_000a89d8();

  if ((uVar3 & 1) == 0) {

    return;

  }

  FUN_002a6280(param_5);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  if (lVar2 != 0) {

    _objc_getAssociatedObject(lVar2,PTR_LOOP_003e5cd0);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    uVar3 = FUN_002924e0();

    _objc_release(uVar4);

    if ((uVar3 & 1) != 0) {

      _objc_getAssociatedObject(lVar2,PTR_LOOP_003e5cc0);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      uVar3 = FUN_002924e0();

      _objc_release(uVar4);

      if ((uVar3 & 1) != 0) {

        auVar8 = _objc_opt_respondsToSelector(param_5,"getHeadImageView");

        if ((auVar8._0_8_ & 1) == 0) {

          lVar5 = 0;

        }

        else {

          FUN_00299c80(param_5,auVar8._8_8_,"getHeadImageView");

          lVar5 = _objc_retainAutoreleasedReturnValue();

          if ((lVar5 != 0) && (uVar3 = FUN_002978a0(lVar5), (uVar3 & 1) == 0)) {

            FUN_002925a0(param_5);

            dVar6 = param_4;

            _objc_retain(lVar5);

            uVar4 = FUN_00295600(lVar5);

            dVar7 = (param_4 - dVar6) + -8.0 + (double)DAT_003e7b38;

            if (1.0 < ABS(param_2 - dVar7)) {

              FUN_00292180(&_OBJC_CLASS___CATransaction);

              FUN_0029dd40(&_OBJC_CLASS___CATransaction,extraout_x1,1);

              FUN_0029e5e0(uVar4,dVar7,param_3,dVar6,lVar5);

              FUN_002930a0(&_OBJC_CLASS___CATransaction);

            }

            _objc_release(lVar5);

          }

        }

        _objc_release(lVar5);

      }

    }

  }

  _objc_release(lVar2);

  return;

}




