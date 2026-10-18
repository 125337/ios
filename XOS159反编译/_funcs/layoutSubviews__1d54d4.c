// layoutSubviews @0x1d54d4


/* Function Stack Size: 0x10 bytes */



void XZYCLGHorizontalCard::layoutSubviews(ID param_1,SEL param_2)



{

  int iVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 uVar4;

  undefined8 extraout_x1;

  bool bVar5;

  double dVar6;

  double dVar7;

  double in_d2;

  double in_d3;

  double dVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  undefined1 auVar12 [16];

  ID local_80;

  class_t *pcStack_78;

  

  pcStack_78 = &objc::class_t::XZYCLGHorizontalCard;

  local_80 = param_1;

  _objc_msgSendSuper2(&local_80,"layoutSubviews");

  FUN_002925a0(param_1);

  FUN_002925a0(param_1);

  if (DAT_003e70f1 == '\x01') {

    FUN_00294d20(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    lVar3 = FUN_00295da0();

    bVar5 = 0 < lVar3;

    _objc_release(uVar2);

  }

  else {

    bVar5 = false;

  }

  FUN_002a53a0(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002954e0();

  uVar4 = _objc_retainAutoreleasedReturnValue();

  dVar6 = (double)FUN_00298040();

  dVar6 = (double)(long)dVar6;

  _objc_release(uVar4);

  _objc_release(uVar2);

  if (dVar6 <= 15.0) {

    dVar6 = 15.0;

  }

  dVar8 = in_d2 + -8.0;

  dVar7 = dVar6 + 1.0 + 13.0;

  if (bVar5 == false) {

    dVar7 = dVar6;

  }

  FUN_002a53a0(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e5e0(0x4010000000000000,(long)((in_d3 - dVar7) * 0.5),dVar8,dVar6);

  _objc_release(uVar2);

  FUN_002a53a0(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00295600();

  dVar6 = (double)_CGRectGetMaxY();

  FUN_002938c0(param_1);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  dVar6 = dVar6 + 1.0;

  FUN_0029e5e0(0x4010000000000000,dVar6,dVar8,0x402a000000000000);

  _objc_release(uVar4);

  _objc_release(uVar2);

  FUN_00294d20(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00295da0();

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&::cf__);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002938c0(param_1);

  auVar12 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1d60(auVar12._0_8_,auVar12._8_8_,uVar4);

  _objc_release(auVar12._0_8_);

  _objc_release(uVar4);

  _objc_release(uVar2);

  FUN_002938c0(param_1);

  auVar12 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e8a0(auVar12._0_8_,auVar12._8_8_,bVar5 ^ 1);

  _objc_release(auVar12._0_8_);

  FUN_002938c0(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  iVar1 = FUN_002978a0();

  _objc_release(uVar2);

  if (iVar1 != 0) {

    uVar4 = *(undefined8 *)PTR__CGRectZero_00388bf0;

    dVar6 = *(double *)(PTR__CGRectZero_00388bf0 + 8);

    uVar10 = *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x10);

    uVar11 = *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x18);

    FUN_002938c0(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_0029e5e0(uVar4,dVar6,uVar10,uVar11);

    _objc_release(uVar2);

  }

  FUN_002920a0(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  dVar7 = (double)FUN_00297500();

  _objc_release(uVar2);

  if ((dVar7 <= 0.0) || (dVar6 <= 0.0)) {

    uVar4 = *(undefined8 *)PTR__CGRectZero_00388bf0;

    uVar10 = *(undefined8 *)(PTR__CGRectZero_00388bf0 + 8);

    uVar11 = *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x10);

    uVar9 = *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x18);

    FUN_002920a0(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_0029e5e0(uVar4,uVar10,uVar11,uVar9);

  }

  else {

    dVar6 = 18.0;

    if (18.0 <= dVar7) {

      dVar6 = dVar7;

    }

    if (dVar8 <= dVar6) {

      dVar6 = dVar8;

    }

    FUN_002920a0(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_0029e5e0((in_d2 - dVar6) + -2.0,0x4000000000000000,dVar6,0x4032000000000000);

  }

  _objc_release(uVar2);

  return;

}




