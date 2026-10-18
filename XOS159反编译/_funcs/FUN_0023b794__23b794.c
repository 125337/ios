// FUN_0023b794 @0x23b794


void FUN_0023b794(void)



{

  undefined8 uVar1;

  long lVar2;

  undefined8 uVar3;

  ulong uVar4;

  long lVar5;

  long lVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  double dVar7;

  undefined *local_80;

  undefined8 local_78;

  code *local_70;

  undefined *puStack_68;

  long local_60;

  double local_58;

  

  FUN_002365b0();

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf_search_render___1f__d__d);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002373f0();

  lVar2 = _objc_retainAutoreleasedReturnValue();

  uVar3 = _objc_opt_class(&_OBJC_CLASS___UIImage);

  uVar4 = _objc_opt_isKindOfClass(lVar2,uVar3);

  if ((uVar4 & 1) != 0) {

    _objc_retain(lVar2);

    lVar5 = lVar2;

    goto LAB_0023b954;

  }

  FUN_002992c0(&_OBJC_CLASS___NSNull);

  lVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar2 == lVar5) {

    lVar5 = 0;

    goto LAB_0023b954;

  }

  if (DAT_003eb269 == '\x01') {

    FUN_00236cac(&cf_icons_filled_search);

    lVar6 = _objc_retainAutoreleasedReturnValue();

    if (lVar6 == 0) goto LAB_0023b87c;

LAB_0023b8a4:

    dVar7 = DAT_003e7250;

    _objc_alloc(&_OBJC_CLASS___UIGraphicsImageRenderer);

    dVar7 = dVar7 * 0.6;

    uVar3 = FUN_00296e00(dVar7,dVar7);

    local_80 = PTR___NSConcreteStackBlock_003886f0;

    local_78 = 0xc2000000;

    local_70 = FUN_0023b9d8;

    puStack_68 = &DAT_0038f988;

    _objc_retain(lVar6);

    local_60 = lVar6;

    local_58 = dVar7;

    FUN_00296560(uVar3,extraout_x1_00,&local_80);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_release(lVar6);

    _objc_release(local_60);

    _objc_release(uVar3);

  }

  else {

LAB_0023b87c:

    FUN_0023720c(0x4035000000000000,&cf_magnifyingglass,4);

    lVar6 = _objc_retainAutoreleasedReturnValue();

    lVar5 = 0;

    if (lVar6 != 0) goto LAB_0023b8a4;

  }

  FUN_00237460(uVar1,lVar5);

LAB_0023b954:

  _objc_release(lVar2);

  _objc_release(uVar1);

  _objc_autoreleaseReturnValue(lVar5);

  return;

}




