// FUN_00004000 @0x4000


void FUN_00004000(undefined8 param_1)



{

  long lVar1;

  int iVar2;

  undefined8 uVar3;

  ulong uVar4;

  long lVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined1 auVar6 [16];

  

  _objc_retain();

  _objc_retain(param_1);

  uVar3 = _objc_opt_class(&_OBJC_CLASS___NSString);

  uVar4 = _objc_opt_isKindOfClass(param_1,uVar3);

  if ((((((uVar4 & 1) == 0) || (auVar6 = FUN_00297fa0(param_1), auVar6._0_8_ == 0)) ||

       (auVar6 = FUN_00297820(param_1,auVar6._8_8_,&cf_xzySettingsRevision), (auVar6._0_8_ & 1) != 0

       )) || ((auVar6 = FUN_00297820(param_1,auVar6._8_8_,&cf_CadisXZYSettingsRevision),

              (auVar6._0_8_ & 1) != 0 ||

              (auVar6 = FUN_00297820(param_1,auVar6._8_8_,&cf_CadisWeatherCache),

              (auVar6._0_8_ & 1) != 0)))) ||

     ((auVar6 = FUN_00297820(param_1,auVar6._8_8_,&cf_CadisWeatherError), (auVar6._0_8_ & 1) != 0 ||

      ((auVar6 = FUN_00297820(param_1,auVar6._8_8_,&cf_xzy_wxid_register_last_ts),

       (auVar6._0_8_ & 1) != 0 ||

       (uVar4 = FUN_00297820(param_1,auVar6._8_8_,&cf_xzy_wxid_register_last_wxid), (uVar4 & 1) != 0

       )))))) {

    _objc_release(param_1);

  }

  else {

    iVar2 = FUN_00085164(param_1);

    if (iVar2 == 0) {

      uVar4 = FUN_00295f60(param_1,extraout_x1,&cf_Cadis);

      _objc_release(param_1);

      uVar3 = extraout_x1_01;

      if ((uVar4 & 1) == 0) goto LAB_000040c8;

    }

    else {

      _objc_release(param_1);

      uVar3 = extraout_x1_00;

    }

    uVar4 = FUN_00295f60(param_1,uVar3,&cf_xzy_wxid_register_);

    if ((uVar4 & 1) == 0) {

      FUN_000041f0();

      uVar3 = _objc_retainAutoreleasedReturnValue();

      _objc_sync_enter();

      if (DAT_003e7470 == 0) {

        FUN_0029c6e0(&_OBJC_CLASS___NSMutableSet);

        lVar5 = _objc_retainAutoreleasedReturnValue();

        lVar1 = DAT_003e7470;

        DAT_003e7470 = lVar5;

        _objc_release(lVar1);

      }

      lVar1 = DAT_003e7470;

      auVar6 = FUN_002937a0(param_1);

      FUN_00291240(lVar1,auVar6._8_8_,auVar6._0_8_);

      _objc_release(auVar6._0_8_);

      _objc_sync_exit(uVar3);

      _objc_release(uVar3);

      FUN_00004234();

    }

  }

LAB_000040c8:

  _objc_release(param_1);

  return;

}




