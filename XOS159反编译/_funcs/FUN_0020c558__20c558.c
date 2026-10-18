// FUN_0020c558 @0x20c558


void FUN_0020c558(undefined8 param_1)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  long lVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  long lVar6;

  undefined8 uVar7;

  long lVar8;

  undefined1 auVar9 [16];

  undefined1 auVar10 [16];

  undefined1 auVar11 [16];

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

  if (DAT_003ea9f0 != 0) {

    auVar9 = FUN_00297fa0(param_1);

    if (auVar9._0_8_ == 0) {

      FUN_0029b240(DAT_003ea9f0);

    }

    else {

      FUN_0029b4a0(DAT_003ea9f0,auVar9._8_8_,param_1);

      FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf_custom____);

      auVar9 = _objc_retainAutoreleasedReturnValue();

      FUN_002a4680(&_OBJC_CLASS___NSString,auVar9._8_8_,&cf_side_custom____);

      auVar10 = _objc_retainAutoreleasedReturnValue();

      FUN_002a4680(&_OBJC_CLASS___NSString,auVar10._8_8_,&cf_side_code____);

      uVar2 = _objc_retainAutoreleasedReturnValue();

      uStack_108 = 0;

      local_110 = 0;

      uStack_f8 = 0;

      uStack_100 = 0;

      lStack_128 = 0;

      local_130 = 0;

      uStack_118 = 0;

      local_120 = (long *)0x0;

      FUN_00291600(DAT_003ea9f0);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      uVar4 = FUN_002937a0();

      _objc_release(uVar3);

      lVar5 = FUN_00293880(uVar4,extraout_x1_00,&local_130,auStack_f0,0x10);

      if (lVar5 != 0) {

        lVar8 = *local_120;

        do {

          lVar6 = 0;

          do {

            if (*local_120 != lVar8) {

              _objc_enumerationMutation(uVar4);

            }

            uVar7 = *(undefined8 *)(lStack_128 + lVar6 * 8);

            uVar3 = _objc_opt_class(&_OBJC_CLASS___NSString);

            auVar11 = _objc_opt_isKindOfClass(uVar7,uVar3);

            uVar3 = auVar11._8_8_;

            if (((auVar11._0_8_ & 1) != 0) &&

               (((auVar11 = FUN_00295f60(uVar7,uVar3,auVar9._0_8_), uVar3 = auVar11._8_8_,

                 (auVar11._0_8_ & 1) != 0 ||

                 (auVar11 = FUN_00295f60(uVar7,uVar3,auVar10._0_8_), uVar3 = auVar11._8_8_,

                 (auVar11._0_8_ & 1) != 0)) ||

                (iVar1 = FUN_00295f60(uVar7,uVar3,uVar2), uVar3 = extraout_x1_01, iVar1 != 0)))) {

              FUN_0029b4a0(DAT_003ea9f0,uVar3,uVar7);

              uVar3 = extraout_x1_02;

            }

            lVar6 = lVar6 + 1;

          } while (lVar5 != lVar6);

          lVar5 = FUN_00293880(uVar4,uVar3,&local_130,auStack_f0,0x10);

        } while (lVar5 != 0);

      }

      _objc_release(uVar4);

      _objc_release(uVar2);

      _objc_release(auVar10._0_8_);

      _objc_release(auVar9._0_8_);

    }

  }

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




