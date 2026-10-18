// FUN_00221f48 @0x221f48


void FUN_00221f48(undefined8 param_1)



{

  byte bVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 uVar4;

  undefined8 uVar5;

  long lVar6;

  long lVar7;

  undefined1 auVar8 [16];

  undefined8 local_120;

  long lStack_118;

  long *local_110;

  undefined8 uStack_108;

  undefined8 local_100;

  undefined8 uStack_f8;

  undefined8 uStack_f0;

  undefined8 uStack_e8;

  undefined1 auStack_d8 [128];

  long local_58;

  

  local_58 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  bVar1 = DAT_003ead50;

  if ((DAT_003ead50 != 1) || ((DAT_003ead51 & 1) == 0)) {

    uStack_f8 = 0;

    local_100 = 0;

    uStack_e8 = 0;

    uStack_f0 = 0;

    lStack_118 = 0;

    local_120 = 0;

    uStack_108 = 0;

    local_110 = (long *)0x0;

    FUN_002a62e0(param_1);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    uVar2 = auVar8._0_8_;

    lVar3 = FUN_00293880(uVar2,auVar8._8_8_,&local_120,auStack_d8,0x10);

    if (lVar3 != 0) {

      lVar6 = *local_110;

      do {

        lVar7 = 0;

        do {

          if (*local_110 != lVar6) {

            _objc_enumerationMutation(uVar2);

          }

          uVar5 = *(undefined8 *)(lStack_118 + lVar7 * 8);

          FUN_00217b94(uVar5);

          auVar8 = FUN_00217d64(uVar5);

          uVar4 = auVar8._8_8_;

          if (((auVar8._0_8_ & 1) != 0) &&

             (FUN_00217f1c(uVar5), uVar4 = extraout_x1, (bVar1 & 1) == 0)) {

            FUN_0029ff40(uVar5);

            uVar4 = extraout_x1_00;

          }

          lVar7 = lVar7 + 1;

        } while (lVar3 != lVar7);

        lVar3 = FUN_00293880(uVar2,uVar4,&local_120,auStack_d8,0x10);

      } while (lVar3 != 0);

    }

    _objc_release(uVar2);

  }

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_58) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




