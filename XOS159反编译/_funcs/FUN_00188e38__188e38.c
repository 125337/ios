// FUN_00188e38 @0x188e38


void FUN_00188e38(undefined8 param_1,undefined8 param_2,undefined8 param_3)



{

  ulong uVar1;

  long lVar2;

  long lVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  long lVar4;

  long lVar5;

  long lVar6;

  undefined1 auVar7 [16];

  undefined8 local_150;

  long lStack_148;

  long *local_140;

  undefined8 uStack_138;

  undefined8 local_130;

  undefined8 uStack_128;

  undefined8 uStack_120;

  undefined8 uStack_118;

  undefined *local_108;

  undefined8 local_100;

  code *local_f8;

  undefined *puStack_f0;

  undefined1 auStack_e8 [8];

  undefined1 auStack_e0 [8];

  undefined1 auStack_d8 [128];

  long local_58;

  

  local_58 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_3);

  (*DAT_003e8d50)(param_1,param_2,param_3);

  uVar1 = FUN_00188834();

  if ((uVar1 & 1) != 0) {

    FUN_00291d00(param_1);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    if ((lVar2 != 0) && (lVar3 = FUN_00293860(lVar2), lVar3 != 0)) {

      uStack_128 = 0;

      local_130 = 0;

      uStack_118 = 0;

      uStack_120 = 0;

      lStack_148 = 0;

      local_150 = 0;

      uStack_138 = 0;

      local_140 = (long *)0x0;

      _objc_retain(lVar2);

      lVar3 = FUN_00293880(lVar2,extraout_x1,&local_150,auStack_d8,0x10);

      if (lVar3 != 0) {

        lVar5 = *local_140;

        do {

          lVar6 = 0;

          do {

            if (*local_140 != lVar5) {

              _objc_enumerationMutation(lVar2);

            }

            auVar7 = FUN_00294ac0(*(undefined8 *)(lStack_148 + lVar6 * 8));

            lVar4 = lVar2;

            if (auVar7._0_8_ == 0x1869e) goto LAB_00189098;

            lVar6 = lVar6 + 1;

          } while (lVar3 != lVar6);

          lVar3 = FUN_00293880(lVar2,auVar7._8_8_,&local_150,auStack_d8,0x10);

        } while (lVar3 != 0);

      }

      _objc_release(lVar2);

      _objc_retain(param_1);

      _objc_getClass("MMMultiMenuItem");

      auVar7 = _objc_alloc_init();

      lVar4 = auVar7._0_8_;

      FUN_0029ffa0(lVar4,auVar7._8_8_,&cf_Lr);

      FUN_0029df60(lVar4,extraout_x1_00,0x1869e);

      FUN_0029d100(lVar4,extraout_x1_01,0);

      FUN_002a1bc0(lVar4,extraout_x1_02,0);

      FUN_002a1fe0(0x402e000000000000,lVar4);

      FUN_002a64a0(&_OBJC_CLASS___UIColor);

      auVar7 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1fa0(lVar4,auVar7._8_8_,auVar7._0_8_);

      _objc_release(auVar7._0_8_);

      FUN_00293000(&_OBJC_CLASS___UIColor,extraout_x1_03,&PTR___NSConcreteGlobalBlock_0038de80);

      auVar7 = _objc_retainAutoreleasedReturnValue();

      FUN_0029cf60(lVar4,auVar7._8_8_,auVar7._0_8_);

      _objc_initWeak(auStack_e0,param_1);

      local_108 = PTR___NSConcreteStackBlock_003886f0;

      local_100 = 0xc2000000;

      local_f8 = FUN_00189260;

      puStack_f0 = &DAT_0038a150;

      _objc_copyWeak(auStack_e8,auStack_e0);

      FUN_0029d480(lVar4,extraout_x1_04,&local_108);

      _objc_destroyWeak(auStack_e8);

      _objc_destroyWeak(auStack_e0);

      _objc_release(auVar7._0_8_);

      _objc_release(param_1);

      FUN_00297000(lVar2,extraout_x1_05,lVar4,0);

LAB_00189098:

      _objc_release(lVar4);

    }

    _objc_release(lVar2);

  }

  _objc_release(param_3);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_58) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return;

}




