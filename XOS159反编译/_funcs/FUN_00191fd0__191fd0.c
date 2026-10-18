// FUN_00191fd0 @0x191fd0


undefined8 FUN_00191fd0(long param_1,double *param_2)



{

  long *plVar1;

  int iVar2;

  long lVar3;

  ulong uVar4;

  undefined8 uVar5;

  double dVar6;

  undefined1 auVar7 [16];

  

  _objc_retain();

  uVar5 = 0;

  if ((param_1 == 0) || (param_2 == (double *)0x0)) goto LAB_00192088;

  FUN_0018da3c();

  if ((DAT_003e95c8 & 1) != 0) {

    auVar7 = _objc_opt_respondsToSelector(param_1,"viewModel");

    if ((auVar7._0_8_ & 1) != 0) {

      FUN_00299c80(param_1,auVar7._8_8_,"viewModel");

      lVar3 = _objc_retainAutoreleasedReturnValue();

      if ((lVar3 == 0) || (uVar4 = FUN_00191434(lVar3), (uVar4 & 1) == 0)) {

LAB_00192074:

        uVar5 = 0;

      }

      else {

        iVar2 = FUN_00191330(lVar3);

        plVar1 = &DAT_003e95b0;

        if (iVar2 == 0) {

          plVar1 = &DAT_003e95b8;

        }

        if (*plVar1 == 1) goto LAB_00192074;

        dVar6 = 0.0;

        if (0.0 <= 4.0 - (double)DAT_003e9598) {

          dVar6 = 4.0 - (double)DAT_003e9598;

        }

        *param_2 = dVar6 + -4.0;

        uVar5 = 1;

      }

      _objc_release(lVar3);

      goto LAB_00192088;

    }

  }

  uVar5 = 0;

LAB_00192088:

  _objc_release(param_1);

  return uVar5;

}




