// FUN_00088be0 @0x88be0


void FUN_00088be0(undefined8 param_1,undefined8 *param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  ulong uVar4;

  undefined8 uVar5;

  undefined8 extraout_x1;

  long lVar6;

  undefined1 auVar7 [16];

  undefined1 auVar8 [16];

  

  _objc_retain();

  uVar1 = _objc_opt_new(&_OBJC_CLASS___NSMutableArray);

  uVar2 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);

  uVar3 = _objc_opt_class(&_OBJC_CLASS___NSArray);

  uVar4 = _objc_opt_isKindOfClass(param_1,uVar3);

  if ((uVar4 & 1) != 0) {

    _objc_retain(param_1);

    for (lVar6 = 0; auVar7 = FUN_00293860(param_1), lVar6 < auVar7._0_8_; lVar6 = lVar6 + 1) {

      FUN_00299500(param_1,auVar7._8_8_,lVar6);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      uVar5 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);

      uVar4 = _objc_opt_isKindOfClass(uVar3,uVar5);

      if (((uVar4 & 1) != 0) && (uVar4 = FUN_00089210(uVar3), (uVar4 & 1) != 0)) {

        auVar7 = FUN_00293860(uVar1);

        FUN_00299480(&_OBJC_CLASS___NSNumber,auVar7._8_8_,auVar7._0_8_);

        auVar7 = _objc_retainAutoreleasedReturnValue();

        FUN_00299400(&_OBJC_CLASS___NSNumber,auVar7._8_8_,lVar6);

        auVar8 = _objc_retainAutoreleasedReturnValue();

        FUN_002a00a0(uVar2,auVar8._8_8_,auVar7._0_8_,auVar8._0_8_);

        _objc_release(auVar8._0_8_);

        _objc_release(auVar7._0_8_);

        FUN_00291240(uVar1,extraout_x1,uVar3);

      }

      _objc_release(uVar3);

    }

    _objc_release(param_1);

  }

  FUN_002937a0(uVar2);

  uVar3 = _objc_autorelease();

  *param_2 = uVar3;

  uVar3 = FUN_002937a0(uVar1);

  _objc_release(uVar2);

  _objc_release(uVar1);

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(uVar3);

  return;

}




