// FUN_00191bb4 @0x191bb4


undefined8 FUN_00191bb4(double param_1,undefined8 param_2,double *param_3)



{

  long *plVar1;

  int iVar2;

  long lVar3;

  ulong uVar4;

  undefined8 uVar5;

  double dVar6;

  double dVar7;

  undefined1 auVar8 [16];

  

  _objc_retain();

  uVar5 = 0;

  if (param_3 != (double *)0x0) {

    FUN_0018da3c();

    if (((DAT_003e95c8 & 1) == 0) || (iVar2 = FUN_00191434(param_2), iVar2 == 0)) {

      uVar5 = 0;

    }

    else {

      iVar2 = FUN_00191330(param_2);

      plVar1 = &DAT_003e95b0;

      if (iVar2 == 0) {

        plVar1 = &DAT_003e95b8;

      }

      dVar6 = 0.0;

      if (0.0 <= 4.0 - (double)DAT_003e9598) {

        dVar6 = 4.0 - (double)DAT_003e9598;

      }

      if (*plVar1 == 1) {

        dVar6 = param_1;

        if (DAT_003e95d0 != 0) {

          auVar8 = _objc_opt_isKindOfClass(param_2);

          if ((auVar8._0_8_ & 1) != 0) {

            FUN_002a6080(param_2,auVar8._8_8_,&cf_parentModel);

            lVar3 = _objc_retainAutoreleasedReturnValue();

            if (((lVar3 != 0) &&

                (uVar4 = _objc_opt_respondsToSelector(lVar3,"rowHeight"), (uVar4 & 1) != 0)) &&

               (dVar6 = (double)_objc_msgSend(lVar3,"rowHeight"), dVar6 <= param_1)) {

              dVar6 = param_1;

            }

            _objc_release(lVar3);

          }

        }

        iVar2 = FUN_00191d84(param_2);

        dVar7 = 4.0;

        if (iVar2 == 0) {

          dVar7 = 3.0;

        }

        dVar7 = ((dVar6 - DAT_003e6ec0) + -4.0 + -2.0) - (dVar7 + (double)DAT_003e9590);

        dVar6 = 4.0;

        if (4.0 <= dVar7) {

          dVar6 = dVar7;

        }

      }

      *param_3 = dVar6;

      uVar5 = 1;

    }

  }

  _objc_release(param_2);

  return uVar5;

}




