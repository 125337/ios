// FUN_00188558 @0x188558


void FUN_00188558(int param_1)



{

  long *plVar1;

  long *plVar2;

  uint uVar3;

  bool bVar4;

  int iVar5;

  undefined8 uVar6;

  long lVar7;

  undefined8 extraout_x1;

  uint uVar8;

  uint uVar9;

  long lVar10;

  undefined8 uVar11;

  undefined8 uVar12;

  undefined8 uVar13;

  double dVar14;

  undefined1 auVar15 [16];

  uint local_44;

  

  iVar5 = FUN_001331c4();

  plVar2 = &DAT_003e8ca8;

  if (param_1 == 0) {

    plVar2 = &DAT_003e8cb8;

  }

  plVar1 = &DAT_003e8ca0;

  if (param_1 == 0) {

    plVar1 = &DAT_003e8cb0;

  }

  if (iVar5 == 0) {

    plVar2 = plVar1;

  }

  lVar10 = *plVar2;

  _objc_retain(lVar10);

  _objc_retain(lVar10);

  if ((lVar10 == 0) || (auVar15 = FUN_00297fa0(lVar10), auVar15._0_8_ == 0)) {

    _objc_release(lVar10);

  }

  else {

    FUN_002a4560(lVar10,auVar15._8_8_,&cf__,&cf___);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_release(lVar10);

    local_44 = 0;

    FUN_0029be20(&_OBJC_CLASS___NSScanner,extraout_x1,uVar6);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_0029bde0(auVar15._0_8_,auVar15._8_8_,&local_44);

    _objc_release(auVar15._0_8_);

    lVar7 = FUN_00297fa0(uVar6);

    uVar9 = local_44 >> 8;

    if (lVar7 == 8) {

      uVar3 = local_44 >> 0x18;

      dVar14 = (double)(local_44 & 0xff) / 255.0;

      uVar8 = uVar9;

      uVar9 = local_44 >> 0x10;

    }

    else {

      uVar3 = local_44 >> 0x10 & 0xff;

      dVar14 = 1.0;

      uVar8 = local_44;

    }

    FUN_00293040((double)uVar3 / 255.0,(double)(uVar9 & 0xff) / 255.0,(double)(uVar8 & 0xff) / 255.0

                 ,dVar14,&_OBJC_CLASS___UIColor);

    lVar7 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar6);

    if (lVar7 != 0) goto LAB_00188714;

  }

  bVar4 = param_1 == 0;

  uVar12 = 0x3fc999999999999a;

  uVar6 = uVar12;

  if (bVar4) {

    uVar6 = 0x3feccccccccccccd;

  }

  uVar11 = 0x3fe999999999999a;

  if (bVar4) {

    uVar11 = uVar12;

  }

  uVar13 = 0x3fd3333333333333;

  if (bVar4) {

    uVar13 = uVar12;

  }

  FUN_00293040(uVar6,uVar11,uVar13,0x3ff0000000000000,&_OBJC_CLASS___UIColor);

  lVar7 = _objc_retainAutoreleasedReturnValue();

LAB_00188714:

  _objc_release(lVar10);

  _objc_autoreleaseReturnValue(lVar7);

  return;

}




