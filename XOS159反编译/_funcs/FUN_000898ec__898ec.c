// FUN_000898ec @0x898ec


void FUN_000898ec(undefined8 param_1,undefined8 param_2)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar3 [16];

  undefined *local_70;

  undefined8 local_68;

  code *local_60;

  undefined *puStack_58;

  cfstringStruct *local_50;

  undefined8 local_48;

  

  _objc_retain();

  _objc_retain(param_2);

  FUN_00299540(param_1,extraout_x1,param_2);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  if (lVar1 != 0) {

    uVar2 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);

    auVar3 = _objc_opt_isKindOfClass(lVar1,uVar2);

    if ((auVar3._0_8_ & 1) == 0) {

      FUN_0029b4a0(param_1,auVar3._8_8_,param_2);

    }

    else {

      uVar2 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);

      local_70 = PTR___NSConcreteStackBlock_003886f0;

      local_68 = 0xc2000000;

      local_60 = FUN_00089a8c;

      puStack_58 = &DAT_0038a610;

      local_50 = &cf_CoverRes_group;

      _objc_retain();

      local_48 = uVar2;

      FUN_00294d60(lVar1,extraout_x1_00,&local_70);

      auVar3 = FUN_002937a0(uVar2);

      FUN_002a00a0(param_1,auVar3._8_8_,auVar3._0_8_,param_2);

      _objc_release(auVar3._0_8_);

      _objc_release(local_48);

      _objc_release(local_50);

      _objc_release(uVar2);

    }

  }

  _objc_release(lVar1);

  _objc_release(param_2);

  _objc_release(param_1);

  return;

}




