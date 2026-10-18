// FUN_00132488 @0x132488


void FUN_00132488(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)



{

  undefined *puVar1;

  long lVar2;

  long lVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  ulong uVar7;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

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

  _objc_retain();

  _objc_retain(param_2);

  _objc_retain(param_3);

  _objc_retain(param_4);

  if (param_1 == 0) goto LAB_001327a4;

  if (DAT_003e8710 != -1) {

    FUN_0028f53c();

  }

  _objc_retain(param_1);

  _objc_retain(param_3);

  _objc_retain(param_4);

  lVar2 = FUN_00131ac4(param_1,0x2b);

  lVar3 = FUN_00131c60(param_4,0x17);

  _objc_getAssociatedObject(param_1,PTR_LOOP_003e6ae8);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  lVar3 = lVar2 + (param_3 >> 4) + lVar3;

  if ((lVar4 == 0) || (lVar2 = FUN_002a5a20(lVar4), lVar2 != lVar3)) {

LAB_001325a4:

    FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_00132b5c(param_1,uVar5,param_3,param_4,0);

    lVar2 = FUN_002937a0(uVar5);

    _objc_setAssociatedObject(param_1,PTR_LOOP_003e6af0,lVar2,1);

    puVar1 = PTR_LOOP_003e6ae8;

    FUN_00299480(&_OBJC_CLASS___NSNumber,extraout_x1,lVar3);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_setAssociatedObject(param_1,puVar1,uVar6,1);

    _objc_release(uVar6);

    _objc_release(uVar5);

  }

  else {

    _objc_getAssociatedObject(param_1,PTR_LOOP_003e6af0);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    if (lVar2 == 0) goto LAB_001325a4;

  }

  _objc_release(lVar4);

  _objc_release(param_4);

  _objc_release(param_3);

  _objc_release(param_1);

  uStack_108 = 0;

  local_110 = 0;

  uStack_f8 = 0;

  uStack_100 = 0;

  lStack_128 = 0;

  local_130 = 0;

  uStack_118 = 0;

  local_120 = (long *)0x0;

  _objc_retain(lVar2);

  lVar3 = FUN_00293880(lVar2,extraout_x1_00,&local_130,auStack_f0,0x10);

  if (lVar3 != 0) {

    lVar4 = *local_120;

    do {

      lVar8 = 0;

      do {

        if (*local_120 != lVar4) {

          _objc_enumerationMutation(lVar2);

        }

        uVar5 = *(undefined8 *)(lStack_128 + lVar8 * 8);

        if ((DAT_003e8708 == 0) || (uVar7 = _objc_opt_isKindOfClass(uVar5), (uVar7 & 1) == 0)) {

          if (DAT_003e86a0 != -1) {

            FUN_0028f550();

          }

          FUN_0013222c(uVar5,param_2);

          uVar5 = extraout_x1_02;

        }

        else {

          _objc_getAssociatedObject(uVar5,&DAT_0030e549);

          auVar9 = _objc_retainAutoreleasedReturnValue();

          uVar7 = FUN_002977c0(auVar9._0_8_,auVar9._8_8_,param_2);

          if ((uVar7 & 1) == 0) {

            auVar10 = _objc_opt_respondsToSelector(uVar5,"setOTextColor:");

            if ((auVar10._0_8_ & 1) != 0) {

              FUN_002a0020(uVar5,auVar10._8_8_,param_2);

            }

            _objc_setAssociatedObject(uVar5,&DAT_0030e549,param_2,1);

            FUN_0029ff20(uVar5);

          }

          _objc_release(auVar9._0_8_);

          uVar5 = extraout_x1_01;

        }

        lVar8 = lVar8 + 1;

      } while (lVar3 != lVar8);

      lVar3 = FUN_00293880(lVar2,uVar5,&local_130,auStack_f0,0x10);

    } while (lVar3 != 0);

  }

  _objc_release(lVar2);

  _objc_release(lVar2);

LAB_001327a4:

  _objc_release(param_4);

  _objc_release(param_3);

  _objc_release(param_2);

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




