// FUN_00122470 @0x122470


void FUN_00122470(long param_1)



{

  uint uVar1;

  long lVar2;

  long lVar3;

  long lVar4;

  long lVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 uVar6;

  undefined1 auVar7 [16];

  

  _objc_retain();

  if ((param_1 == 0) || (lVar2 = FUN_00297fa0(param_1), lVar2 == 0)) {

    lVar2 = 0;

  }

  else {

    if (DAT_003e8340 == 0) {

      FUN_002944c0(&_OBJC_CLASS___NSMutableDictionary);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      lVar2 = DAT_003e8340;

      DAT_003e8340 = lVar3;

      _objc_release(lVar2);

    }

    uVar1 = FUN_001331c4();

    auVar7 = FUN_00293860(DAT_003e8340);

    uVar6 = auVar7._8_8_;

    if ((auVar7._0_8_ != 0) && (DAT_003e8459 != uVar1)) {

      FUN_0029b240(DAT_003e8340);

      uVar6 = extraout_x1;

    }

    DAT_003e8459 = (byte)uVar1;

    FUN_00299540(DAT_003e8340,uVar6,param_1);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    lVar3 = auVar7._0_8_;

    if (lVar3 == 0) {

      if (uVar1 == 0) {

        FUN_002a4680(&_OBJC_CLASS___NSString,auVar7._8_8_,&cf_xzyHomeNP____Light);

        lVar4 = _objc_retainAutoreleasedReturnValue();

      }

      else {

        FUN_002a4680(&_OBJC_CLASS___NSString,auVar7._8_8_,&cf_xzyHomeNP____Dark);

        lVar4 = _objc_retainAutoreleasedReturnValue();

      }

      FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

      auVar7 = _objc_retainAutoreleasedReturnValue();

      FUN_002a45e0(auVar7._0_8_,auVar7._8_8_,lVar4);

      lVar5 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar7._0_8_);

      if ((lVar5 == 0) || (auVar7 = FUN_00297fa0(lVar5), uVar6 = auVar7._8_8_, auVar7._0_8_ == 0)) {

        FUN_002992c0(&_OBJC_CLASS___NSNull);

        auVar7 = _objc_retainAutoreleasedReturnValue();

        uVar6 = auVar7._0_8_;

        FUN_002a00a0(DAT_003e8340,auVar7._8_8_,uVar6,param_1);

        lVar2 = 0;

      }

      else {

        if (DAT_003e8438 != -1) {

          thunk_FUN_00128d5c();

          uVar6 = extraout_x1_00;

        }

        FUN_002a4460(DAT_003e8308,uVar6,lVar5);

        auVar7 = _objc_retainAutoreleasedReturnValue();

        uVar6 = auVar7._0_8_;

        FUN_002965c0(&_OBJC_CLASS___UIImage,auVar7._8_8_,uVar6);

        auVar7 = _objc_retainAutoreleasedReturnValue();

        lVar2 = auVar7._0_8_;

        if (lVar2 == 0) {

          FUN_002992c0(&_OBJC_CLASS___NSNull);

          auVar7 = _objc_retainAutoreleasedReturnValue();

        }

        FUN_002a00a0(DAT_003e8340,auVar7._8_8_,auVar7._0_8_,param_1);

        if (lVar2 == 0) {

          _objc_release(auVar7._0_8_);

        }

      }

      _objc_release(uVar6);

      _objc_release(lVar5);

    }

    else {

      FUN_002992c0(&_OBJC_CLASS___NSNull);

      lVar4 = _objc_retainAutoreleasedReturnValue();

      lVar2 = 0;

      if (lVar3 != lVar4) {

        lVar2 = lVar3;

      }

      _objc_retain(lVar2);

    }

    _objc_release(lVar4);

    _objc_release(lVar3);

  }

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(lVar2);

  return;

}




