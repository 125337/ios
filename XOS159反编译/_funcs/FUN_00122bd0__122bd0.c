// FUN_00122bd0 @0x122bd0


void FUN_00122bd0(undefined8 *param_1,undefined8 param_2)



{

  long lVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  float fVar8;

  float fVar9;

  float fVar10;

  undefined1 auVar11 [16];

  undefined1 auVar12 [16];

  undefined1 auVar13 [16];

  cfstringStruct *local_c8;

  cfstringStruct *local_c0;

  cfstringStruct *local_b8;

  cfstringStruct *local_b0;

  undefined8 local_a8;

  undefined8 local_a0;

  undefined8 local_98;

  undefined8 local_90;

  long local_88;

  

  local_88 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  *(undefined1 *)(param_1 + 4) = 0;

  *param_1 = DAT_003e8358;

  uVar3 = DAT_003e8368;

  param_1[1] = DAT_003e8360;

  param_1[2] = uVar3;

  param_1[3] = DAT_003e8370;

  auVar11 = FUN_00297fa0(param_2);

  uVar3 = auVar11._8_8_;

  if (auVar11._0_8_ != 0) {

    if (DAT_003e8348 == 0) {

      FUN_002944c0(&_OBJC_CLASS___NSMutableDictionary);

      lVar1 = _objc_retainAutoreleasedReturnValue();

      lVar2 = DAT_003e8348;

      DAT_003e8348 = lVar1;

      _objc_release(lVar2);

      uVar3 = extraout_x1;

    }

    FUN_00299540(DAT_003e8348,uVar3,param_2);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    if (lVar2 == 0) {

      FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

      auVar11 = _objc_retainAutoreleasedReturnValue();

      uVar3 = auVar11._0_8_;

      FUN_002a4680(&_OBJC_CLASS___NSString,auVar11._8_8_,&cf_xzyHomeNP____Position);

      auVar11 = _objc_retainAutoreleasedReturnValue();

      uVar4 = auVar11._0_8_;

      FUN_00299520(uVar3,auVar11._8_8_,uVar4);

      auVar11 = _objc_retainAutoreleasedReturnValue();

      if (auVar11._0_8_ == 0) {

        FUN_002992c0(&_OBJC_CLASS___NSNull);

        auVar12 = _objc_retainAutoreleasedReturnValue();

        FUN_002a00a0(DAT_003e8348,auVar12._8_8_,auVar12._0_8_,param_2);

        _objc_release(auVar12._0_8_);

      }

      else {

        auVar12 = FUN_00297480(uVar3,auVar11._8_8_,uVar4);

        *param_1 = auVar12._0_8_;

        FUN_002a4680(&_OBJC_CLASS___NSString,auVar12._8_8_,&cf_xzyHomeNP____Height);

        auVar13 = _objc_retainAutoreleasedReturnValue();

        fVar8 = (float)FUN_00295460(uVar3,auVar13._8_8_,auVar13._0_8_);

        param_1[1] = (double)fVar8;

        _objc_release(auVar13._0_8_);

        FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_04,&cf_xzyHomeNP____OffsetX);

        auVar13 = _objc_retainAutoreleasedReturnValue();

        fVar9 = (float)FUN_00295460(uVar3,auVar13._8_8_,auVar13._0_8_);

        param_1[2] = (double)fVar9;

        _objc_release(auVar13._0_8_);

        FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_05,&cf_xzyHomeNP____OffsetY);

        auVar13 = _objc_retainAutoreleasedReturnValue();

        fVar10 = (float)FUN_00295460(uVar3,auVar13._8_8_,auVar13._0_8_);

        param_1[3] = (double)fVar10;

        _objc_release(auVar13._0_8_);

        *(undefined1 *)(param_1 + 4) = 1;

        local_c8 = &cf_pos;

        FUN_00299400(&_OBJC_CLASS___NSNumber,extraout_x1_06,auVar12._0_8_);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        local_c0 = &cf_h;

        local_a8 = uVar5;

        FUN_002993a0((double)fVar8,&_OBJC_CLASS___NSNumber);

        uVar6 = _objc_retainAutoreleasedReturnValue();

        local_b8 = &cf_ox;

        local_a0 = uVar6;

        FUN_002993a0((double)fVar9,&_OBJC_CLASS___NSNumber);

        uVar7 = _objc_retainAutoreleasedReturnValue();

        local_b0 = &cf_oy;

        local_98 = uVar7;

        FUN_002993a0((double)fVar10,&_OBJC_CLASS___NSNumber);

        auVar12 = _objc_retainAutoreleasedReturnValue();

        local_90 = auVar12._0_8_;

        FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar12._8_8_,&local_a8,&local_c8,4);

        auVar13 = _objc_retainAutoreleasedReturnValue();

        FUN_002a00a0(DAT_003e8348,auVar13._8_8_,auVar13._0_8_,param_2);

        _objc_release(auVar13._0_8_);

        _objc_release(auVar12._0_8_);

        _objc_release(uVar7);

        _objc_release(uVar6);

        _objc_release(uVar5);

      }

      _objc_release(auVar11._0_8_);

      _objc_release(uVar4);

      _objc_release(uVar3);

    }

    else {

      FUN_002992c0(&_OBJC_CLASS___NSNull);

      lVar1 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      if (lVar2 != lVar1) {

        _objc_retain(lVar2);

        FUN_00299540(lVar2,extraout_x1_00,&cf_pos);

        uVar3 = _objc_retainAutoreleasedReturnValue();

        uVar4 = FUN_002974a0();

        *param_1 = uVar4;

        _objc_release(uVar3);

        FUN_00299540(lVar2,extraout_x1_01,&cf_h);

        uVar3 = _objc_retainAutoreleasedReturnValue();

        fVar8 = (float)FUN_00295480();

        param_1[1] = (double)fVar8;

        _objc_release(uVar3);

        FUN_00299540(lVar2,extraout_x1_02,&cf_ox);

        uVar3 = _objc_retainAutoreleasedReturnValue();

        fVar8 = (float)FUN_00295480();

        param_1[2] = (double)fVar8;

        _objc_release(uVar3);

        FUN_00299540(lVar2,extraout_x1_03,&cf_oy);

        uVar3 = _objc_retainAutoreleasedReturnValue();

        fVar8 = (float)FUN_00295480();

        param_1[3] = (double)fVar8;

        _objc_release(uVar3);

        *(undefined1 *)(param_1 + 4) = 1;

        _objc_release(lVar2);

      }

    }

    _objc_release(lVar2);

  }

  _objc_release(param_2);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_88) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




