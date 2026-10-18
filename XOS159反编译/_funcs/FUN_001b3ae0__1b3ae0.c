// FUN_001b3ae0 @0x1b3ae0


void FUN_001b3ae0(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 uVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 uVar5;

  long lVar6;

  long lVar7;

  undefined1 auVar8 [16];

  undefined1 auVar9 [16];

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

  lVar3 = *(long *)(param_1 + 0x30);

  uVar2 = *(undefined8 *)(param_1 + 0x38);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  lStack_128 = 0;

  local_130 = 0;

  uStack_118 = 0;

  local_120 = (long *)0x0;

  uStack_108 = 0;

  local_110 = 0;

  uStack_f8 = 0;

  uStack_100 = 0;

  FUN_001ba364(uVar2);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  uVar2 = auVar8._0_8_;

  auVar8 = FUN_00293880(uVar2,auVar8._8_8_,&local_130,auStack_e8,0x10);

  if (auVar8._0_8_ != 0) {

    lVar3 = lVar3 + 10;

    lVar6 = *local_120;

    do {

      uVar4 = auVar8._8_8_;

      lVar7 = 0;

      do {

        if (*local_120 != lVar6) {

          _objc_enumerationMutation(uVar2);

          uVar4 = extraout_x1;

        }

        uVar5 = *(undefined8 *)(lStack_128 + lVar7 * 8);

        auVar9 = FUN_00297480(uVar1,uVar4,uVar5);

        uVar4 = auVar9._8_8_;

        if (auVar9._0_8_ != lVar3) {

          FUN_0029efa0(uVar1,uVar4,lVar3,uVar5);

          uVar4 = extraout_x1_00;

        }

        lVar7 = lVar7 + 1;

      } while (auVar8._0_8_ != lVar7);

      auVar8 = FUN_00293880(uVar2,uVar4,&local_130,auStack_e8,0x10);

    } while (auVar8._0_8_ != 0);

  }

  _objc_release(uVar2);

  _objc_release(uVar1);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4a40();

  _objc_release(uVar2);

  FUN_0018dc7c();

  uVar2 = _objc_loadWeakRetained(param_1 + 0x28);

  FUN_002995c0();

  lVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  _objc_release(uVar2);

  if (lVar3 != 0) {

    uVar2 = _objc_loadWeakRetained(param_1 + 0x28);

    FUN_002995c0();

    lVar3 = _objc_retainAutoreleasedReturnValue();

    (**(code **)(lVar3 + 0x10))();

    _objc_release(lVar3);

    _objc_release(uVar2);

  }

  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();

  if (*(long *)PTR____stack_chk_guard_00388738 == local_68) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




