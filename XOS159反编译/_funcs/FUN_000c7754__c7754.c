// FUN_000c7754 @0xc7754


void FUN_000c7754(undefined8 param_1)



{

  byte bVar1;

  int iVar2;

  long lVar3;

  

  (*DAT_003e7cc8)();

  FUN_002a6520(param_1);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  bVar1 = DAT_003e7d10;

  _objc_release();

  if ((lVar3 != 0) && ((bVar1 & 1) != 0)) {

    iVar2 = FUN_000c93cc(param_1);

    if (iVar2 != 0) {

      bVar1 = FUN_000c94e4(param_1);

LAB_000c77b0:

      FUN_000c89a8(param_1,bVar1 & 1);

      return;

    }

    iVar2 = FUN_000c9784(param_1);

    if (iVar2 != 0) {

      if ((DAT_003e7d19 & 1) == 0) {

        FUN_000c6fa8();

      }

      if (DAT_003e7d10 == 1) {

        iVar2 = FUN_000c9880(param_1);

        if (iVar2 == 0) {

          iVar2 = FUN_000c9a38(param_1);

          if (iVar2 == 0) {

            iVar2 = FUN_000c9bf0(param_1);

            if (iVar2 == 0) {

              iVar2 = FUN_000c9da8(param_1);

              if (iVar2 == 0) {

                return;

              }

              bVar1 = DAT_003e7d13;

              if ((DAT_003e7d19 & 1) == 0) {

                FUN_000c6fa8();

                bVar1 = DAT_003e7d13;

              }

            }

            else {

              bVar1 = DAT_003e7d12;

              if ((DAT_003e7d19 & 1) == 0) {

                FUN_000c6fa8();

                bVar1 = DAT_003e7d12;

              }

            }

          }

          else {

            bVar1 = DAT_003e7d14;

            if ((DAT_003e7d19 & 1) == 0) {

              FUN_000c6fa8();

              bVar1 = DAT_003e7d14;

            }

          }

        }

        else {

          bVar1 = DAT_003e7d11;

          if ((DAT_003e7d19 & 1) == 0) {

            FUN_000c6fa8();

            bVar1 = DAT_003e7d11;

          }

        }

        goto LAB_000c77b0;

      }

    }

  }

  return;

}




