// FUN_00070748 @0x70748


void FUN_00070748(long param_1)



{

  undefined8 uVar1;

  ulong uVar2;

  long lVar3;

  long lVar4;

  long lVar5;

  undefined8 extraout_x1;

  long lVar6;

  undefined1 auVar7 [16];

  

  _objc_retain();

  uVar1 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);

  auVar7 = _objc_opt_isKindOfClass(param_1,uVar1);

  if ((auVar7._0_8_ & 1) == 0) {

    uVar1 = _objc_opt_class(&_OBJC_CLASS___NSString);

    uVar2 = _objc_opt_isKindOfClass(param_1,uVar1);

    if ((uVar2 & 1) == 0) {

      lVar6 = 0;

    }

    else {

      _objc_retain(param_1);

      lVar6 = param_1;

    }

  }

  else {

    FUN_00299540(param_1,auVar7._8_8_,&cf_name);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    lVar6 = auVar7._0_8_;

    if (lVar6 == 0) {

      FUN_00299540(param_1,auVar7._8_8_,&cf_label);

      auVar7 = _objc_retainAutoreleasedReturnValue();

      lVar3 = auVar7._0_8_;

      if (lVar3 == 0) {

        FUN_00299540(param_1,auVar7._8_8_,&cf_title);

        lVar4 = _objc_retainAutoreleasedReturnValue();

      }

      else {

        _objc_retain(lVar3);

        lVar4 = lVar3;

      }

      _objc_release(lVar3);

    }

    else {

      _objc_retain(lVar6);

      lVar4 = lVar6;

    }

    _objc_release(lVar6);

    FUN_00299540(param_1,extraout_x1,&cf_id);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    lVar3 = auVar7._0_8_;

    if (lVar3 == 0) {

      FUN_00299540(param_1,auVar7._8_8_,&cf_value);

      lVar5 = _objc_retainAutoreleasedReturnValue();

      lVar6 = lVar4;

      if (lVar5 != 0) {

        lVar6 = lVar5;

      }

      _objc_retain(lVar6);

      _objc_release(lVar5);

    }

    else {

      _objc_retain(lVar3);

      lVar6 = lVar3;

    }

    _objc_release(lVar3);

    _objc_release(lVar4);

  }

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(lVar6);

  return;

}




