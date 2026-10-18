// FUN_0023b444 @0x23b444


void FUN_0023b444(undefined8 param_1,undefined8 param_2,undefined8 param_3)



{

  undefined8 uVar1;

  bool bVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 uVar5;

  ulong uVar6;

  long lVar7;

  long lVar8;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 uVar9;

  double dVar10;

  undefined *local_90;

  undefined8 local_88;

  code *local_80;

  undefined *puStack_78;

  long local_70;

  double local_68;

  

  FUN_002365b0();

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf_tab_render__ld__ld__d___1f__d__d);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002373f0();

  lVar4 = _objc_retainAutoreleasedReturnValue();

  uVar5 = _objc_opt_class(&_OBJC_CLASS___UIImage);

  uVar6 = _objc_opt_isKindOfClass(lVar4,uVar5);

  if ((uVar6 & 1) != 0) {

    _objc_retain(lVar4);

    lVar7 = lVar4;

    goto LAB_0023b668;

  }

  FUN_002992c0(&_OBJC_CLASS___NSNull);

  lVar7 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar4 == lVar7) {

    lVar7 = 0;

    goto LAB_0023b668;

  }

  if (DAT_003eb269 == '\x01') {

    FUN_0023b714(param_1,param_3);

    lVar7 = _objc_retainAutoreleasedReturnValue();

    if (lVar7 == 0) goto LAB_0023b560;

    FUN_00236cac(lVar7);

    lVar8 = _objc_retainAutoreleasedReturnValue();

    _objc_release(lVar7);

    if (lVar8 == 0) goto LAB_0023b560;

LAB_0023b5b4:

    dVar10 = DAT_003e7250;

    _objc_alloc(&_OBJC_CLASS___UIGraphicsImageRenderer);

    dVar10 = dVar10 * 0.6;

    uVar5 = FUN_00296e00(dVar10,dVar10);

    local_90 = PTR___NSConcreteStackBlock_003886f0;

    local_88 = 0xc2000000;

    local_80 = FUN_0023b778;

    puStack_78 = &DAT_0038f988;

    _objc_retain(lVar8);

    local_70 = lVar8;

    local_68 = dVar10;

    FUN_00296560(uVar5,extraout_x1_00,&local_90);

    lVar7 = _objc_retainAutoreleasedReturnValue();

    _objc_release(lVar8);

    _objc_release(local_70);

    _objc_release(uVar5);

  }

  else {

LAB_0023b560:

    FUN_0023758c(param_1,param_2);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    bVar2 = (int)param_3 == 0;

    uVar9 = 0x4040e00000000000;

    if (bVar2) {

      uVar9 = 0x403e000000000000;

    }

    uVar1 = 6;

    if (bVar2) {

      uVar1 = 4;

    }

    FUN_0023720c(uVar9,uVar5,uVar1);

    lVar8 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar5);

    if (lVar8 != 0) goto LAB_0023b5b4;

    lVar7 = 0;

  }

  FUN_00237460(uVar3,lVar7);

LAB_0023b668:

  _objc_release(lVar4);

  _objc_release(uVar3);

  _objc_autoreleaseReturnValue(lVar7);

  return;

}




