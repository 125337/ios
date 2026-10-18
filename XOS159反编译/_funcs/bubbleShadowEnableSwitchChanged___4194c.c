// bubbleShadowEnableSwitchChanged: @0x4194c


/* Function Stack Size: 0x18 bytes */



void _0x2f19de29::bubbleShadowEnableSwitchChanged_(ID param_1,SEL param_2,ID param_3)



{

  bool bVar1;

  undefined8 uVar2;

  long lVar3;

  long lVar4;

  long lVar5;

  undefined8 uVar6;

  long lVar7;

  long lVar8;

  long lVar9;

  undefined8 extraout_x1;

  long lVar10;

  long lVar11;

  byte bVar12;

  undefined1 auVar13 [16];

  undefined8 local_130;

  long lStack_128;

  long *local_120;

  undefined8 uStack_118;

  undefined8 local_110;

  undefined8 uStack_108;

  undefined8 uStack_100;

  undefined8 uStack_f8;

  undefined1 auStack_f0 [128];

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_3);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  auVar13 = FUN_002979c0(param_3);

  FUN_0029d080(uVar2,auVar13._8_8_,auVar13._0_8_,&cf_xzyBubbleShadowEnabled);

  FUN_002a4a40(uVar2);

  FUN_002990e0(param_1);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_getAssociatedObject(param_1,"bubbleNavController");

  lVar4 = _objc_retainAutoreleasedReturnValue();

  if (lVar4 == 0) {

    bVar12 = 0;

    lVar5 = 0;

  }

  else {

    FUN_00299260(lVar4);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    if (lVar5 == 0) {

      bVar12 = 0;

    }

    else {

      _objc_retain(lVar5);

      _objc_release(lVar3);

      bVar12 = 1;

      lVar3 = lVar5;

    }

  }

  FUN_002a5520(lVar3);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220();

  auVar13 = _objc_retainAutoreleasedReturnValue();

  FUN_002a62a0(auVar13._0_8_,auVar13._8_8_,0x3f1);

  lVar7 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar13._0_8_);

  _objc_release(uVar6);

  if (lVar7 != 0) {

    FUN_0029b140(lVar7);

  }

  FUN_002a6220(param_1);

  auVar13 = _objc_retainAutoreleasedReturnValue();

  FUN_002a62a0(auVar13._0_8_,auVar13._8_8_,0x3eb);

  lVar8 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar13._0_8_);

  bVar1 = (bool)(bVar12 ^ 1);

  if (lVar8 != 0) {

    bVar1 = true;

  }

  if (!bVar1) {

    uStack_108 = 0;

    local_110 = 0;

    uStack_f8 = 0;

    uStack_100 = 0;

    lStack_128 = 0;

    local_130 = 0;

    uStack_118 = 0;

    local_120 = (long *)0x0;

    FUN_002a6260(lVar5);

    auVar13 = _objc_retainAutoreleasedReturnValue();

    uVar6 = auVar13._0_8_;

    lVar9 = FUN_00293880(uVar6,auVar13._8_8_,&local_130,auStack_f0,0x10);

    if (lVar9 != 0) {

      lVar10 = *local_120;

      do {

        lVar11 = 0;

        do {

          if (*local_120 != lVar10) {

            _objc_enumerationMutation(uVar6);

          }

          FUN_002a6220(*(undefined8 *)(lStack_128 + lVar11 * 8));

          auVar13 = _objc_retainAutoreleasedReturnValue();

          FUN_002a62a0(auVar13._0_8_,auVar13._8_8_,0x3eb);

          lVar8 = _objc_retainAutoreleasedReturnValue();

          _objc_release(auVar13._0_8_);

          if (lVar8 != 0) goto LAB_00041b98;

          lVar11 = lVar11 + 1;

        } while (lVar9 != lVar11);

        lVar9 = FUN_00293880(uVar6,extraout_x1,&local_130,auStack_f0,0x10);

      } while (lVar9 != 0);

    }

    lVar8 = 0;

LAB_00041b98:

    _objc_release(uVar6);

  }

  if (lVar8 != 0) {

    FUN_0029b140(lVar8);

  }

  _objc_release(lVar8);

  _objc_release(lVar7);

  _objc_release(lVar5);

  _objc_release(lVar4);

  _objc_release(lVar3);

  _objc_release(uVar2);

  _objc_release(param_3);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




