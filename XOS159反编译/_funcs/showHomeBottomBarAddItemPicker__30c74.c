// showHomeBottomBarAddItemPicker @0x30c74


/* Function Stack Size: 0x10 bytes */



void _0x2f19de29::showHomeBottomBarAddItemPicker(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  long lVar2;

  long lVar3;

  undefined8 uVar4;

  ulong uVar5;

  undefined8 uVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  undefined8 extraout_x1_08;

  undefined8 extraout_x1_09;

  long lVar7;

  long lVar8;

  undefined8 uVar9;

  undefined1 auVar10 [16];

  undefined1 auVar11 [16];

  undefined *local_248;

  undefined8 local_240;

  code *local_238;

  undefined *puStack_230;

  long local_228;

  undefined8 uStack_220;

  ID local_218;

  undefined8 local_210;

  long lStack_208;

  long *local_200;

  undefined8 uStack_1f8;

  undefined8 local_1f0;

  undefined8 uStack_1e8;

  undefined8 uStack_1e0;

  undefined8 uStack_1d8;

  undefined8 local_1d0;

  long lStack_1c8;

  long *local_1c0;

  undefined8 uStack_1b8;

  undefined8 local_1b0;

  undefined8 uStack_1a8;

  undefined8 uStack_1a0;

  undefined8 uStack_198;

  undefined1 auStack_188 [128];

  undefined1 auStack_108 [128];

  long local_88;

  

  local_88 = *(long *)PTR____stack_chk_guard_00388738;

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_00291d40(auVar10._0_8_,auVar10._8_8_,&cf_xzyHomeBottomBarPopupItems);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  lVar2 = FUN_00299020();

  _objc_release(uVar1);

  _objc_release(auVar10._0_8_);

  if (lVar2 == 0) {

    FUN_00291d80(&_OBJC_CLASS___NSMutableArray,extraout_x1,

                 &PTR__OBJC_CLASS___NSConstantArray_003bda80);

    lVar2 = _objc_retainAutoreleasedReturnValue();

  }

  FUN_0029c6e0(&_OBJC_CLASS___NSMutableSet);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  uStack_1a8 = 0;

  local_1b0 = 0;

  uStack_198 = 0;

  uStack_1a0 = 0;

  uStack_1b8 = 0;

  local_1c0 = (long *)0x0;

  lStack_1c8 = 0;

  local_1d0 = 0;

  _objc_retain(lVar2);

  lVar3 = FUN_00293880(lVar2,extraout_x1_00,&local_1d0,auStack_108,0x10);

  if (lVar3 != 0) {

    lVar7 = *local_1c0;

    do {

      lVar8 = 0;

      do {

        if (*local_1c0 != lVar7) {

          _objc_enumerationMutation(lVar2);

        }

        FUN_002974a0(*(undefined8 *)(lStack_1c8 + lVar8 * 8));

        FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_01,&cf__ld);

        auVar10 = _objc_retainAutoreleasedReturnValue();

        FUN_00291240(uVar1,auVar10._8_8_,auVar10._0_8_);

        _objc_release(auVar10._0_8_);

        lVar8 = lVar8 + 1;

      } while (lVar3 != lVar8);

      lVar3 = FUN_00293880(lVar2,extraout_x1_02,&local_1d0,auStack_108,0x10);

    } while (lVar3 != 0);

  }

  _objc_release(lVar2);

  FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1_03,&cf_mReQS,&cf_bmRveQS,0);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  uVar4 = auVar10._0_8_;

  uStack_1e8 = 0;

  local_1f0 = 0;

  uStack_1d8 = 0;

  uStack_1e0 = 0;

  lStack_208 = 0;

  local_210 = 0;

  uStack_1f8 = 0;

  local_200 = (long *)0x0;

  lVar3 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bda68,auVar10._8_8_,&local_210,

                       auStack_188,0x10);

  if (lVar3 != 0) {

    lVar7 = *local_200;

    do {

      lVar8 = 0;

      do {

        if (*local_200 != lVar7) {

          _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_003bda68);

        }

        uVar9 = *(undefined8 *)(lStack_208 + lVar8 * 8);

        FUN_002974a0(uVar9);

        FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_04,&cf__ld);

        auVar10 = _objc_retainAutoreleasedReturnValue();

        uVar5 = FUN_00293560(uVar1,auVar10._8_8_,auVar10._0_8_);

        if ((uVar5 & 1) == 0) {

          FUN_002974a0(uVar9);

          FUN_00237f98();

          uVar6 = _objc_retainAutoreleasedReturnValue();

          local_248 = PTR___NSConcreteStackBlock_003886f0;

          local_240 = 0xc2000000;

          local_238 = FUN_0003121c;

          puStack_230 = &DAT_00388c90;

          _objc_retain(lVar2);

          local_228 = lVar2;

          uStack_220 = uVar9;

          local_218 = param_1;

          FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_05,uVar6,0,&local_248);

          auVar11 = _objc_retainAutoreleasedReturnValue();

          FUN_00290fe0(uVar4,auVar11._8_8_,auVar11._0_8_);

          _objc_release(auVar11._0_8_);

          _objc_release(uVar6);

          _objc_release(local_228);

        }

        _objc_release(auVar10._0_8_);

        lVar8 = lVar8 + 1;

      } while (lVar3 != lVar8);

      lVar3 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bda68,extraout_x1_06,&local_210,

                           auStack_188,0x10);

    } while (lVar3 != 0);

  }

  FUN_00290f00(uVar4);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  lVar3 = FUN_00293860();

  _objc_release(uVar9);

  if (lVar3 == 0) {

    FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1_07,&cf__bgeQS_mR,0,1);

    auVar10 = _objc_retainAutoreleasedReturnValue();

    uVar9 = auVar10._0_8_;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar10._8_8_,&cf_nx_,0,0);

    auVar10 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar9,auVar10._8_8_,auVar10._0_8_);

    _objc_release(auVar10._0_8_);

    FUN_0029a500(param_1,extraout_x1_09,uVar9,1,0);

    _objc_release(uVar9);

  }

  else {

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_07,&cf_Sm,1,0);

    auVar10 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar4,auVar10._8_8_,auVar10._0_8_);

    _objc_release(auVar10._0_8_);

    FUN_0029a500(param_1,extraout_x1_08,uVar4,1,0);

  }

  _objc_release(uVar4);

  _objc_release(uVar1);

  _objc_release(lVar2);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_88) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




