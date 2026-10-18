// FUN_00097fa0 @0x97fa0


void FUN_00097fa0(undefined1 param_1 [16],double param_2,undefined8 param_3,double param_4,

                 undefined8 param_5)



{

  int iVar1;

  long lVar2;

  undefined8 uVar3;

  ulong uVar4;

  long lVar5;

  undefined8 extraout_x1;

  double dVar6;

  double dVar7;

  undefined1 auVar8 [16];

  

  (*DAT_003e77e8)();

  iVar1 = FUN_000a89d8();

  if (iVar1 != 0) {

    FUN_002a6280(param_5);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    if (lVar2 != 0) {

      _objc_getAssociatedObject(lVar2,PTR_LOOP_003e5cd0);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      uVar4 = FUN_002924e0();

      _objc_release(uVar3);

      if ((uVar4 & 1) != 0) {

        _objc_getAssociatedObject(lVar2,PTR_LOOP_003e5cc0);

        uVar3 = _objc_retainAutoreleasedReturnValue();

        uVar4 = FUN_002924e0();

        _objc_release(uVar3);

        if ((uVar4 & 1) != 0) {

          auVar8 = _objc_opt_respondsToSelector(param_5,"getHeadImageView");

          if ((auVar8._0_8_ & 1) == 0) {

            lVar5 = 0;

          }

          else {

            FUN_00299c80(param_5,auVar8._8_8_,"getHeadImageView");

            lVar5 = _objc_retainAutoreleasedReturnValue();

            if ((lVar5 != 0) && (uVar4 = FUN_002978a0(lVar5), (uVar4 & 1) == 0)) {

              FUN_002925a0(param_5);

              dVar6 = param_4;

              _objc_retain(lVar5);

              uVar3 = FUN_00295600(lVar5);

              dVar7 = (param_4 - dVar6) + -8.0 + (double)DAT_003e7b38;

              if (1.0 < ABS(param_2 - dVar7)) {

                FUN_00292180(&_OBJC_CLASS___CATransaction);

                FUN_0029dd40(&_OBJC_CLASS___CATransaction,extraout_x1,1);

                FUN_0029e5e0(uVar3,dVar7,param_3,dVar6,lVar5);

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

  return;

}




