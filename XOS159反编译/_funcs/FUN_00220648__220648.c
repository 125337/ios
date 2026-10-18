// FUN_00220648 @0x220648


void FUN_00220648(undefined8 param_1,undefined8 param_2,long param_3)



{

  int iVar1;

  long lVar2;

  ulong uVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 uVar4;

  undefined8 uVar5;

  long lVar6;

  long lVar7;

  undefined1 auVar8 [16];

  undefined8 local_130;

  long lStack_128;

  long *local_120;

  undefined8 uStack_118;

  undefined8 local_110;

  undefined8 uStack_108;

  undefined8 uStack_100;

  undefined8 uStack_f8;

  undefined1 auStack_e8 [128];

  long local_68;

  

  local_68 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  _objc_retain(param_2);

  if ((param_3 != 0) && (lVar2 = FUN_00297fa0(param_2), lVar2 != 0)) {

    uStack_108 = 0;

    local_110 = 0;

    uStack_f8 = 0;

    uStack_100 = 0;

    lStack_128 = 0;

    local_130 = 0;

    uStack_118 = 0;

    local_120 = (long *)0x0;

    _objc_retain(param_1);

    lVar2 = FUN_00293880(param_1,extraout_x1,&local_130,auStack_e8,0x10);

    if (lVar2 != 0) {

      lVar6 = *local_120;

      do {

        lVar7 = 0;

        do {

          if (*local_120 != lVar6) {

            _objc_enumerationMutation(param_1);

          }

          uVar5 = *(undefined8 *)(lStack_128 + lVar7 * 8);

          iVar1 = FUN_00297760(uVar5);

          uVar4 = extraout_x1_00;

          if (iVar1 != 0) {

            FUN_00295de0(uVar5);

            auVar8 = _objc_retainAutoreleasedReturnValue();

            uVar3 = FUN_00297820(auVar8._0_8_,auVar8._8_8_,param_2);

            _objc_release(auVar8._0_8_);

            uVar4 = extraout_x1_01;

            if ((uVar3 & 1) != 0) {

              auVar8 = FUN_002a59c0(uVar5);

              uVar3 = auVar8._0_8_ + param_3;

              FUN_002a2340(uVar5,auVar8._8_8_,uVar3 & ((long)uVar3 >> 0x3f ^ 0xffffffffffffffffU));

              uVar4 = extraout_x1_02;

            }

          }

          lVar7 = lVar7 + 1;

        } while (lVar2 != lVar7);

        lVar2 = FUN_00293880(param_1,uVar4,&local_130,auStack_e8,0x10);

      } while (lVar2 != 0);

    }

    _objc_release(param_1);

  }

  _objc_release(param_2);

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_68) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




