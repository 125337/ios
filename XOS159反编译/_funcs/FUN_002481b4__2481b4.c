// FUN_002481b4 @0x2481b4


void FUN_002481b4(undefined8 param_1,long param_2,long param_3)



{

  undefined8 *puVar1;

  bool bVar2;

  bool bVar3;

  char cVar4;

  bool bVar5;

  int iVar6;

  undefined8 uVar8;

  long lVar9;

  long lVar10;

  undefined8 uVar11;

  undefined8 uVar12;

  undefined8 uVar13;

  undefined8 uVar14;

  undefined8 uVar15;

  undefined8 uVar16;

  ulong extraout_x1;

  undefined8 extraout_x1_00;

  double dVar17;

  undefined1 auVar18 [16];

  undefined1 auVar19 [16];

  undefined **local_d8;

  undefined **local_d0;

  undefined **local_c8;

  undefined **local_c0;

  undefined **local_b8;

  undefined **local_b0;

  undefined **local_a8;

  undefined8 local_a0;

  undefined8 local_98;

  undefined8 local_90;

  undefined8 local_88;

  undefined8 local_80;

  undefined8 local_78;

  undefined8 local_70;

  long local_68;

  undefined8 uVar7;

  

  local_68 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  auVar18 = _objc_alloc_init(&objc::class_t::XZYHomeDockLiquidItem);

  uVar7 = auVar18._0_8_;

  FUN_0029c840(uVar7,auVar18._8_8_,param_2);

  FUN_00237f98(param_2);

  auVar18 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1f60(uVar7,auVar18._8_8_,auVar18._0_8_);

  _objc_release(auVar18._0_8_);

  dVar17 = 36.0;

  if (DAT_003e7250 * 0.6 <= 36.0) {

    dVar17 = DAT_003e7250 * 0.6;

  }

  FUN_0029eb60(dVar17,uVar7);

  cVar4 = DAT_003e7268;

  if (DAT_003e7268 == '\x01') {

    FUN_00239d20(param_2,param_1);

    auVar18 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    auVar18._8_8_ = 0;

    auVar18._0_8_ = extraout_x1;

    auVar18 = auVar18 << 0x40;

  }

  FUN_0029cf80(uVar7,auVar18._8_8_,auVar18._0_8_);

  if (cVar4 != '\0') {

    _objc_release(auVar18._0_8_);

  }

  bVar5 = param_2 == param_3;

  if (DAT_003eb269 == '\x01') {

    FUN_00236a48(param_2,param_2 == param_3);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_00236cac();

    auVar18 = _objc_retainAutoreleasedReturnValue();

    FUN_0029ec00(uVar7,auVar18._8_8_,auVar18._0_8_);

    _objc_release(auVar18._0_8_);

    _objc_release(uVar8);

  }

  FUN_00296480(uVar7);

  lVar9 = _objc_retainAutoreleasedReturnValue();

  if ((-1 < param_2) && (lVar9 == 0)) {

    FUN_00297be0(param_1);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    lVar9 = FUN_00293860();

    _objc_release(uVar8);

    if (lVar9 <= param_2) goto LAB_0024841c;

    FUN_00297be0(param_1);

    auVar18 = _objc_retainAutoreleasedReturnValue();

    FUN_00299500(auVar18._0_8_,auVar18._8_8_,param_2);

    lVar9 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar18._0_8_);

    if (param_2 == param_3) {

      FUN_0029c2a0(lVar9);

      auVar19 = _objc_retainAutoreleasedReturnValue();

      lVar10 = auVar19._0_8_;

      if (lVar10 == 0) {

        FUN_00296480(lVar9);

        auVar18 = _objc_retainAutoreleasedReturnValue();

        goto LAB_002483d0;

      }

      bVar2 = false;

    }

    else {

      FUN_00296480(lVar9);

      auVar18 = _objc_retainAutoreleasedReturnValue();

LAB_002483d0:

      lVar10 = auVar18._0_8_;

      auVar19._8_8_ = 0;

      auVar19._0_8_ = auVar18._8_8_;

      auVar19 = auVar19 << 0x40;

      bVar2 = bVar5;

    }

    FUN_0029ec00(uVar7,auVar19._8_8_,lVar10);

    if (param_2 != param_3) {

      _objc_release(lVar10);

    }

    if (bVar2) {

      _objc_release(lVar10);

    }

    if (param_2 == param_3) {

      _objc_release(auVar19._0_8_);

    }

  }

  _objc_release(lVar9);

