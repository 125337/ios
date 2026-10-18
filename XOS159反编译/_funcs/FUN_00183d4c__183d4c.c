// FUN_00183d4c @0x183d4c


undefined8 FUN_00183d4c(undefined8 param_1,undefined8 param_2)



{

  undefined8 uVar1;

  ulong uVar2;

  long lVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  long lVar4;

  undefined1 auVar5 [16];

  undefined1 auVar6 [16];

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

  _objc_retain(param_2);

  uVar1 = _objc_opt_class(&_OBJC_CLASS___NSString);

  uVar2 = _objc_opt_isKindOfClass(param_1,uVar1);

  if (((uVar2 & 1) == 0) || (lVar3 = FUN_00297fa0(param_1), lVar3 == 0)) {

    uVar1 = 0;

  }

  else {

    uStack_f8 = 0;

    local_100 = 0;

    uStack_e8 = 0;

    uStack_f0 = 0;

    lStack_118 = 0;

    local_120 = 0;

    uStack_108 = 0;

    local_110 = (long *)0x0;

    _objc_retain(param_2);

    auVar5 = FUN_00293880(param_2,extraout_x1,&local_120,auStack_d8,0x10);

    uVar1 = 0;

    if (auVar5._0_8_ != 0) {

      lVar3 = *local_110;

      do {

        uVar1 = auVar5._8_8_;

        lVar4 = 0;

        do {

          if (*local_110 != lVar3) {

            _objc_enumerationMutation(param_2);

            uVar1 = extraout_x1_00;

          }

          auVar6 = FUN_0029aba0(param_1,uVar1,*(undefined8 *)(lStack_118 + lVar4 * 8));

          uVar1 = auVar6._8_8_;

          if (auVar6._0_8_ != 0x7fffffffffffffff) {

            uVar1 = 1;

            goto LAB_00183e5c;

          }

          lVar4 = lVar4 + 1;

        } while (auVar5._0_8_ != lVar4);

        auVar5 = FUN_00293880(param_2,uVar1,&local_120,auStack_d8,0x10);

      } while (auVar5._0_8_ != 0);

      uVar1 = 0;

    }

LAB_00183e5c:

    _objc_release(param_2);

  }

  _objc_release(param_2);

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_58) {

    return uVar1;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




