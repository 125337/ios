// FUN_001cdc90 @0x1cdc90


void FUN_001cdc90(undefined8 param_1)



{

  undefined8 uVar1;

  ulong uVar2;

  long lVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 extraout_x1;

  undefined8 uVar9;

  undefined1 auVar10 [16];

  

  _objc_retain();

  auVar10 = FUN_00297fa0(param_1);

  uVar9 = 0;

  if ((auVar10._0_8_ != 0) && (DAT_003ea9b0 != 0)) {

    FUN_00299540(DAT_003ea9b0,auVar10._8_8_,param_1);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    uVar9 = _objc_opt_class(&_OBJC_CLASS___NSString);

    uVar2 = _objc_opt_isKindOfClass(uVar1,uVar9);

    if ((uVar2 & 1) == 0) {

      uVar9 = 0;

    }

    else {

      FUN_002a64c0(&_OBJC_CLASS___NSCharacterSet);

      auVar10 = _objc_retainAutoreleasedReturnValue();

      FUN_002a45c0(uVar1,auVar10._8_8_,auVar10._0_8_);

      uVar9 = _objc_retainAutoreleasedReturnValue();

      _objc_release(uVar1);

      _objc_release(auVar10._0_8_);

      lVar3 = FUN_00297fa0(uVar9);

      uVar1 = uVar9;

      if (lVar3 == 0) {

        uVar9 = 0;

      }

      else {

        FUN_00294240(&_OBJC_CLASS___NSFileManager);

        uVar4 = _objc_retainAutoreleasedReturnValue();

        FUN_0020c20c();

        uVar5 = _objc_retainAutoreleasedReturnValue();

        FUN_00297da0(uVar9);

        uVar6 = _objc_retainAutoreleasedReturnValue();

        auVar10 = FUN_00297fa0();

        uVar7 = auVar10._8_8_;

        if (auVar10._0_8_ == 0) {

          _objc_retain(uVar9);

          _objc_release(uVar6);

          uVar7 = extraout_x1;

          uVar6 = uVar9;

        }

        FUN_002a4460(uVar5,uVar7,uVar6);

        uVar7 = _objc_retainAutoreleasedReturnValue();

        auVar10 = FUN_00297fa0();

        if ((auVar10._0_8_ == 0) ||

           (uVar2 = FUN_00295160(uVar4,auVar10._8_8_,uVar7), (uVar2 & 1) == 0)) {

          uVar9 = 0;

        }

        else {

          FUN_00297da0(uVar7);

          uVar8 = _objc_retainAutoreleasedReturnValue();

          auVar10 = FUN_00297fa0();

          if ((auVar10._0_8_ != 0) &&

             (auVar10 = FUN_00297820(uVar9,auVar10._8_8_,uVar8), (auVar10._0_8_ & 1) == 0)) {

            FUN_002a00a0(DAT_003ea9b0,auVar10._8_8_,uVar8,param_1);

            FUN_0020c330();

          }

          _objc_retain(uVar7);

          _objc_release(uVar8);

          uVar9 = uVar7;

        }

        _objc_release(uVar7);

        _objc_release(uVar6);

        _objc_release(uVar5);

        _objc_release(uVar4);

      }

    }

    _objc_release(uVar1);

  }

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(uVar9);

  return;

}




