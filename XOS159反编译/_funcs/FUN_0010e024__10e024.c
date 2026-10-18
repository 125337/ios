// FUN_0010e024 @0x10e024


undefined8

FUN_0010e024(double param_1,double param_2,double param_3,double param_4,long param_5,long param_6,

            long param_7,int param_8)



{

  undefined8 *puVar1;

  bool bVar2;

  long lVar3;

  long lVar4;

  ulong uVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 uVar6;

  undefined8 uVar7;

  double dVar8;

  double dVar9;

  double dVar10;

  double dVar11;

  double dVar12;

  double dVar13;

  undefined1 auVar14 [16];

  

  dVar12 = param_2;

  _objc_retain();

  _objc_retain(param_6);

  _objc_retain(param_7);

  uVar6 = 0;

  if (((param_5 == 0) || (param_6 == 0)) || (param_7 == 0)) goto LAB_0010e414;

  FUN_0010b9c4(param_5);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  if (lVar3 == 0) {

    uVar6 = 0;

  }

  else {

    FUN_002a4880(param_6);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar4 != param_5) {

      FUN_0029b340(param_6);

      FUN_00291380(param_5,extraout_x1,param_6);

    }

    FUN_002a4880(param_7);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar4 != param_5) {

      FUN_0029b340(param_7);

      FUN_00291380(param_5,extraout_x1_00,param_7);

    }

    _objc_setAssociatedObject(param_5,PTR_LOOP_003e68f8,param_6,1);

    _objc_setAssociatedObject(param_5,PTR_LOOP_003e6900,param_7,1);

    FUN_002a4880(lVar3);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_00295600(lVar3);

    uVar7 = FUN_00293720(uVar6,extraout_x1_01,param_5);

    dVar11 = param_3;

    _objc_release(uVar6);

    uVar6 = 0;

    if ((0.5 < param_3) && (0.5 < param_4)) {

      puVar1 = &DAT_003e80d8;

      if (param_8 == 0) {

        puVar1 = &DAT_003e80e0;

      }

      uVar6 = *puVar1;

      _objc_retain(uVar6);

      if (DAT_003e811a == '\x01') {

        auVar14 = FUN_00297fa0(uVar6);

        if (auVar14._0_8_ == 0) goto LAB_0010e230;

        FUN_002a4bc0(&_OBJC_CLASS___UIImage,auVar14._8_8_,uVar6);

        auVar14 = _objc_retainAutoreleasedReturnValue();

        lVar4 = auVar14._0_8_;

        bVar2 = lVar4 != 0;

        if (lVar4 != 0) {

          FUN_00296620(lVar4,auVar14._8_8_,2);

          auVar14 = _objc_retainAutoreleasedReturnValue();

          FUN_0029ec00(param_7,auVar14._8_8_,auVar14._0_8_);

          _objc_release(auVar14._0_8_);

        }

        _objc_release(lVar4);

      }

      else {

LAB_0010e230:

        bVar2 = false;

      }

      FUN_002925a0(param_6);

      dVar8 = (double)_CGRectGetMidX(uVar7,dVar12,param_3,param_4);

      dVar13 = DAT_003e8130;

      dVar9 = param_1 + 3.0;

      if (bVar2 == false) {

        dVar9 = 0.0;

      }

      dVar10 = (double)_CGRectGetMaxY(uVar7,dVar12,param_3,param_4);

      dVar12 = DAT_003e8138;

      FUN_002925a0(param_6);

      FUN_002925a0(param_6);

      DAT_003e80b8 = 1;

      uVar7 = _objc_opt_class(&objc::class_t::XZYPinnedTimeLabel);

      uVar5 = _objc_opt_isKindOfClass(param_6,uVar7);

      dVar13 = dVar8 + (dVar9 + dVar11) * -0.5 + dVar13;

      dVar12 = (dVar10 + 1.0) - dVar12;

      if ((uVar5 & 1) != 0) {

        FUN_002a27c0(dVar13,dVar12,param_3,param_4,param_6);

      }

      FUN_0029e5e0(dVar13,dVar12,param_3,param_4,param_6);

      DAT_003e80b8 = 0;

      uVar7 = extraout_x1_02;

      if (bVar2 != false) {

        FUN_00295600(param_6);

        dVar11 = (double)_CGRectGetMaxX();

        FUN_002925a0(param_6);

        FUN_0029e5e0(dVar11 + 3.0,dVar12 + (param_4 - param_2) * 0.5,param_1,param_2,param_7);

        uVar7 = extraout_x1_03;

      }

      FUN_0029e8a0(param_7,uVar7,bVar2 ^ 1);

      _objc_release(uVar6);

      uVar6 = 1;

    }

  }

  _objc_release(lVar3);

LAB_0010e414:

  _objc_release(param_7);

  _objc_release(param_6);

  _objc_release(param_5);

  return uVar6;

}