LAB_0024841c:

  FUN_00296480(uVar7);

  lVar9 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar9 == 0) {

    FUN_00248a34(param_2);

    auVar18 = _objc_retainAutoreleasedReturnValue();

    FUN_00299540(auVar18._0_8_,auVar18._8_8_,&cf_icon);

    lVar9 = _objc_retainAutoreleasedReturnValue();

    if (lVar9 == 0) {

      FUN_00297be0(param_1);

      uVar8 = _objc_retainAutoreleasedReturnValue();

      uVar11 = FUN_00293860();

      FUN_00248b94(param_2,uVar11);

      lVar10 = _objc_retainAutoreleasedReturnValue();

      _objc_release(uVar8);

    }

    else {

      _objc_retain(lVar9);

      lVar10 = lVar9;

    }

    _objc_release(lVar9);

    _objc_release(auVar18._0_8_);

    FUN_00296380(uVar7);

    uVar8 = 6;

    if (param_2 != param_3) {

      uVar8 = 4;

    }

    FUN_0023720c(lVar10,uVar8);

    auVar18 = _objc_retainAutoreleasedReturnValue();

    FUN_0029ec00(uVar7,auVar18._8_8_,auVar18._0_8_);

    _objc_release(auVar18._0_8_);

    _objc_release(lVar10);

  }

  iVar6 = FUN_002365b0();

  puVar1 = &DAT_003eb170;

  if (iVar6 == 0) {

    puVar1 = &DAT_003eb168;

  }

  FUN_0023cdac(*puVar1);

  auVar18 = _objc_retainAutoreleasedReturnValue();

  lVar9 = auVar18._0_8_;

  if (lVar9 == 0) {

    if (param_2 == param_3) {

      FUN_002a4a80();

      auVar18 = _objc_retainAutoreleasedReturnValue();

      bVar3 = false;

      bVar2 = false;

    }

    else if (iVar6 == 0) {

      FUN_00292400(&_OBJC_CLASS___UIColor);

      auVar18 = _objc_retainAutoreleasedReturnValue();

      bVar3 = false;

      bVar2 = true;

    }

    else {

      FUN_002a64a0();

      auVar18 = _objc_retainAutoreleasedReturnValue();

      bVar2 = false;

      bVar3 = true;

    }

  }

  else {

    bVar5 = false;

    bVar3 = false;

    bVar2 = false;

  }

  uVar8 = auVar18._0_8_;

  FUN_0029d520(uVar7,auVar18._8_8_,uVar8);

  if (bVar2) {

    _objc_release(uVar8);

  }

  if (bVar3) {

    _objc_release(uVar8);

  }

  if (bVar5) {

    _objc_release(uVar8);

  }

  if ((param_2 < 0) && (lVar9 == 0)) {

    local_d8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_003c0040;

    FUN_002a4a80(&_OBJC_CLASS___UIColor);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    local_d0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_003c0058;

    local_a0 = uVar8;

    FUN_002a4b80(&_OBJC_CLASS___UIColor);

    uVar11 = _objc_retainAutoreleasedReturnValue();

    local_c8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_003c0070;

    local_98 = uVar11;

    FUN_002a4d00(&_OBJC_CLASS___UIColor);

    uVar12 = _objc_retainAutoreleasedReturnValue();

    local_c0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_003c0088;

    local_90 = uVar12;

    FUN_002a4b80(&_OBJC_CLASS___UIColor);

    uVar13 = _objc_retainAutoreleasedReturnValue();

    local_b8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_003c00a0;

    local_88 = uVar13;

    FUN_002a4c40(&_OBJC_CLASS___UIColor);

    uVar14 = _objc_retainAutoreleasedReturnValue();

    local_b0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_003c00b8;

    local_80 = uVar14;

    FUN_002a4b60(&_OBJC_CLASS___UIColor);

    uVar15 = _objc_retainAutoreleasedReturnValue();

    local_a8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_003c00d0;

    local_78 = uVar15;

    FUN_002a4ce0(&_OBJC_CLASS___UIColor);

    auVar18 = _objc_retainAutoreleasedReturnValue();

    local_70 = auVar18._0_8_;

    FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar18._8_8_,&local_a0,&local_d8,7);

    uVar16 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar18._0_8_);

    _objc_release(uVar15);

    _objc_release(uVar14);

    _objc_release(uVar13);

    _objc_release(uVar12);

    _objc_release(uVar11);

    _objc_release(uVar8);

    FUN_00299400(&_OBJC_CLASS___NSNumber,extraout_x1_00,param_2);

    auVar19 = _objc_retainAutoreleasedReturnValue();

    FUN_00299540(uVar16,auVar19._8_8_,auVar19._0_8_);

    auVar18 = _objc_retainAutoreleasedReturnValue();

    lVar10 = auVar18._0_8_;

    if (lVar10 == 0) {

      FUN_00292f20(uVar7);

      auVar18 = _objc_retainAutoreleasedReturnValue();

    }

    FUN_0029d520(uVar7,auVar18._8_8_,auVar18._0_8_);

    if (lVar10 == 0) {

      _objc_release(auVar18._0_8_);

    }

    _objc_release(lVar10);

    _objc_release(auVar19._0_8_);

    _objc_release(uVar16);

  }

  _objc_release(lVar9);

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_68) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  _objc_autoreleaseReturnValue(uVar7);

  return;

}




