// dealloc @0x2735c0


/* Function Stack Size: 0x10 bytes */



void XZYHomeDockLiquidContainer::dealloc(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 extraout_x1;

  long lVar2;

  long lVar3;

  long lVar4;

  undefined1 auVar5 [16];

  ID local_120;

  class_t *pcStack_118;

  undefined8 local_110;

  long lStack_108;

  long *local_100;

  undefined8 uStack_f8;

  undefined8 local_f0;

  undefined8 uStack_e8;

  undefined8 uStack_e0;

  undefined8 uStack_d8;

  undefined1 auStack_c8 [128];

  long local_48;

  

  local_48 = *(long *)PTR____stack_chk_guard_00388738;

  lVar2 = (long)_selectionTapRecognizer;

  FUN_002a6220(*(undefined8 *)(param_1 + lVar2));

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b360(auVar5._0_8_,auVar5._8_8_,*(undefined8 *)(param_1 + lVar2));

  _objc_release(auVar5._0_8_);

  FUN_00294200(&_OBJC_CLASS___NSNotificationCenter);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b4e0(auVar5._0_8_,auVar5._8_8_,param_1);

  _objc_release(auVar5._0_8_);

  FUN_002999c0(param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b340();

  _objc_release(uVar1);

  uStack_e8 = 0;

  local_f0 = 0;

  uStack_d8 = 0;

  uStack_e0 = 0;

  lStack_108 = 0;

  local_110 = 0;

  uStack_f8 = 0;

  local_100 = (long *)0x0;

  FUN_00292e80(param_1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar5._0_8_;

  lVar2 = FUN_00293880(uVar1,auVar5._8_8_,&local_110,auStack_c8,0x10);

  if (lVar2 != 0) {

    lVar3 = *local_100;

    do {

      lVar4 = 0;

      do {

        if (*local_100 != lVar3) {

          _objc_enumerationMutation(uVar1);

        }

        FUN_0029b340(*(undefined8 *)(lStack_108 + lVar4 * 8));

        lVar4 = lVar4 + 1;

      } while (lVar2 != lVar4);

      lVar2 = FUN_00293880(uVar1,extraout_x1,&local_110,auStack_c8,0x10);

    } while (lVar2 != 0);

  }

  _objc_release(uVar1);

  pcStack_118 = &objc::class_t::XZYHomeDockLiquidContainer;

  local_120 = param_1;

  _objc_msgSendSuper2(&local_120,"dealloc");

  if (*(long *)PTR____stack_chk_guard_00388738 == local_48) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




