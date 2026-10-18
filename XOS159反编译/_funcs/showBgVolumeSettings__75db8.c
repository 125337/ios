// showBgVolumeSettings @0x75db8


/* Function Stack Size: 0x10 bytes */



void _0x016d26c7::showBgVolumeSettings(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 uVar4;

  undefined8 extraout_x1_05;

  long lVar5;

  long lVar6;

  long lVar7;

  float fVar8;

  double dVar9;

  undefined1 auVar10 [16];

  undefined *local_180;

  undefined8 local_178;

  code *local_170;

  undefined *puStack_168;

  ID local_160;

  double local_158;

  undefined8 local_150;

  long lStack_148;

  long *local_140;

  undefined8 uStack_138;

  undefined8 local_130;

  undefined8 uStack_128;

  undefined8 uStack_120;

  undefined8 uStack_118;

  undefined1 auStack_110 [128];

  long local_90;

  

  local_90 = *(long *)PTR____stack_chk_guard_00388738;

  FUN_002923e0();

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf_S_MRof_);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar10._8_8_,&cf_n_of,auVar10._0_8_,0);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar10._0_8_);

  uStack_128 = 0;

  local_130 = 0;

  uStack_118 = 0;

  uStack_120 = 0;

  lStack_148 = 0;

  local_150 = 0;

  uStack_138 = 0;

  local_140 = (long *)0x0;

  auVar10 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bdc48,extraout_x1_00,&local_150,

                         auStack_110,0x10);

  uVar4 = auVar10._8_8_;

  lVar5 = auVar10._0_8_;

  if (lVar5 != 0) {

    lVar6 = *local_140;

    do {

      lVar7 = 0;

      do {

        if (*local_140 != lVar6) {

          _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_003bdc48);

        }

        fVar8 = (float)FUN_00295480(*(undefined8 *)(lStack_148 + lVar7 * 8));

        FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_01,&cf___0f__);

        uVar2 = _objc_retainAutoreleasedReturnValue();

        dVar9 = (double)FUN_002923e0(param_1);

        uVar4 = extraout_x1_02;

        uVar3 = uVar2;

        if (ABS((double)fVar8 - dVar9) < 0.01) {

          FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_02,&cf__);

          uVar3 = _objc_retainAutoreleasedReturnValue();

          _objc_release(uVar2);

          uVar4 = extraout_x1_03;

        }

        local_180 = PTR___NSConcreteStackBlock_003886f0;

        local_178 = 0xc2000000;

        local_170 = FUN_000760e8;

        puStack_168 = &DAT_003890b0;

        local_160 = param_1;

        local_158 = (double)fVar8;

        FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,uVar4,uVar3,0,&local_180);

        auVar10 = _objc_retainAutoreleasedReturnValue();

        FUN_00290fe0(uVar1,auVar10._8_8_,auVar10._0_8_);

        _objc_release(auVar10._0_8_);

        _objc_release(uVar3);

        lVar7 = lVar7 + 1;

      } while (lVar5 != lVar7);

      auVar10 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bdc48,extraout_x1_04,&local_150,

                             auStack_110,0x10);

      uVar4 = auVar10._8_8_;

      lVar5 = auVar10._0_8_;

    } while (lVar5 != 0);

  }

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,uVar4,&cf_Sm,1,0);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar1,auVar10._8_8_,auVar10._0_8_);

  _objc_release(auVar10._0_8_);

  FUN_0029a500(param_1,extraout_x1_05,uVar1,1,0);

  _objc_release(uVar1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_90) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




