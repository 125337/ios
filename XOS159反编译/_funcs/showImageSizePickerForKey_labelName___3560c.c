// showImageSizePickerForKey:labelName: @0x3560c


/* Function Stack Size: 0x20 bytes */



void _0x2f19de29::showImageSizePickerForKey_labelName_(ID param_1,SEL param_2,ID param_3,ID param_4)



{

  undefined8 uVar2;

  undefined8 uVar3;

  ulong uVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  long lVar5;

  long lVar6;

  long lVar7;

  float fVar8;

  float fVar9;

  undefined1 auVar10 [16];

  undefined1 auVar11 [16];

  undefined8 local_238;

  undefined *local_210;

  undefined8 local_208;

  code *local_200;

  undefined *puStack_1f8;

  ID local_1f0;

  ID local_1e8;

  ID local_1e0;

  undefined *local_1d8;

  undefined8 local_1d0;

  code *local_1c8;

  undefined *puStack_1c0;

  undefined8 local_1b8;

  ID local_1b0;

  ID IStack_1a8;

  ID local_1a0;

  undefined *local_198;

  undefined8 local_190;

  code *local_188;

  undefined *puStack_180;

  undefined8 local_178;

  ID local_170;

  ID IStack_168;

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

  undefined8 uVar1;

  

  local_90 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_3);

  _objc_retain(param_4);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar10._0_8_;

  fVar8 = (float)FUN_00295460(uVar1,auVar10._8_8_,param_3);

  if (fVar8 <= 0.0) {

    auVar10._8_8_ = extraout_x1;

    auVar10._0_8_ = &cf__gn_;

  }

  else {

    FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf___0f__);

    auVar10 = _objc_retainAutoreleasedReturnValue();

  }

  local_238 = auVar10._0_8_;

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar10._8_8_,&cf_n__);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar10._8_8_,&cf_S_MR>f_ykO_);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar11._8_8_,auVar10._0_8_,auVar11._0_8_,1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar11._0_8_);

  _objc_release(auVar10._0_8_);

  uStack_128 = 0;

  local_130 = 0;

  uStack_118 = 0;

  uStack_120 = 0;

  lStack_148 = 0;

  local_150 = 0;

  uStack_138 = 0;

  local_140 = (long *)0x0;

  auVar10 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bdb10,extraout_x1_00,&local_150,

                         auStack_110,0x10);

  uVar3 = auVar10._8_8_;

  lVar7 = auVar10._0_8_;

  if (lVar7 != 0) {

    lVar6 = *local_140;

    do {

      lVar5 = 0;

      do {

        if (*local_140 != lVar6) {

          _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_003bdb10);

        }

        fVar9 = (float)FUN_00295480(*(undefined8 *)(lStack_148 + lVar5 * 8));

        FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_01,&cf___0f__);

        auVar10 = _objc_retainAutoreleasedReturnValue();

        uVar3 = auVar10._0_8_;

        if (fVar9 == fVar8) {

          FUN_002a4680(&_OBJC_CLASS___NSString,auVar10._8_8_,&cf__);

          uVar3 = _objc_retainAutoreleasedReturnValue();

          _objc_release(auVar10._0_8_);

        }

        local_198 = PTR___NSConcreteStackBlock_003886f0;

        local_190 = 0xc2000000;

        local_188 = FUN_00035c60;

        puStack_180 = &DAT_00389310;

        _objc_retain(uVar1);

        local_178 = uVar1;

        local_158 = (double)fVar9;

        _objc_retain(param_3);

        local_170 = param_3;

        IStack_168 = param_1;

        _objc_retain(param_4);

        local_160 = param_4;

        FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_02,uVar3,0,&local_198);

        auVar10 = _objc_retainAutoreleasedReturnValue();

        FUN_00290fe0(uVar2,auVar10._8_8_,auVar10._0_8_);

        _objc_release(auVar10._0_8_);

        _objc_release(local_160);

        _objc_release(local_170);

        _objc_release(local_178);

        _objc_release(uVar3);

        lVar5 = lVar5 + 1;

      } while (lVar7 != lVar5);

      auVar10 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bdb10,extraout_x1_03,&local_150,

                             auStack_110,0x10);

      uVar3 = auVar10._8_8_;

      lVar7 = auVar10._0_8_;

    } while (lVar7 != 0);

  }

  uVar4 = FUN_00297820(param_3,uVar3,&cf_coverImageSizeGlobal);

  if ((uVar4 & 1) == 0) {

    local_1d8 = PTR___NSConcreteStackBlock_003886f0;

    local_1d0 = 0xc2000000;

    local_1c8 = FUN_00035ca0;

    puStack_1c0 = &DAT_00388cc0;

    _objc_retain(uVar1);

    local_1b8 = uVar1;

    _objc_retain(param_3);

    local_1b0 = param_3;

    IStack_1a8 = param_1;

    _objc_retain(param_4);

    local_1a0 = param_4;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_04,&cf_ndV,2,&local_1d8);

    auVar10 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar2,auVar10._8_8_,auVar10._0_8_);

    _objc_release(auVar10._0_8_);

    _objc_release(local_1a0);

    _objc_release(local_1b0);

    _objc_release(local_1b8);

  }

  local_210 = PTR___NSConcreteStackBlock_003886f0;

  local_208 = 0xc2000000;

  local_200 = FUN_00035cdc;

  puStack_1f8 = &DAT_00388c90;

  local_1f0 = param_1;

  _objc_retain(param_3);

  local_1e8 = param_3;

  _objc_retain(param_4);

  local_1e0 = param_4;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_05,&cf__IN_Y_,0,&local_210);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar10._8_8_,auVar10._0_8_);

  _objc_release(auVar10._0_8_);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_06,&cf_Sm,1,0);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar10._8_8_,auVar10._0_8_);

  _objc_release(auVar10._0_8_);

  FUN_0029a500(param_1,extraout_x1_07,uVar2,1,0);

  _objc_release(local_1e0);

  _objc_release(local_1e8);

  _objc_release(uVar2);

  _objc_release(local_238);

  _objc_release(uVar1);

  _objc_release(param_4);

  _objc_release(param_3);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_90) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




