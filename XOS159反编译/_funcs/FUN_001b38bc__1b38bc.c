// FUN_001b38bc @0x1b38bc


void FUN_001b38bc(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 uVar6;

  long lVar7;

  long lVar8;

  undefined1 auVar9 [16];

  undefined1 auVar10 [16];

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

  lVar4 = *(long *)(param_1 + 0x30);

  lVar7 = *(long *)(param_1 + 0x38);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  lStack_128 = 0;

  local_130 = 0;

  uStack_118 = 0;

  local_120 = (long *)0x0;

  uVar3 = 0;

  if (lVar7 != 0) {

    uVar3 = 7;

  }

  uStack_108 = 0;

  local_110 = 0;

  uStack_f8 = 0;

  uStack_100 = 0;

  FUN_001ba364(lVar7);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  uVar2 = auVar9._0_8_;

  auVar9 = FUN_00293880(uVar2,auVar9._8_8_,&local_130,auStack_f0,0x10);

  if (auVar9._0_8_ != 0) {

    lVar7 = *local_120;

    do {

      uVar5 = auVar9._8_8_;

      lVar8 = 0;

      do {

        if (*local_120 != lVar7) {

          _objc_enumerationMutation(uVar2);

          uVar5 = extraout_x1;

        }

        uVar6 = *(undefined8 *)(lStack_128 + lVar8 * 8);

        auVar10 = FUN_00297480(uVar1,uVar5,uVar6);

        uVar5 = auVar10._8_8_;

        if (auVar10._0_8_ == lVar4 + 10) {

          FUN_0029efa0(uVar1,uVar5,uVar3,uVar6);

          uVar5 = extraout_x1_00;

        }

        lVar8 = lVar8 + 1;

      } while (auVar9._0_8_ != lVar8);

      auVar9 = FUN_00293880(uVar2,uVar5,&local_130,auStack_f0,0x10);

    } while (auVar9._0_8_ != 0);

  }

  _objc_release(uVar2);

  _objc_release(uVar1);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4a40();

  _objc_release(uVar3);

  FUN_0018dc7c();

  uVar3 = _objc_loadWeakRetained(param_1 + 0x28);

  FUN_002995c0();

  lVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  _objc_release(uVar3);

  if (lVar4 != 0) {

    uVar3 = _objc_loadWeakRetained(param_1 + 0x28);

    FUN_002995c0();

    lVar4 = _objc_retainAutoreleasedReturnValue();

    (**(code **)(lVar4 + 0x10))();

    _objc_release(lVar4);

    _objc_release(uVar3);

  }

  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




