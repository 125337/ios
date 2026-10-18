// FUN_0023b9f4 @0x23b9f4


void FUN_0023b9f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 uVar4;

  ulong uVar5;

  long lVar6;

  long lVar7;

  long lVar8;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  int iVar9;

  undefined8 uVar10;

  double dVar11;

  undefined1 auVar12 [16];

  undefined *local_d8;

  undefined8 local_d0;

  code *local_c8;

  undefined *puStack_c0;

  long local_b8;

  double local_b0;

  undefined *local_a8;

  undefined8 local_a0;

  code *local_98;

  undefined *puStack_90;

  long local_88;

  long local_80;

  double local_78;

  

  FUN_002a4680(&_OBJC_CLASS___NSString,param_2,&cf_tab_colored__ld__ld__d__d___1f__d);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002373f0();

  lVar3 = _objc_retainAutoreleasedReturnValue();

  uVar4 = _objc_opt_class(&_OBJC_CLASS___UIImage);

  uVar5 = _objc_opt_isKindOfClass(lVar3,uVar4);

  if ((uVar5 & 1) != 0) {

    _objc_retain(lVar3);

    lVar6 = lVar3;

    goto LAB_0023bd64;

  }

  FUN_002992c0(&_OBJC_CLASS___NSNull);

  lVar6 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar3 == lVar6) {

    lVar6 = 0;

    goto LAB_0023bd64;

  }

  if (DAT_003eb269 == '\x01') {

    FUN_0023b714(param_1,param_3);

    lVar6 = _objc_retainAutoreleasedReturnValue();

    if (lVar6 == 0) goto LAB_0023bba0;

    FUN_00236cac(lVar6);

    lVar7 = _objc_retainAutoreleasedReturnValue();

    _objc_release(lVar6);

    dVar11 = DAT_003e7250;

    if (lVar7 == 0) goto LAB_0023bba0;

    _objc_alloc(&_OBJC_CLASS___UIGraphicsImageRenderer);

    dVar11 = dVar11 * 0.6;

    lVar8 = FUN_00296e00(dVar11,dVar11);

    local_d8 = PTR___NSConcreteStackBlock_003886f0;

    local_d0 = 0xc2000000;

    local_c8 = FUN_0023beb4;

    puStack_c0 = &DAT_0038f988;

    _objc_retain(lVar7);

    local_b8 = lVar7;

    local_b0 = dVar11;

    FUN_00296560(lVar8,extraout_x1,&local_d8);

    lVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_release(lVar7);

    lVar7 = local_b8;

LAB_0023bd48:

    _objc_release(lVar7);

  }

  else {

LAB_0023bba0:

    FUN_0023758c(param_1,param_2);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    iVar9 = (int)param_3;

    uVar10 = 0x4040e00000000000;

    if (iVar9 == 0) {

      uVar10 = 0x403e000000000000;

    }

    uVar1 = 6;

    if (iVar9 == 0) {

      uVar1 = 4;

    }

    FUN_0023720c(uVar10,uVar4,uVar1);

    lVar8 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar4);

    if (lVar8 != 0) {

      if (iVar9 == 0) {

        if (param_4 == 0) {

          FUN_00293060(0x3fdae147ae147ae1,0x3ff0000000000000,&_OBJC_CLASS___UIColor);

          lVar7 = _objc_retainAutoreleasedReturnValue();

        }

        else {

          FUN_00293060(0x3fe51eb851eb851f,0x3ff0000000000000,&_OBJC_CLASS___UIColor);

          lVar7 = _objc_retainAutoreleasedReturnValue();

        }

      }

      else if (param_4 == 0) {

        FUN_00293060(0x3fb47ae147ae147b,0x3ff0000000000000,&_OBJC_CLASS___UIColor);

        lVar7 = _objc_retainAutoreleasedReturnValue();

      }

      else {

        FUN_00293060(0x3feeb851eb851eb8,0x3ff0000000000000,&_OBJC_CLASS___UIColor);

        lVar7 = _objc_retainAutoreleasedReturnValue();

      }

      dVar11 = DAT_003e7250;

      _objc_alloc(&_OBJC_CLASS___UIGraphicsImageRenderer);

      dVar11 = dVar11 * 0.6;

      uVar4 = FUN_00296e00(dVar11,dVar11);

      local_a8 = PTR___NSConcreteStackBlock_003886f0;

      local_a0 = 0xc2000000;

      local_98 = FUN_0023be7c;

      puStack_90 = &DAT_0038f9b8;

      _objc_retain(lVar7);

      local_88 = lVar7;

      _objc_retain(lVar8);

      local_80 = lVar8;

      local_78 = dVar11;

      FUN_00296560(uVar4,extraout_x1_00,&local_a8);

      auVar12 = _objc_retainAutoreleasedReturnValue();

      FUN_00296620(auVar12._0_8_,auVar12._8_8_,1);

      lVar6 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar12._0_8_);

      _objc_release(local_80);

      _objc_release(local_88);

      _objc_release(uVar4);

      goto LAB_0023bd48;

    }

    lVar6 = 0;

  }

  _objc_release(lVar8);

  FUN_00237460(uVar2,lVar6);

LAB_0023bd64:

  _objc_release(lVar3);

  _objc_release(uVar2);

  _objc_autoreleaseReturnValue(lVar6);

  return;

}




