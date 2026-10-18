// showSpeechRateSettings @0x751f8


/* Function Stack Size: 0x10 bytes */



void _0x016d26c7::showSpeechRateSettings(ID param_1,SEL param_2)



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

  undefined8 extraout_x1_06;

  long lVar5;

  long lVar6;

  long lVar7;

  float fVar8;

  double dVar9;

  undefined1 auVar10 [16];

  undefined *local_198;

  undefined8 local_190;

  code *local_188;

  undefined *puStack_180;

  ID local_178;

  undefined *local_170;

  undefined8 local_168;

  code *local_160;

  undefined *puStack_158;

  ID local_150;

  double local_148;

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

  FUN_002a4080();

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf_S_MR_);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar10._8_8_,&cf_n_,auVar10._0_8_,0);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar10._0_8_);

  uStack_118 = 0;

  local_120 = 0;

  uStack_108 = 0;

  uStack_110 = 0;

  lStack_138 = 0;

  local_140 = 0;

  uStack_128 = 0;

  local_130 = (long *)0x0;

  auVar10 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bdc18,extraout_x1_00,&local_140,

                         auStack_100,0x10);

  uVar4 = auVar10._8_8_;

  lVar5 = auVar10._0_8_;

  if (lVar5 != 0) {

    lVar6 = *local_130;

    do {

      lVar7 = 0;

      do {

        if (*local_130 != lVar6) {

          _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_003bdc18);

        }

        fVar8 = (float)FUN_00295480(*(undefined8 *)(lStack_138 + lVar7 * 8));

        FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_01,&cf___2fx);

        uVar2 = _objc_retainAutoreleasedReturnValue();

        dVar9 = (double)FUN_002a4080(param_1);

        uVar4 = extraout_x1_02;

        uVar3 = uVar2;

        if (dVar9 == (double)fVar8) {

          FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_02,&cf__);

          uVar3 = _objc_retainAutoreleasedReturnValue();

          _objc_release(uVar2);

          uVar4 = extraout_x1_03;

        }

        local_170 = PTR___NSConcreteStackBlock_003886f0;

        local_168 = 0xc2000000;

        local_160 = FUN_00075588;

        puStack_158 = &DAT_003890b0;

        local_150 = param_1;

        local_148 = (double)fVar8;

        FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,uVar4,uVar3,0,&local_170);

        auVar10 = _objc_retainAutoreleasedReturnValue();

        FUN_00290fe0(uVar1,auVar10._8_8_,auVar10._0_8_);

        _objc_release(auVar10._0_8_);

        _objc_release(uVar3);

        lVar7 = lVar7 + 1;

      } while (lVar5 != lVar7);

      auVar10 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bdc18,extraout_x1_04,&local_140,

                             auStack_100,0x10);

      uVar4 = auVar10._8_8_;

      lVar5 = auVar10._0_8_;

    } while (lVar5 != 0);

  }

  local_198 = PTR___NSConcreteStackBlock_003886f0;

  local_190 = 0xc2000000;

  local_188 = FUN_00075634;

  puStack_180 = &DAT_00388cf0;

  local_178 = param_1;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,uVar4,&cf__IN,0,&local_198);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar1,auVar10._8_8_,auVar10._0_8_);

  _objc_release(auVar10._0_8_);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_05,&cf_Sm,1,0);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar1,auVar10._8_8_,auVar10._0_8_);

  _objc_release(auVar10._0_8_);

  FUN_0029a500(param_1,extraout_x1_06,uVar1,1,0);

  _objc_release(uVar1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_80) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




