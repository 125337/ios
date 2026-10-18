// FUN_0023bed0 @0x23bed0


void FUN_0023bed0(int param_1,undefined8 param_2)



{

  undefined8 uVar1;

  long lVar2;

  undefined8 uVar3;

  ulong uVar4;

  long lVar5;

  long lVar6;

  long lVar7;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  double dVar8;

  undefined1 auVar9 [16];

  undefined *local_c8;

  undefined8 local_c0;

  code *local_b8;

  undefined *puStack_b0;

  long local_a8;

  double local_a0;

  undefined *local_98;

  undefined8 local_90;

  code *local_88;

  undefined *puStack_80;

  long local_78;

  long local_70;

  double local_68;

  

  FUN_002a4680(&_OBJC_CLASS___NSString,param_2,&cf_search_colored__d___1f__d);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002373f0();

  lVar2 = _objc_retainAutoreleasedReturnValue();

  uVar3 = _objc_opt_class(&_OBJC_CLASS___UIImage);

  uVar4 = _objc_opt_isKindOfClass(lVar2,uVar3);

  if ((uVar4 & 1) != 0) {

    _objc_retain(lVar2);

    lVar5 = lVar2;

    goto LAB_0023c188;

  }

  FUN_002992c0(&_OBJC_CLASS___NSNull);

  lVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar2 == lVar5) {

    lVar5 = 0;

    goto LAB_0023c188;

  }

  if (DAT_003eb269 == '\x01') {

    FUN_00236cac(&cf_icons_filled_search);

    lVar6 = _objc_retainAutoreleasedReturnValue();

    dVar8 = DAT_003e7250;

    if (lVar6 == 0) goto LAB_0023c04c;

    _objc_alloc(&_OBJC_CLASS___UIGraphicsImageRenderer);

    dVar8 = dVar8 * 0.6;

    lVar7 = FUN_00296e00(dVar8,dVar8);

    local_c8 = PTR___NSConcreteStackBlock_003886f0;

    local_c0 = 0xc2000000;

    local_b8 = FUN_0023c2b0;

    puStack_b0 = &DAT_0038f988;

    _objc_retain(lVar6);

    local_a8 = lVar6;

    local_a0 = dVar8;

    FUN_00296560(lVar7,extraout_x1,&local_c8);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_release(lVar6);

    lVar6 = local_a8;

LAB_0023c16c:

    _objc_release(lVar6);

  }

  else {

LAB_0023c04c:

    FUN_0023720c(0x4035000000000000,&cf_magnifyingglass,4);

    lVar7 = _objc_retainAutoreleasedReturnValue();

    if (lVar7 != 0) {

      if (param_1 == 0) {

        FUN_00292400(&_OBJC_CLASS___UIColor);

        lVar6 = _objc_retainAutoreleasedReturnValue();

      }

      else {

        FUN_002a64a0();

        lVar6 = _objc_retainAutoreleasedReturnValue();

      }

      dVar8 = DAT_003e7250;

      _objc_alloc(&_OBJC_CLASS___UIGraphicsImageRenderer);

      dVar8 = dVar8 * 0.6;

      uVar3 = FUN_00296e00(dVar8,dVar8);

      local_98 = PTR___NSConcreteStackBlock_003886f0;

      local_90 = 0xc2000000;

      local_88 = FUN_0023c278;

      puStack_80 = &DAT_0038f9b8;

      _objc_retain(lVar6);

      local_78 = lVar6;

      _objc_retain(lVar7);

      local_70 = lVar7;

      local_68 = dVar8;

      FUN_00296560(uVar3,extraout_x1_00,&local_98);

      auVar9 = _objc_retainAutoreleasedReturnValue();

      FUN_00296620(auVar9._0_8_,auVar9._8_8_,1);

      lVar5 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar9._0_8_);

      _objc_release(local_70);

      _objc_release(local_78);

      _objc_release(uVar3);

      goto LAB_0023c16c;

    }

    lVar5 = 0;

  }

  _objc_release(lVar7);

  FUN_00237460(uVar1,lVar5);

LAB_0023c188:

  _objc_release(lVar2);

  _objc_release(uVar1);

  _objc_autoreleaseReturnValue(lVar5);

  return;

}




