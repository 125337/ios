// FUN_000a18d8 @0xa18d8


void FUN_000a18d8(undefined1 param_1 [16],double param_2,undefined8 param_3)



{

  int iVar1;

  long lVar2;

  long lVar3;

  long lVar4;

  undefined8 uVar5;

  long lVar6;

  ulong uVar7;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  double dVar8;

  double dVar9;

  double dVar10;

  undefined1 auVar11 [16];

  

  _objc_retain();

  uVar5 = extraout_x1;

  if (DAT_003e7580 == 0) {

    lVar2 = _objc_alloc_init(&_OBJC_CLASS___NSCache);

    lVar3 = DAT_003e7580;

    DAT_003e7580 = lVar2;

    _objc_release(lVar3);

    FUN_0029d860(DAT_003e7580,extraout_x1_00,0x14);

    FUN_002a20c0(DAT_003e7580,extraout_x1_01,0x2000000);

    uVar5 = extraout_x1_02;

  }

  FUN_00299520(DAT_003e7580,uVar5,param_3);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  if (lVar3 != 0) {

    FUN_002992c0(&_OBJC_CLASS___NSNull);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    lVar2 = 0;

    if (lVar3 != lVar4) {

      lVar2 = lVar3;

    }

    _objc_retain(lVar2);

    goto LAB_000a1b54;

  }

  FUN_00299b20(param_3);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002984e0();

  lVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar5);

  auVar11 = FUN_00297820(lVar4,extraout_x1_03,&cf_gif);

  uVar5 = auVar11._8_8_;

  if (((auVar11._0_8_ & 1) == 0) &&

     (iVar1 = FUN_00297820(lVar4,uVar5,&cf_webp), uVar5 = extraout_x1_04, iVar1 == 0)) {

    FUN_002965c0(&_OBJC_CLASS___UIImage,extraout_x1_04,param_3);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    lVar6 = DAT_003e7580;

  }

  else {

    FUN_00294020(&_OBJC_CLASS___NSData,uVar5,param_3);

    lVar6 = _objc_retainAutoreleasedReturnValue();

    if (lVar6 == 0) {

      lVar2 = 0;

    }

    else {

      auVar11 = _NSClassFromString(&cf_SDAnimatedImage);

      uVar5 = auVar11._8_8_;

      lVar2 = auVar11._0_8_;

      if ((lVar2 != 0) &&

         (auVar11 = _objc_opt_respondsToSelector(lVar2,"imageWithData:"), uVar5 = auVar11._8_8_,

         (auVar11._0_8_ & 1) != 0)) {

        FUN_00299ca0(lVar2,uVar5,"imageWithData:",lVar6);

        auVar11 = _objc_retainAutoreleasedReturnValue();

        uVar5 = auVar11._8_8_;

        lVar2 = auVar11._0_8_;

        if (lVar2 != 0) goto LAB_000a1a6c;

      }

      FUN_002965e0(&_OBJC_CLASS___UIImage,uVar5,lVar6);

      lVar2 = _objc_retainAutoreleasedReturnValue();

    }

LAB_000a1a6c:

    _objc_release(lVar6);

    lVar6 = DAT_003e7580;

  }

  DAT_003e7580 = lVar6;

  if (lVar2 == 0) {

    FUN_002992c0(&_OBJC_CLASS___NSNull);

    auVar11 = _objc_retainAutoreleasedReturnValue();

    FUN_002a0080(lVar6,auVar11._8_8_,auVar11._0_8_,param_3,0);

    _objc_release(auVar11._0_8_);

  }

  else {

    dVar8 = (double)FUN_002a3d80(lVar2);

    dVar9 = (double)FUN_0029bda0(lVar2);

    FUN_002a3d80(lVar2);

    dVar10 = (double)FUN_0029bda0(lVar2);

    FUN_00296640(lVar2);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    uVar7 = FUN_00293860();

    _objc_release(uVar5);

    if (uVar7 < 2) {

      uVar7 = 1;

    }

    FUN_002a0080(DAT_003e7580,extraout_x1_05,lVar2,param_3,

                 uVar7 * (long)(dVar8 * dVar9 * param_2 * dVar10 * 4.0));

  }

LAB_000a1b54:

  _objc_release(lVar4);

  _objc_release(lVar3);

  _objc_release(param_3);

  _objc_autoreleaseReturnValue(lVar2);

  return;

}




