// FUN_001c93c0 @0x1c93c0


void FUN_001c93c0(void)



{

  undefined8 uVar1;

  long lVar2;

  long lVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 uVar4;

  long lVar5;

  long lVar6;

  undefined *local_170;

  undefined8 local_168;

  code *local_160;

  undefined *puStack_158;

  long local_150;

  undefined8 uStack_148;

  undefined8 local_140;

  long lStack_138;

  long *local_130;

  undefined8 uStack_128;

  undefined8 local_120;

  undefined8 uStack_118;

  undefined8 uStack_110;

  undefined8 uStack_108;

  undefined1 auStack_100 [128];

  long local_80;

  

  local_80 = *(long *)PTR____stack_chk_guard_00388738;

  if (DAT_003eaf08 != -1) {

    thunk_FUN_00223ad4();

  }

  _os_unfair_lock_lock(&DAT_003ead54);

  FUN_00291620(DAT_003eaa70);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _os_unfair_lock_unlock(&DAT_003ead54);

  uStack_118 = 0;

  local_120 = 0;

  uStack_108 = 0;

  uStack_110 = 0;

  lStack_138 = 0;

  local_140 = 0;

  uStack_128 = 0;

  local_130 = (long *)0x0;

  _objc_retain(uVar1);

  lVar2 = FUN_00293880(uVar1,extraout_x1,&local_140,auStack_100,0x10);

  if (lVar2 != 0) {

    lVar5 = *local_130;

    do {

      lVar6 = 0;

      do {

        if (*local_130 != lVar5) {

          _objc_enumerationMutation(uVar1);

        }

        uVar4 = *(undefined8 *)(lStack_138 + lVar6 * 8);

        FUN_00209f2c(uVar4);

        FUN_0020b454(uVar4);

        FUN_002a6080(uVar4,extraout_x1_00,&cf_m_tableView);

        lVar3 = _objc_retainAutoreleasedReturnValue();

        if (lVar3 != 0) {

          local_170 = PTR___NSConcreteStackBlock_003886f0;

          local_168 = 0xc2000000;

          local_160 = FUN_0020b4dc;

          puStack_158 = &DAT_00388d50;

          _objc_retain(lVar3);

          local_150 = lVar3;

          uStack_148 = uVar4;

          FUN_00299ce0(&_OBJC_CLASS___UIView,extraout_x1_01,&local_170);

          _objc_release(local_150);

        }

        _objc_release(lVar3);

        FUN_0020b508(uVar4);

        FUN_0020b734(uVar4,1);

        lVar6 = lVar6 + 1;

      } while (lVar2 != lVar6);

      lVar2 = FUN_00293880(uVar1,extraout_x1_02,&local_140,auStack_100,0x10);

    } while (lVar2 != 0);

  }

  _objc_release(uVar1);

  _objc_release(uVar1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_80) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




