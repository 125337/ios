// FUN_00236cac @0x236cac


void FUN_00236cac(undefined8 param_1)



{

  undefined8 *puVar1;

  int iVar2;

  long lVar3;

  undefined8 uVar4;

  long lVar5;

  undefined8 uVar6;

  ulong uVar7;

  long lVar8;

  long lVar9;

  long lVar10;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 uVar11;

  undefined8 extraout_x1_02;

  char *pcVar12;

  undefined1 auVar13 [16];

  undefined1 auVar14 [16];

  

  _objc_retain();

  lVar3 = FUN_00297fa0(param_1);

  if (lVar3 == 0) {

    lVar3 = 0;

    goto LAB_0023714c;

  }

  FUN_002365b0();

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf_theme______);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002373f0();

  lVar5 = _objc_retainAutoreleasedReturnValue();

  uVar6 = _objc_opt_class(&_OBJC_CLASS___UIImage);

  uVar7 = _objc_opt_isKindOfClass(lVar5,uVar6);

  if ((uVar7 & 1) == 0) {

    FUN_002992c0(&_OBJC_CLASS___NSNull);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if ((lVar5 == lVar3) || (lVar3 = _objc_getClass("MMThemeManager"), lVar3 == 0)) {

      lVar3 = 0;

    }

    else {

      pcVar12 = "sharedInstance";

      uVar7 = _objc_opt_respondsToSelector(lVar3,"sharedInstance");

      if ((uVar7 & 1) == 0) {

        pcVar12 = "shareInstance";

        uVar7 = _objc_opt_respondsToSelector(lVar3,"shareInstance");

        if ((uVar7 & 1) != 0) goto LAB_00236dec;

        pcVar12 = "defaultManager";

        uVar7 = _objc_opt_respondsToSelector(lVar3,"defaultManager");

        if ((uVar7 & 1) != 0) goto LAB_00236dec;

        lVar8 = 0;

      }

      else {

LAB_00236dec:

        _objc_msgSend(lVar3,pcVar12);

        lVar8 = _objc_retainAutoreleasedReturnValue();

      }

      iVar2 = FUN_002365b0();

      if (iVar2 == 0) {

        lVar9 = FUN_00297fa0(DAT_003eb168);

        uVar6 = 0x3fc70a3d70a3d70a;

        if (lVar9 != 0) {

          FUN_0023cdac(DAT_003eb168);

          lVar9 = _objc_retainAutoreleasedReturnValue();

          goto LAB_00236e68;

        }

LAB_00236e70:

        FUN_00293060(uVar6,0x3ff0000000000000,&_OBJC_CLASS___UIColor);

        lVar9 = _objc_retainAutoreleasedReturnValue();

      }

      else {

        lVar9 = FUN_00297fa0(DAT_003eb170);

        uVar6 = 0x3fed70a3d70a3d71;

        if (lVar9 == 0) goto LAB_00236e70;

        FUN_0023cdac(DAT_003eb170);

        lVar9 = _objc_retainAutoreleasedReturnValue();

LAB_00236e68:

        if (lVar9 == 0) goto LAB_00236e70;

      }

      iVar2 = FUN_002365b0();

      puVar1 = &DAT_003eb170;

      if (iVar2 == 0) {

        puVar1 = &DAT_003eb168;

      }

      lVar10 = FUN_00297fa0(*puVar1);

      if (lVar10 == 0) {

        _objc_retain(param_1);

        iVar2 = FUN_002365b0();

        uVar6 = param_1;

        if (iVar2 != 0) {

          auVar14 = FUN_00295fa0(param_1,extraout_x1_00,&cf__dark);

          if ((auVar14._0_8_ & 1) == 0) {

            auVar14 = FUN_00295fa0(param_1,auVar14._8_8_,&cf__png);

            if ((auVar14._0_8_ & 1) == 0) {

              FUN_002a44a0(param_1,auVar14._8_8_,&cf__dark);

              uVar6 = _objc_retainAutoreleasedReturnValue();

              _objc_release(param_1);

            }

          }

        }

        if ((lVar8 == 0) ||

           (uVar7 = _objc_opt_respondsToSelector(lVar8,"imageNamed:"), lVar10 = lVar8,

           (uVar7 & 1) == 0)) {

          auVar14 = _objc_opt_respondsToSelector(lVar3,"imageNamed:");

          uVar11 = auVar14._8_8_;

          lVar10 = lVar3;

          if ((auVar14._0_8_ & 1) != 0) goto LAB_00236fdc;

LAB_00237090:

          uVar7 = FUN_00297820(uVar6,uVar11,param_1);

          if (((uVar7 & 1) == 0) &&

             (((lVar8 != 0 &&

               (uVar7 = _objc_opt_respondsToSelector(lVar8,"imageNamed:"), lVar10 = lVar8,

               (uVar7 & 1) != 0)) ||

              (uVar7 = _objc_opt_respondsToSelector(lVar3,"imageNamed:"), lVar10 = lVar3,

              (uVar7 & 1) != 0)))) {

            _objc_msgSend(lVar10,"imageNamed:",param_1);

            lVar10 = _objc_retainAutoreleasedReturnValue();

            _objc_release(uVar6);

            auVar13._8_8_ = extraout_x1_02;

            auVar13._0_8_ = lVar10;

            if (lVar10 != 0) goto LAB_0023706c;

          }

          else {

            _objc_release(uVar6);

          }

          goto LAB_00236eb8;

        }

LAB_00236fdc:

        _objc_msgSend(lVar10,"imageNamed:",uVar6);

        auVar14 = _objc_retainAutoreleasedReturnValue();

        uVar11 = auVar14._8_8_;

        if (auVar14._0_8_ == 0) goto LAB_00237090;

        _objc_release(uVar6);

        auVar13._8_8_ = extraout_x1_01;

        auVar13._0_8_ = auVar14._0_8_;

LAB_0023706c:

        uVar6 = auVar13._0_8_;

        FUN_00296620(uVar6,auVar13._8_8_,1);

        lVar3 = _objc_retainAutoreleasedReturnValue();

      }

      else {

LAB_00236eb8:

        if (((lVar8 == 0) ||

            (uVar7 = _objc_opt_respondsToSelector

                               (lVar8,"svgImageNamed:size:color:alpha:angle:ignoreNotFound:"),

            lVar10 = lVar8, (uVar7 & 1) == 0)) &&

           (uVar7 = _objc_opt_respondsToSelector

                              (lVar3,"svgImageNamed:size:color:alpha:angle:ignoreNotFound:"),

           lVar10 = lVar3, (uVar7 & 1) == 0)) {

          if (((lVar8 != 0) &&

              (uVar7 = _objc_opt_respondsToSelector(lVar8,"svgImageNamed:size:color:"),

              lVar10 = lVar8, (uVar7 & 1) != 0)) ||

             (uVar7 = _objc_opt_respondsToSelector(lVar3,"svgImageNamed:size:color:"),

             lVar10 = lVar3, (uVar7 & 1) != 0)) {

            _objc_msgSend(0x4050000000000000,0x4050000000000000,lVar10,"svgImageNamed:size:color:",

                          param_1,lVar9);

            auVar13 = _objc_retainAutoreleasedReturnValue();

            goto LAB_00237064;

          }

          lVar3 = 0;

          uVar6 = 0;

        }

        else {

          _objc_msgSend(0x4050000000000000,0x4050000000000000,0x3ff0000000000000,lVar10,

                        "svgImageNamed:size:color:alpha:angle:ignoreNotFound:",param_1,lVar9,0,1);

          auVar13 = _objc_retainAutoreleasedReturnValue();

LAB_00237064:

          if (auVar13._0_8_ != 0) goto LAB_0023706c;

          lVar3 = 0;

          uVar6 = 0;

        }

      }

      FUN_00237460(uVar4,lVar3);

      _objc_release(uVar6);

      _objc_release(lVar9);

      _objc_release(lVar8);

    }

  }

  else {

    _objc_retain(lVar5);

    lVar3 = lVar5;

  }

  _objc_release(lVar5);

  _objc_release(uVar4);

LAB_0023714c:

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(lVar3);

  return;

}




