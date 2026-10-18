// FUN_0017e04c @0x17e04c


bool FUN_0017e04c(void)



{

  bool bVar1;

  byte bVar2;

  byte bVar3;

  byte bVar4;

  byte bVar5;

  undefined8 uVar6;

  long lVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  long lVar10;

  undefined8 uVar11;

  undefined8 uVar12;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  bool bVar13;

  long lVar14;

  undefined1 auVar15 [16];

  long local_88;

  byte local_61;

  

  FUN_00167d7c();

  uVar6 = _objc_retainAutoreleasedReturnValue();

  lVar7 = FUN_00293860();

  if (lVar7 == 0) {

    bVar13 = false;

    goto LAB_0017e364;

  }

  FUN_00294240(&_OBJC_CLASS___NSFileManager);

  uVar8 = _objc_retainAutoreleasedReturnValue();

  auVar15 = FUN_00293860(uVar6);

  FUN_00291da0(&_OBJC_CLASS___NSMutableArray,auVar15._8_8_,auVar15._0_8_);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  lVar10 = FUN_00138258();

  lVar7 = 0;

  bVar13 = false;

  bVar1 = false;

  local_88 = 0;

  lVar14 = lVar10;

  if (lVar10 < 10) {

    lVar14 = 9;

  }

  lVar14 = lVar14 + -10;

  while( true ) {

    auVar15 = FUN_00293860(uVar6);

    if (auVar15._0_8_ <= lVar7) break;

    FUN_00299500(uVar6,auVar15._8_8_,lVar7);

    uVar11 = _objc_retainAutoreleasedReturnValue();

    uVar12 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);

    auVar15 = _objc_opt_isKindOfClass(uVar11,uVar12);

    uVar12 = auVar15._8_8_;

    if ((auVar15._0_8_ & 1) == 0) {

LAB_0017e220:

      FUN_00291240(uVar9,uVar12,uVar11);

    }

    else {

      _objc_retain(uVar11);

      FUN_0017e440(uVar11);

      uVar12 = _objc_retainAutoreleasedReturnValue();

      auVar15 = FUN_00297fa0();

      if (auVar15._0_8_ == 0) {

        _objc_release(uVar12);

        _objc_release(uVar11);

        uVar12 = extraout_x1_01;

        goto LAB_0017e220;

      }

      local_61 = 0;

      bVar4 = FUN_00295180(uVar8,auVar15._8_8_,uVar12,&local_61);

      bVar2 = local_61;

      FUN_002a4460(uVar12,extraout_x1,&cf_theme_xos);

      auVar15 = _objc_retainAutoreleasedReturnValue();

      local_61 = 0;

      bVar5 = FUN_00295180(uVar8,auVar15._8_8_,auVar15._0_8_,&local_61);

      bVar3 = local_61;

      _objc_release(auVar15._0_8_);

      _objc_release(uVar12);

      _objc_release(uVar11);

      if (((bVar4 & bVar2 & bVar5) == 1) && (uVar12 = extraout_x1_00, (bVar3 & 1) == 0))

      goto LAB_0017e220;

      if (lVar10 < 10) {

LAB_0017e24c:

        bVar13 = true;

      }

      else {

        if (lVar14 != lVar7) {

          if (lVar7 < lVar14) {

            local_88 = local_88 + 1;

          }

          goto LAB_0017e24c;

        }

        bVar13 = true;

        bVar1 = true;

      }

    }

    _objc_release(uVar11);

    lVar7 = lVar7 + 1;

  }

  if (bVar13) {

    FUN_0017247c(uVar9);

    if (9 < lVar10) {

      if (bVar1) {

        lVar7 = FUN_00293860(uVar9);

        if (lVar7 == 0) {

          FUN_00136588();

          auVar15 = _objc_retainAutoreleasedReturnValue();

          uVar12 = auVar15._0_8_;

          FUN_0029b4a0(uVar12,auVar15._8_8_,&cf_CadisCalendarStyle);

        }

        else {

          lVar7 = FUN_00293860(uVar9);

          lVar14 = lVar14 - local_88;

          if (lVar7 <= lVar14) {

            lVar14 = FUN_00293860(uVar9);

            lVar14 = lVar14 + -1;

          }

          FUN_00136588();

          auVar15 = _objc_retainAutoreleasedReturnValue();

          uVar12 = auVar15._0_8_;

          FUN_0029efa0(uVar12,auVar15._8_8_,lVar14 + 10,&cf_CadisCalendarStyle);

        }

LAB_0017e324:

        _objc_release(uVar12);

      }

      else if (0 < local_88) {

        FUN_00136588();

        auVar15 = _objc_retainAutoreleasedReturnValue();

        uVar12 = auVar15._0_8_;

        FUN_0029efa0(uVar12,auVar15._8_8_,lVar10 - local_88,&cf_CadisCalendarStyle);

        goto LAB_0017e324;

      }

      FUN_00136588();

      uVar12 = _objc_retainAutoreleasedReturnValue();

      FUN_002a4a40();

      _objc_release(uVar12);

    }

    FUN_00136604();

    FUN_001728f8();

  }

  _objc_release(uVar9);

  _objc_release(uVar8);

LAB_0017e364:

  _objc_release(uVar6);

  return bVar13;

}




