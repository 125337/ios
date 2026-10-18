// FUN_0021a71c @0x21a71c


void FUN_0021a71c(undefined1 param_1 [16],double param_2,undefined8 param_3)



{

  long lVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined8 uVar4;

  long lVar5;

  long lVar6;

  undefined8 uVar7;

  double dVar8;

  undefined1 auVar9 [16];

  undefined8 local_140;

  long lStack_138;

  long *local_130;

  undefined8 uStack_128;

  undefined8 local_120;

  undefined8 uStack_118;

  undefined8 uStack_110;

  undefined8 uStack_108;

  undefined1 auStack_f8 [128];

  long local_78;

  

  local_78 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  if (DAT_003eaa30 == '\x01' && DAT_003eaac8 == 6) {

    uVar7 = FUN_002935e0(param_3);

    dVar8 = param_2;

    _objc_getAssociatedObject(param_3,&DAT_003eaef6);

    lVar1 = _objc_retainAutoreleasedReturnValue();

    if ((lVar1 == 0) || (FUN_00290a80(lVar1), 0.5 <= ABS(dVar8 - param_2))) {

      FUN_002a60e0(uVar7,param_2,&_OBJC_CLASS___NSValue);

      uVar7 = _objc_retainAutoreleasedReturnValue();

      _objc_setAssociatedObject(param_3,&DAT_003eaef6,uVar7,1);

      _objc_release(uVar7);

      uStack_118 = 0;

      local_120 = 0;

      uStack_108 = 0;

      uStack_110 = 0;

      lStack_138 = 0;

      local_140 = 0;

      uStack_128 = 0;

      local_130 = (long *)0x0;

      FUN_002a62e0(param_3);

      auVar9 = _objc_retainAutoreleasedReturnValue();

      uVar7 = auVar9._0_8_;

      lVar2 = FUN_00293880(uVar7,auVar9._8_8_,&local_140,auStack_f8,0x10);

      if (lVar2 != 0) {

        lVar5 = *local_130;

        do {

          lVar6 = 0;

          do {

            if (*local_130 != lVar5) {

              _objc_enumerationMutation(uVar7);

            }

            uVar4 = *(undefined8 *)(lStack_138 + lVar6 * 8);

            uVar3 = _objc_opt_class(&objc::class_t::XZYCLG3DGroupCell);

            auVar9 = _objc_opt_isKindOfClass(uVar4,uVar3);

            uVar3 = auVar9._8_8_;

            if ((auVar9._0_8_ & 1) != 0) {

              FUN_002a5b00(uVar4);

              uVar3 = extraout_x1;

            }

            lVar6 = lVar6 + 1;

          } while (lVar2 != lVar6);

          lVar2 = FUN_00293880(uVar7,uVar3,&local_140,auStack_f8,0x10);

        } while (lVar2 != 0);

      }

      _objc_release(uVar7);

    }

    _objc_release(lVar1);

  }

  _objc_release(param_3);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_78) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




