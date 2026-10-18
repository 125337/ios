// FUN_0020a174 @0x20a174


void FUN_0020a174(undefined1 param_1 [16],double param_2,double param_3,double param_4,long param_5,

                 ulong param_6)



{

  double *pdVar1;

  undefined1 uVar2;

  byte bVar3;

  bool bVar4;

  byte bVar5;

  uint uVar6;

  long lVar7;

  long lVar8;

  undefined8 uVar9;

  ulong uVar10;

  long lVar11;

  long lVar12;

  long lVar13;

  long lVar14;

  long lVar15;

  long lVar16;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  bool bVar17;

  bool bVar18;

  uint uVar19;

  double dVar20;

  double dVar21;

  double dVar22;

  double dVar23;

  double dVar24;

  double dVar25;

  double dVar26;

  double dVar27;

  double dVar28;

  double dVar29;

  double dVar30;

  double dVar31;

  double dVar32;

  undefined1 auVar33 [16];

  double local_130;

  double local_128;

  long local_108;

  byte local_d9;

  undefined *local_d8;

  undefined8 local_d0;

  code *local_c8;

  undefined *puStack_c0;

  long local_b8;

  undefined1 local_b0;

  

  _objc_retain();

  bVar3 = DAT_003ead50;

  if ((DAT_003ead50 == 1) && ((DAT_003ead51 & 1) != 0)) goto LAB_0020ad8c;

  auVar33 = FUN_00297960(&_OBJC_CLASS___NSThread);

  if ((auVar33._0_8_ & 1) == 0) {

    local_d8 = PTR___NSConcreteStackBlock_003886f0;

    local_d0 = 0xc2000000;

    local_c8 = FUN_00221d4c;

    puStack_c0 = &DAT_0038d0a8;

    _objc_retain(param_5);

    local_b0 = (undefined1)param_6;

    local_b8 = param_5;

    _dispatch_async(PTR___dispatch_main_q_00388740,&local_d8);

    lVar7 = local_b8;

  }

  else {

    if (param_5 == 0) goto LAB_0020ad8c;

    FUN_002a6080(param_5,auVar33._8_8_,&cf_m_tableView);

    lVar7 = _objc_retainAutoreleasedReturnValue();

    if (lVar7 == 0) goto LAB_0020ad8c;

    if (DAT_003eaac8 != 6) {

      _objc_setAssociatedObject(lVar7,&DAT_003eaabd,0,1);

    }

    _objc_setAssociatedObject(lVar7,&DAT_003eae6f,param_5,0);

    _objc_setAssociatedObject(lVar7,&DAT_003eae70,PTR____kCFBooleanTrue_00388320,1);

    _objc_setAssociatedObject(lVar7,&DAT_003eae6e,0,1);

    FUN_002a4880(lVar7);

    lVar8 = _objc_retainAutoreleasedReturnValue();

    if (lVar8 == 0) {

      uVar9 = _objc_opt_class(&_OBJC_CLASS___UIViewController);

      uVar10 = _objc_opt_isKindOfClass(param_5,uVar9);

      if ((uVar10 & 1) == 0) goto LAB_0020a314;

      FUN_002a6220(param_5);

      local_108 = _objc_retainAutoreleasedReturnValue();

    }

    else {

LAB_0020a314:

      _objc_retain(lVar8);

      local_108 = lVar8;

    }

    _objc_release(lVar8);

    _objc_getAssociatedObject(param_5,&DAT_003eae53);

    lVar8 = _objc_retainAutoreleasedReturnValue();

    _objc_getAssociatedObject(param_5,&DAT_003ead83);

    lVar11 = _objc_retainAutoreleasedReturnValue();

    _objc_getAssociatedObject(param_5,&DAT_003eae6c);

    uVar9 = _objc_retainAutoreleasedReturnValue();

    uVar6 = FUN_002924e0();

    _objc_release(uVar9);

    _objc_getAssociatedObject(param_5,&DAT_003eae6d);

    lVar12 = _objc_retainAutoreleasedReturnValue();

    _objc_getAssociatedObject(param_5,&DAT_003eaf10);

    lVar13 = _objc_retainAutoreleasedReturnValue();

    if (((DAT_003eaa30 == '\x01') && (DAT_003eaac8 - 1 < 6)) && (local_108 != 0)) {

      if (1 < DAT_003eaac8 - 5) {

        if (lVar11 != 0) {

          FUN_0029b340(lVar11);

          _objc_setAssociatedObject(param_5,&DAT_003ead83,0,1);

        }

        _objc_getAssociatedObject(param_5,&DAT_003eae52);

        lVar14 = _objc_retainAutoreleasedReturnValue();

        if (lVar14 != 0) {

          FUN_0029b340(lVar14);

          _objc_setAssociatedObject(param_5,&DAT_003eae52,0,1);

        }

        FUN_00221d5c(lVar7);

        dVar21 = (double)FUN_00215bbc(lVar7);

        dVar31 = 54.0;

        if (param_3 <= 274.0) {

          dVar31 = 48.0;

        }

        if ((DAT_003eaac8 & 0xfffffffffffffffd) == 1) {

          dVar20 = (double)_CGRectGetMinX(dVar21,param_2,param_3,param_4);

        }

        else {

          dVar20 = (double)_CGRectGetMaxX(dVar21,param_2,param_3,param_4);

          dVar20 = dVar20 - dVar31;

        }

        local_d9 = 0;

        dVar25 = param_2;

        dVar27 = dVar31;

        local_128 = param_4;

        local_130 = (double)FUN_00216410(dVar20,lVar7,local_108,&local_d9);

        if ((local_d9 & 1) == 0) {

          dVar20 = dVar27;

          dVar28 = local_128;

          _objc_getAssociatedObject(param_5,&DAT_003eaf11);

          lVar16 = _objc_retainAutoreleasedReturnValue();

          if (lVar16 == 0) {

LAB_0020a740:

            local_130 = (double)FUN_00222b4c(local_130,&local_d9);

          }

          else {

            FUN_00290aa0(lVar16);

            uVar10 = _CGRectIsEmpty();

            uVar2 = DAT_003eaa60;

            dVar30 = DAT_003eaa58;

            dVar29 = DAT_003eaa50;

            dVar32 = DAT_003eaa48;

            dVar26 = DAT_003eaa40;

            DAT_003eaa40 = dVar26;

            DAT_003eaa48 = dVar32;

            DAT_003eaa50 = dVar29;

            DAT_003eaa58 = dVar30;

            DAT_003eaa60 = uVar2;

            if ((uVar10 & 1) != 0) goto LAB_0020a740;

            DAT_003eaa40 = (double)FUN_00290aa0(lVar16);

            DAT_003eaa60 = 1;

            DAT_003eaa48 = DAT_003eaa50;

            DAT_003eaa50 = dVar20;

            DAT_003eaa58 = dVar28;

            local_130 = (double)FUN_00222b4c(local_130,&local_d9);

            DAT_003eaa40 = dVar26;

            DAT_003eaa48 = dVar32;

            DAT_003eaa50 = dVar29;

            DAT_003eaa58 = dVar30;

            DAT_003eaa60 = uVar2;

            if ((local_d9 & 1) == 0) goto LAB_0020a740;

          }

          _objc_release(lVar16);

        }

        pdVar1 = (double *)&DAT_003eaae0;

        dVar20 = dVar21;

        if ((DAT_003eaac8 & 0xfffffffffffffffd) == 1) {

          dVar28 = param_3;

          pdVar1 = (double *)&DAT_003eaad8;

          if (DAT_003eaad0 == 0) {

            dVar20 = dVar21 + dVar31;

            dVar28 = param_3 - dVar31;

          }

        }

        else {

          dVar28 = param_3 - dVar31;

          if (DAT_003eaad0 != 0) {

            dVar28 = param_3;

          }

        }

        dVar32 = *pdVar1;

        dVar26 = param_2;

        dVar29 = param_4;

        dVar22 = (double)FUN_00215cf8(dVar20);

        dVar23 = (double)FUN_00215cf8(local_130 + dVar32);

        dVar20 = dVar25;

        dVar32 = dVar27;

        dVar30 = local_128;

        dVar24 = (double)FUN_00295600(lVar7);

        if (((0.5 <= ABS(dVar24 - dVar22)) || (0.5 <= ABS(dVar20 - dVar26))) ||

           ((0.5 <= ABS(dVar32 - dVar28) || (0.5 <= ABS(dVar30 - dVar29))))) {

          FUN_00222cec(dVar22,dVar26,dVar28,dVar29,lVar7);

          bVar17 = false;

          bVar18 = true;

        }

        else {

          bVar17 = true;

          bVar18 = false;

        }

        FUN_002a6100(dVar21,param_2,param_3,param_4,&_OBJC_CLASS___NSValue);

        uVar9 = _objc_retainAutoreleasedReturnValue();

        _objc_setAssociatedObject(lVar7,&DAT_003eae72,uVar9,1);

        _objc_release(uVar9);

        FUN_002a6100(dVar22,&_OBJC_CLASS___NSValue);

        uVar9 = _objc_retainAutoreleasedReturnValue();

        _objc_setAssociatedObject(lVar7,&DAT_003eae71,uVar9,1);

        _objc_release(uVar9);

        FUN_0021676c(lVar7);

        bVar5 = local_d9;

        FUN_00299380(&_OBJC_CLASS___NSNumber,extraout_x1,local_d9);

        uVar9 = _objc_retainAutoreleasedReturnValue();

        _objc_setAssociatedObject(param_5,&DAT_003eae6c,uVar9,1);

        _objc_release(uVar9);

        FUN_002993a0(dVar31,&_OBJC_CLASS___NSNumber);

        uVar9 = _objc_retainAutoreleasedReturnValue();

        _objc_setAssociatedObject(param_5,&DAT_003eae6d,uVar9,1);

        _objc_release(uVar9);

        lVar16 = 1;

        if ((DAT_003eaac8 & 0xfffffffffffffffd) != 1) {

          lVar16 = 2;

        }

        FUN_00299400(&_OBJC_CLASS___NSNumber,extraout_x1_00,lVar16);

        uVar9 = _objc_retainAutoreleasedReturnValue();

        _objc_setAssociatedObject(param_5,&DAT_003eaf10,uVar9,1);

        _objc_release(uVar9);

        uVar19 = (uint)bVar5;

        if (uVar19 != 0) {

          DAT_003eaa60 = 1;

          dVar26 = dVar25;

          dVar28 = dVar27;

          dVar29 = local_128;

          DAT_003eaa38 = dVar31;

          DAT_003eaa40 = dVar23;

          DAT_003eaa48 = dVar25;

          DAT_003eaa50 = dVar27;

          DAT_003eaa58 = local_128;

          FUN_002a6100(&_OBJC_CLASS___NSValue);

          uVar9 = _objc_retainAutoreleasedReturnValue();

          _objc_setAssociatedObject(param_5,&DAT_003eaf11,uVar9,1);

          _objc_release(uVar9);

        }

        bVar4 = false;

        if ((DAT_003eaa30 == '\x01') && (DAT_003eaad0 == 1)) {

          bVar4 = DAT_003eaac8 - 1 < 4;

        }

        if (((bVar5 & 1) != 0) || (bVar4)) {

          if (lVar12 == 0) {

            dVar21 = -1.0;

          }

          else {

            dVar21 = (double)FUN_00294860();

          }

          if (lVar13 == 0) {

            lVar15 = 0x7fffffffffffffff;

          }

          else {

            lVar15 = FUN_002974a0();

          }

          if ((((lVar12 != 0) && (bVar5 == uVar6)) && ((byte)(bVar18 | bVar3 ^ 1) == 1)) &&

             (((lVar13 != 0 && (dVar26 = 0.5, ABS(dVar21 - dVar31) <= 0.5)) && (lVar15 == lVar16))))

          goto LAB_0020ab5c;

LAB_0020ab60:

          FUN_00221f48(lVar7);

        }

        else {

          bVar18 = uVar19 != uVar6;

          if ((bVar5 != uVar6) || (bVar3 != 1)) {

LAB_0020ab5c:

            if (bVar18 != false) goto LAB_0020ab60;

          }

        }

        if ((bVar3 & 1) == 0 && !bVar17) {

          FUN_0011afe4(lVar7);

        }

        if (lVar8 == 0) {

          _objc_alloc(&objc::class_t::XZYCLGSideRailView);

          dVar26 = dVar25;

          dVar28 = dVar27;

          dVar29 = local_128;

          lVar8 = FUN_00296b80(dVar23);

          _objc_setAssociatedObject(param_5,&DAT_003eae53,lVar8,1);

          FUN_00291380(local_108,extraout_x1_02,lVar8);

          bVar17 = true;

        }

        else {

          FUN_002a4880(lVar8);

          lVar16 = _objc_retainAutoreleasedReturnValue();

          _objc_release();

          if (lVar16 == local_108) {

            bVar17 = false;

          }

          else {

            FUN_0029b340(lVar8);

            FUN_00291380(local_108,extraout_x1_01,lVar8);

            bVar17 = true;

          }

        }

        dVar21 = (double)FUN_00295600(lVar8);

        if ((((0.5 <= ABS(dVar21 - dVar23)) || (0.5 <= ABS(dVar26 - dVar25))) ||

            (0.5 <= ABS(dVar28 - dVar27))) || (0.5 <= ABS(dVar29 - local_128))) {

          FUN_0029e5e0(dVar23,dVar25,dVar27,local_128,lVar8);

        }

        FUN_00297e40(lVar8);

        uVar9 = _objc_retainAutoreleasedReturnValue();

        FUN_0029d820(0);

        _objc_release(uVar9);

        FUN_002a4840(local_108);

        uVar9 = _objc_retainAutoreleasedReturnValue();

        FUN_00297d80();

        lVar16 = _objc_retainAutoreleasedReturnValue();

        _objc_release();

        _objc_release(uVar9);

        if (lVar16 != lVar8) {

          FUN_002925e0(local_108,extraout_x1_03,lVar8);

        }

        if ((bVar3 & 1) == 0) {

          if ((param_6 & 1) == 0 && !bVar17) {

            FUN_00294d00(lVar8);

            lVar16 = _objc_retainAutoreleasedReturnValue();

            _objc_release();

            if (lVar16 != 0) goto LAB_0020ad54;

          }

          FUN_00222d90(param_5);

          uVar9 = _objc_retainAutoreleasedReturnValue();

          FUN_00220818();

          auVar33 = _objc_retainAutoreleasedReturnValue();

          FUN_00293360(lVar8,auVar33._8_8_,auVar33._0_8_,param_5);

          _objc_release(auVar33._0_8_);

          _objc_release(uVar9);

        }

        goto LAB_0020ad54;

      }

      if ((uVar6 & 1) == 0) {

        if (lVar12 == 0) {

          bVar17 = true;

        }

        else {

          dVar21 = (double)FUN_00294860();

          bVar17 = dVar21 <= 0.0;

        }

      }

      else {

        bVar17 = false;

      }

      FUN_002220c8(param_5,param_6,lVar7,local_108,bVar3);

      if ((bVar3 & 1) == 0 && !bVar17) {

        FUN_00221f48(lVar7);

      }

    }

    else {

      _objc_setAssociatedObject(param_5,&DAT_003eae6c,0,1);

      _objc_setAssociatedObject(param_5,&DAT_003eae6d,0,1);

      _objc_setAssociatedObject(param_5,&DAT_003eaf10,0,1);

      if (lVar8 != 0) {

        FUN_0029b340(lVar8);

        _objc_setAssociatedObject(param_5,&DAT_003eae53,0,1);

      }

      if (lVar11 != 0) {

        FUN_0029b340(lVar11);

        _objc_setAssociatedObject(param_5,&DAT_003ead83,0,1);

      }

      _objc_getAssociatedObject(param_5,&DAT_003eae52);

      lVar14 = _objc_retainAutoreleasedReturnValue();

      if (lVar14 != 0) {

        FUN_0029b340(lVar14);

        _objc_setAssociatedObject(param_5,&DAT_003eae52,0,1);

      }

      FUN_00221d5c(lVar7);

      bVar5 = FUN_00221ddc(lVar7);

      if (((bVar3 | bVar5 ^ 1) & 1) == 0) {

        FUN_0011afe4(lVar7);

      }

      FUN_0021676c(lVar7);

      if ((uVar6 & 1) == 0) {

        if (lVar12 == 0) goto LAB_0020ad54;

        dVar21 = (double)FUN_00294860();

        bVar17 = dVar21 <= 0.0;

      }

      else {

        bVar17 = false;

      }

      if ((bVar3 & 1) == 0 && !bVar17) {

        FUN_00221f48(lVar7);

      }

LAB_0020ad54:

      _objc_release(lVar14);

    }

    _objc_release(lVar13);

    _objc_release(lVar12);

    _objc_release(lVar11);

    _objc_release(lVar8);

    _objc_release(local_108);

  }

  _objc_release(lVar7);

LAB_0020ad8c:

  _objc_release(param_5);

  return;

}




