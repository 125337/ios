// FUN_00093690 @0x93690


void FUN_00093690(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,double param_4,

                 undefined8 param_5)



{

  int iVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  ulong uVar5;

  long lVar6;

  long lVar7;

  long lVar8;

  undefined8 extraout_x1;

  double dVar9;

  double dVar10;

  double dVar11;

  double dVar12;

  undefined1 auVar13 [16];

  

  FUN_00082e7c();

  if ((DAT_003e74b9 != '\x01') || ((DAT_003e74d8 & 1) == 0)) {

    return;

  }

  FUN_00293940(param_5);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  if (lVar2 == 0) {

    return;

  }

  FUN_00293940(param_5);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar4 = _objc_opt_class(&_OBJC_CLASS___UIImageView);

  uVar5 = _objc_opt_isKindOfClass(uVar3,uVar4);

  _objc_release(uVar3);

  _objc_release(lVar2);

  if ((uVar5 & 1) == 0) {

    return;

  }

  if ((DAT_003e74da == '\x01') && (iVar1 = FUN_000a176c(param_5), iVar1 != 0)) {

    FUN_00293940(param_5);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b340();

    _objc_release(uVar3);

    FUN_0029d880(param_5,extraout_x1,0);

    _objc_setAssociatedObject(param_5,"coverImagePath",0,1);

    _objc_setAssociatedObject(param_5,"coverIsSelfAvatar",0,1);

    return;

  }

  iVar1 = FUN_00297a60(param_5);

  if (iVar1 == 0) {

    FUN_002958c0(param_5);

    lVar2 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    FUN_002958e0(param_5);

    lVar2 = _objc_retainAutoreleasedReturnValue();

  }

  if (lVar2 == 0) {

    FUN_002958a0(param_5);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    if (lVar2 == 0) {

      return;

    }

  }

  FUN_000a18d8();

  lVar6 = _objc_retainAutoreleasedReturnValue();

  if (lVar6 == 0) goto LAB_000939c8;

  FUN_00293940(param_5);

  auVar13 = _objc_retainAutoreleasedReturnValue();

  FUN_0029ec00(auVar13._0_8_,auVar13._8_8_,lVar6);

  _objc_release(auVar13._0_8_);

  FUN_00293940(param_5);

  auVar13 = _objc_retainAutoreleasedReturnValue();

  FUN_0029d6c0(auVar13._0_8_,auVar13._8_8_,1);

  _objc_release(auVar13._0_8_);

  FUN_002925a0(param_5);

  FUN_002925a0(param_5);

  dVar9 = param_3;

  if (param_4 <= param_3) {

    dVar9 = param_4;

  }

  dVar12 = DAT_003e79b0 / 100.0;

  if (DAT_003e79b0 <= 0.0) {

    dVar12 = 1.0;

  }

  dVar10 = (double)FUN_000a1824(dVar9 * dVar12,lVar6);

  dVar9 = dVar12;

  FUN_002a4880(param_5);

  lVar7 = _objc_retainAutoreleasedReturnValue();

  if (lVar7 == 0) {

LAB_00093914:

    FUN_00293940(param_5);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_0029e5e0((param_3 - dVar10) * 0.5,(param_4 - dVar12) * 0.5,dVar10,dVar12);

  }

  else {

    FUN_00293940(param_5);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4880();

    lVar8 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    _objc_release(uVar3);

    if (lVar8 != lVar7) goto LAB_00093914;

    dVar11 = (double)FUN_00295600(param_5);

    FUN_00293940(param_5);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_0029e5e0((param_3 - dVar10) * 0.5 + dVar11,(param_4 - dVar12) * 0.5 + dVar9,dVar10,dVar12);

  }

  _objc_release(uVar3);

  _objc_release(lVar7);

LAB_000939c8:

  _objc_release(lVar6);

  _objc_release(lVar2);

  return;

}




