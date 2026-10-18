// FUN_00136804 @0x136804


undefined1  [16] FUN_00136804(void)



{

  long lVar1;

  long lVar2;

  long lVar3;

  undefined8 uVar4;

  ulong uVar5;

  long lVar6;

  undefined8 extraout_x1;

  float fVar7;

  double dVar8;

  undefined1 auVar9 [16];

  

  FUN_00155de0();

  lVar1 = _objc_retainAutoreleasedReturnValue();

  if (lVar1 == 0) {

LAB_00136968:

    dVar8 = (double)FUN_00147e4c();

  }

  else {

    FUN_00155eb4(lVar1);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    uVar4 = auVar9._8_8_;

    lVar2 = auVar9._0_8_;

    if (lVar2 == 0) {

LAB_001368e8:

      FUN_00299540(lVar1,uVar4,&cf_bgHeight);

      lVar6 = _objc_retainAutoreleasedReturnValue();

      uVar4 = _objc_opt_class(&_OBJC_CLASS___NSNumber);

      uVar5 = _objc_opt_isKindOfClass(lVar6,uVar4);

      if ((uVar5 & 1) == 0) {

        uVar4 = _objc_opt_class(&_OBJC_CLASS___NSString);

        uVar5 = _objc_opt_isKindOfClass(lVar6,uVar4);

        if ((uVar5 & 1) == 0) {

          _objc_release(lVar6);

          _objc_release(lVar2);

          goto LAB_00136968;

        }

      }

      fVar7 = (float)FUN_00295480(lVar6);

    }

    else {

      FUN_00299540(lVar2,uVar4,&cf_of_);

      auVar9 = _objc_retainAutoreleasedReturnValue();

      lVar3 = auVar9._0_8_;

      if (lVar3 == 0) {

        FUN_00299540(lVar2,auVar9._8_8_,&cf_bgHeight);

        lVar6 = _objc_retainAutoreleasedReturnValue();

      }

      else {

        _objc_retain(lVar3);

        lVar6 = lVar3;

      }

      _objc_release(lVar3);

      uVar4 = _objc_opt_class(&_OBJC_CLASS___NSNumber);

      uVar5 = _objc_opt_isKindOfClass(lVar6,uVar4);

      if ((uVar5 & 1) == 0) {

        uVar4 = _objc_opt_class(&_OBJC_CLASS___NSString);

        uVar5 = _objc_opt_isKindOfClass(lVar6,uVar4);

        if ((uVar5 & 1) == 0) {

          _objc_release(lVar6);

          uVar4 = extraout_x1;

          goto LAB_001368e8;

        }

      }

      fVar7 = (float)FUN_00295480(lVar6);

    }

    dVar8 = (double)fVar7;

    _objc_release(lVar6);

    _objc_release(lVar2);

  }

  _objc_release(lVar1);

  auVar9._0_8_ = dVar8 + 128.0;

  auVar9._8_8_ = 0;

  return auVar9;

}




