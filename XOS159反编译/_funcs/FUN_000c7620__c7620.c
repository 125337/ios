// FUN_000c7620 @0xc7620


void FUN_000c7620(undefined8 param_1)



{

  byte bVar1;

  int iVar2;

  

  (*DAT_003e7cc0)();

  if (DAT_003e7d10 == '\x01') {

    iVar2 = FUN_000c849c(param_1);

    bVar1 = DAT_003e7d17;

    if (iVar2 != 0) goto LAB_000c76d0;

    iVar2 = FUN_000c93cc(param_1);

    if (iVar2 != 0) {

      bVar1 = FUN_000c94e4(param_1);

      goto LAB_000c76d0;

    }

    iVar2 = FUN_000c9784(param_1);

    bVar1 = 0;

    if (iVar2 == 0) goto LAB_000c76d0;

    if ((DAT_003e7d19 & 1) == 0) {

      FUN_000c6fa8();

    }

    if (DAT_003e7d10 == '\x01') {

      iVar2 = FUN_000c9880(param_1);

      if (iVar2 == 0) {

        iVar2 = FUN_000c9a38(param_1);

        if (iVar2 == 0) {

          iVar2 = FUN_000c9bf0(param_1);

          if (iVar2 == 0) {

            iVar2 = FUN_000c9da8(param_1);

            bVar1 = 0;

            if ((iVar2 != 0) && (bVar1 = DAT_003e7d13, (DAT_003e7d19 & 1) == 0)) {

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

      goto LAB_000c76d0;

    }

  }

  bVar1 = 0;

LAB_000c76d0:

  FUN_000c89a8(param_1,bVar1 & 1);

  return;

}




