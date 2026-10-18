// FUN_00285480 @0x285480


undefined1  [16] FUN_00285480(double param_1,undefined8 param_2)



{

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  long lVar1;

  undefined1 auVar2 [16];

  double dVar3;

  double dVar4;

  double dVar5;

  double dVar6;

  undefined8 uVar7;

  double dVar8;

  float local_48;

  float local_44;

  float local_40;

  float local_3c;

  long local_38;

  

  local_38 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  dVar6 = 0.0;

  uVar7 = 0;

  if (0.0 < param_1) {

    dVar6 = 1.0;

    uVar7 = 0;

    if (param_1 < 1.0) {

      FUN_00295860(param_2,extraout_x1,1,&local_40);

      FUN_00295860(param_2,extraout_x1_00,2,&local_48);

      lVar1 = 0x18;

      dVar6 = 1.0;

      dVar4 = 0.0;

      do {

        dVar5 = (dVar6 + dVar4) * 0.5;

        dVar8 = (1.0 - dVar5) * 3.0;

        dVar3 = dVar5;

        if (param_1 <=

            dVar5 * dVar5 * dVar8 * (double)local_48 +

            (double)local_40 * dVar5 * (1.0 - dVar5) * dVar8 + dVar5 * dVar5 * dVar5) {

          dVar3 = dVar4;

          dVar6 = dVar5;

        }

        lVar1 = lVar1 + -1;

        dVar4 = dVar3;

      } while (lVar1 != 0);

      dVar6 = (dVar6 + dVar3) * 0.5;

      dVar4 = (1.0 - dVar6) * 3.0;

      dVar6 = dVar6 * dVar6 * dVar4 * (double)local_44 +

              (double)local_3c * dVar6 * (1.0 - dVar6) * dVar4 + dVar6 * dVar6 * dVar6;

    }

  }

  _objc_release(param_2);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_38) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  auVar2._8_8_ = uVar7;

  auVar2._0_8_ = dVar6;

  return auVar2;

}




