// FUN_00096f0c @0x96f0c


void FUN_00096f0c(undefined8 param_1)



{

  byte *pbVar1;

  byte *pbVar2;

  undefined1 auVar3 [16];

  undefined *puVar4;

  byte bVar5;

  byte bVar6;

  int iVar7;

  ulong uVar8;

  undefined8 uVar9;

  long lVar10;

  undefined8 uVar11;

  long lVar12;

  long lVar13;

  long lVar14;

  undefined8 uVar15;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined1 auVar16 [16];

  

  (*DAT_003e77d8)();

  uVar8 = FUN_000a8840(param_1);

  if (((uVar8 & 1) != 0) || (iVar7 = FUN_000a89d8(), iVar7 == 0)) {

    return;

  }

  FUN_000828e0();

  FUN_002959c0(param_1);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6280(param_1);

  lVar10 = _objc_retainAutoreleasedReturnValue();

  _objc_getAssociatedObject(lVar10,PTR_LOOP_003e5ce0);

  uVar11 = _objc_retainAutoreleasedReturnValue();

  bVar5 = FUN_002924e0();

  _objc_release(uVar11);

  if (DAT_003e76c0 == 0) {

    DAT_003e76c0 = _objc_getClass("TextMessageSubViewModel");

  }

  lVar12 = DAT_003e76c0;

  _objc_retain(DAT_003e76c0);

  _objc_autorelease(lVar12);

  auVar16 = _objc_opt_isKindOfClass(lVar10,lVar12);

  if ((auVar16._0_8_ & 1) != 0) {

    FUN_002a6080(lVar10,auVar16._8_8_,&cf_parentModel);

    lVar12 = _objc_retainAutoreleasedReturnValue();

    if (lVar12 != 0) {

      _objc_getAssociatedObject(lVar12,PTR_LOOP_003e5ce0);

      uVar11 = _objc_retainAutoreleasedReturnValue();

      bVar5 = FUN_002924e0();

      _objc_release(uVar11);

      _objc_getAssociatedObject(lVar12,PTR_LOOP_003e5cd0);

      uVar11 = _objc_retainAutoreleasedReturnValue();

      bVar6 = FUN_002924e0();

      _objc_release(uVar11);

      if (((bVar5 | bVar6 ^ 0xff) & 1) == 0) {

        auVar16 = _objc_opt_respondsToSelector(lVar12,"subViewModels");

        if ((auVar16._0_8_ & 1) != 0) {

          FUN_002a6080(lVar12,auVar16._8_8_,&cf_subViewModels);

          lVar13 = _objc_retainAutoreleasedReturnValue();

          if ((lVar13 != 0) && (uVar8 = FUN_00293860(lVar13), 1 < uVar8)) {

            FUN_00295440(lVar13);

            auVar16 = _objc_retainAutoreleasedReturnValue();

            lVar14 = auVar16._0_8_;

            if (lVar10 != lVar14) {

              FUN_0029e8a0(uVar9,auVar16._8_8_,1);

              _objc_release(lVar14);

              goto LAB_0009723c;

            }

            _objc_release(lVar14);

          }

          _objc_release(lVar13);

        }

        bVar5 = 0;

      }

    }

    _objc_release(lVar12);

  }

  uVar8 = _objc_opt_respondsToSelector(lVar10,"isSender");

  if ((uVar8 & 1) == 0) {

    uVar11 = 0;

  }

  else {

    uVar11 = FUN_00297a80(lVar10);

  }

  auVar16 = _objc_opt_respondsToSelector(lVar10,"messageWrap");

  if ((auVar16._0_8_ & 1) == 0) {

    auVar3._8_8_ = 0;

    auVar3._0_8_ = auVar16._8_8_;

    auVar16 = auVar3 << 0x40;

LAB_0009717c:

    iVar7 = 0;

  }

  else {

    FUN_00298ce0(lVar10);

    auVar16 = _objc_retainAutoreleasedReturnValue();

    lVar12 = auVar16._0_8_;

    if (lVar12 == 0) goto LAB_0009717c;

    iVar7 = FUN_000a8a64(lVar12);

    auVar16._8_8_ = extraout_x1;

    auVar16._0_8_ = lVar12;

  }

  lVar12 = auVar16._0_8_;

  pbVar1 = &DAT_003e7a29;

  pbVar2 = &DAT_003e7a28;

  if ((int)uVar11 == 0) {

    pbVar1 = &DAT_003e7a2b;

    pbVar2 = &DAT_003e7a2a;

  }

  if (iVar7 == 0) {

    pbVar2 = pbVar1;

  }

  bVar6 = *pbVar2;

  FUN_0029e8a0(uVar9,auVar16._8_8_,(bVar5 | bVar6) & 1);

  puVar4 = PTR_LOOP_003e6440;

  FUN_00299380(&_OBJC_CLASS___NSNumber,extraout_x1_00,bVar6 & 1);

  uVar15 = _objc_retainAutoreleasedReturnValue();

  _objc_setAssociatedObject(param_1,puVar4,uVar15,1);

  _objc_release(uVar15);

  puVar4 = PTR_LOOP_003e6448;

  FUN_00299380(&_OBJC_CLASS___NSNumber,extraout_x1_01,uVar11);

  lVar13 = _objc_retainAutoreleasedReturnValue();

  _objc_setAssociatedObject(param_1,puVar4,lVar13,1);

LAB_0009723c:

  _objc_release(lVar13);

  _objc_release(lVar12);

  _objc_release(lVar10);

  _objc_release(uVar9);

  return;

}




