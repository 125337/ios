// FUN_00029a74 @0x29a74


void FUN_00029a74(long param_1)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined8 uVar4;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

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

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00294500();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uStack_108 = 0;

  local_110 = 0;

  uStack_f8 = 0;

  uStack_100 = 0;

  lStack_128 = 0;

  local_130 = 0;

  uStack_118 = 0;

  local_120 = (long *)0x0;

  _objc_retain();

  auVar8 = FUN_00293880(uVar3,extraout_x1,&local_130,auStack_e8,0x10);

  if (auVar8._0_8_ != 0) {

    lVar6 = *local_120;

    do {

      uVar4 = auVar8._8_8_;

      lVar7 = 0;

      do {

        if (*local_120 != lVar6) {

          _objc_enumerationMutation(uVar3);

          uVar4 = extraout_x1_00;

        }

        uVar5 = *(undefined8 *)(lStack_128 + lVar7 * 8);

        iVar1 = FUN_00295f60(uVar5,uVar4,&cf_xzyHomeNP_);

        uVar4 = extraout_x1_01;

        if (iVar1 != 0) {

          FUN_0029b4a0(uVar2,extraout_x1_01,uVar5);

          uVar4 = extraout_x1_02;

        }

        lVar7 = lVar7 + 1;

      } while (auVar8._0_8_ != lVar7);

      auVar8 = FUN_00293880(uVar3,uVar4,&local_130,auStack_e8,0x10);

    } while (auVar8._0_8_ != 0);

  }

  _objc_release(uVar3);

  FUN_002a4a40(uVar2);

  FUN_0011afd8();

  FUN_0011afcc();

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_03,&cf__nd);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar8._8_8_,0,auVar8._0_8_,1);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  uVar4 = auVar9._0_8_;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar9._8_8_,&cf_nx_,0,0);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar4,auVar9._8_8_,auVar9._0_8_);

  _objc_release(auVar9._0_8_);

  FUN_0029a500(*(undefined8 *)(param_1 + 0x20),extraout_x1_04,uVar4,1,0);

  _objc_release(uVar4);

  _objc_release(auVar8._0_8_);

  _objc_release(uVar3);

  _objc_release(uVar2);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_68) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




