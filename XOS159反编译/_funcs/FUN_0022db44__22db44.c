// FUN_0022db44 @0x22db44


void FUN_0022db44(long param_1,long param_2,int param_3)



{

  undefined *puVar1;

  long lVar2;

  undefined8 uVar3;

  ulong uVar4;

  long lVar5;

  long lVar6;

  ulong extraout_x1;

  undefined8 extraout_x1_00;

  long lVar7;

  undefined1 auVar8 [16];

  undefined1 auVar9 [16];

  undefined1 auVar10 [16];

  

  _objc_retain();

  _objc_retain(param_2);

  _objc_getAssociatedObject(param_1,PTR_LOOP_003e71f0);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_getAssociatedObject(param_1,PTR_LOOP_003e71f8);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  lVar7 = auVar8._0_8_;

  if (lVar2 == 0) {

LAB_0022dc38:

    lVar7 = auVar8._0_8_;

    lVar2 = 0;

    if (param_3 != 0) goto LAB_0022dc40;

LAB_0022dbd4:

    lVar7 = auVar8._0_8_;

    if (lVar2 != 0) {

      if (lVar7 == 0) {

        auVar10._8_8_ = 0;

        auVar10._0_8_ = auVar8._8_8_;

        auVar10 = auVar10 << 0x40;

      }

      else {

        auVar10 = FUN_002924e0(lVar7);

      }

      FUN_0029e8a0(lVar2,auVar10._8_8_,auVar10._0_8_);

      _objc_setAssociatedObject(param_1,PTR_LOOP_003e71f0,0,1);

      _objc_setAssociatedObject(param_1,PTR_LOOP_003e71f8,0,1);

    }

    _objc_getAssociatedObject(param_1,PTR_LOOP_003e7200);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    if (lVar5 != 0) {

      uVar3 = _objc_opt_class(&_OBJC_CLASS___UIImageView);

      uVar4 = _objc_opt_isKindOfClass(param_1,uVar3);

      if ((uVar4 & 1) != 0) {

        _objc_retain(param_1);

        FUN_002992c0(&_OBJC_CLASS___NSNull);

        auVar8 = _objc_retainAutoreleasedReturnValue();

        lVar6 = 0;

        if (lVar5 != auVar8._0_8_) {

          lVar6 = lVar5;

        }

        FUN_0029ec00(param_1,auVar8._8_8_,lVar6);

        _objc_release(auVar8._0_8_);

        _objc_setAssociatedObject(param_1,PTR_LOOP_003e7200,0,1);

        _objc_release(param_1);

      }

    }

  }

  else {

    if (lVar2 != param_2) {

      if (lVar7 == 0) {

        auVar9._8_8_ = 0;

        auVar9._0_8_ = auVar8._8_8_;

        auVar9 = auVar9 << 0x40;

      }

      else {

        auVar9 = FUN_002924e0(lVar7);

      }

      FUN_0029e8a0(lVar2,auVar9._8_8_,auVar9._0_8_);

      _objc_setAssociatedObject(param_1,PTR_LOOP_003e71f0,0,1);

      _objc_setAssociatedObject(param_1,PTR_LOOP_003e71f8,0,1);

      _objc_release(lVar2);

      _objc_release(lVar7);

      auVar8._8_8_ = 0;

      auVar8._0_8_ = extraout_x1;

      auVar8 = auVar8 << 0x40;

      goto LAB_0022dc38;

    }

    if (param_3 == 0) goto LAB_0022dbd4;

LAB_0022dc40:

    puVar1 = PTR_LOOP_003e71f8;

    if (param_2 != 0) {

      if (lVar2 == 0) {

        auVar8 = FUN_002978a0(param_2);

        FUN_00299380(&_OBJC_CLASS___NSNumber,auVar8._8_8_,auVar8._0_8_);

        uVar3 = _objc_retainAutoreleasedReturnValue();

        _objc_setAssociatedObject(param_1,puVar1,uVar3,1);

        _objc_release(uVar3);

        _objc_setAssociatedObject(param_1,PTR_LOOP_003e71f0,param_2,1);

      }

      auVar8 = FUN_002978a0(param_2);

      if ((auVar8._0_8_ & 1) == 0) {

        FUN_0029e8a0(param_2,auVar8._8_8_,1);

      }

    }

    uVar3 = _objc_opt_class(&_OBJC_CLASS___UIImageView);

    uVar4 = _objc_opt_isKindOfClass(param_1,uVar3);

    if ((uVar4 & 1) == 0) goto LAB_0022de90;

    _objc_retain(param_1);

    _objc_getAssociatedObject(param_1,PTR_LOOP_003e7200);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar5 == 0) {

      FUN_00296480(param_1);

      lVar5 = _objc_retainAutoreleasedReturnValue();

      if (lVar5 == 0) {

        FUN_002992c0(&_OBJC_CLASS___NSNull);

        lVar6 = _objc_retainAutoreleasedReturnValue();

      }

      else {

        _objc_retain(lVar5);

        lVar6 = lVar5;

      }

      _objc_release(lVar5);

      _objc_setAssociatedObject(param_1,PTR_LOOP_003e7200,lVar6,1);

      _objc_release(lVar6);

    }

    FUN_00296480(param_1);

    lVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    lVar5 = param_1;

    if (lVar6 != 0) {

      FUN_0029ec00(param_1,extraout_x1_00,0);

    }

  }

  _objc_release(lVar5);

LAB_0022de90:

  _objc_release(lVar7);

  _objc_release(lVar2);

  _objc_release(param_2);

  _objc_release(param_1);

  return;

}




