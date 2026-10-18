// FUN_0008b3bc @0x8b3bc


void FUN_0008b3bc(long param_1,ulong param_2,cfstringStruct *param_3)



{

  ulong uVar1;

  bool bVar2;

  int iVar3;

  uint uVar4;

  ulong uVar5;

  long lVar6;

  cfstringStruct *pcVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  undefined8 uVar12;

  undefined8 uVar13;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  undefined8 extraout_x1_08;

  uint uVar14;

  undefined8 uVar15;

  double dVar16;

  undefined1 auVar17 [16];

  

  _objc_retain(param_3);

  DAT_003e7730 = 0;

  uVar5 = (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();

  if ((uVar5 & 1) == 0) {

    FUN_00077430();

    lVar6 = *(long *)(param_1 + 0x40);

    if (lVar6 == 0) goto LAB_0008b8ac;

    param_2 = 0;

    pcVar7 = &cf_F;

  }

  else {

    auVar17 = FUN_00297fa0(param_3);

    if (auVar17._0_8_ != 0) {

      uVar15 = *(undefined8 *)(param_1 + 0x20);

      FUN_002a4680(&_OBJC_CLASS___NSString,auVar17._8_8_,&cf__);

      auVar17 = _objc_retainAutoreleasedReturnValue();

      FUN_002a0060(uVar15,auVar17._8_8_,auVar17._0_8_,&cf_ttsFvLastCheckinMessage);

      _objc_release(auVar17._0_8_);

    }

    uVar14 = (uint)param_2;

    if (uVar14 == 0) {

      uVar5 = DAT_003e7748;

      if (2 < DAT_003e7748) {

        uVar5 = 3;

      }

      uVar1 = 4;

      if (DAT_003e7748 + 1 < 4) {

        uVar1 = DAT_003e7748 + 1;

      }

      DAT_003e7748 = uVar1;

      FUN_002941a0(*(undefined8 *)(&DAT_00308188 + uVar5 * 8),&_OBJC_CLASS___NSDate);

      uVar15 = _objc_retainAutoreleasedReturnValue();

    }

    else {

      uVar15 = *(undefined8 *)(param_1 + 0x30);

      FUN_0008b020(uVar15);

      auVar17 = _objc_retainAutoreleasedReturnValue();

      lVar6 = FUN_00293120(uVar15,auVar17._8_8_,auVar17._0_8_);

      _objc_release(auVar17._0_8_);

      if (lVar6 != -1) {

        FUN_002a0060(*(undefined8 *)(param_1 + 0x20),extraout_x1,*(undefined8 *)(param_1 + 0x28),

                     &cf_ttsFvLastAutoCheckinDateAtNine);

      }

      uVar15 = 0;

      DAT_003e7748 = 0;

    }

    uVar8 = DAT_003e7548;

    DAT_003e7548 = uVar15;

    _objc_release(uVar8);

    FUN_002a4a40(*(undefined8 *)(param_1 + 0x20));

    FUN_0006f2c4(0x3ff0000000000000);

    if (((*(byte *)(param_1 + 0x48) & 1) == 0) && (iVar3 = FUN_00077244(), iVar3 != 0)) {

      if (uVar14 == 0) {

        if (DAT_003e7748 == 1) goto LAB_0008b578;

      }

      else {

        uVar5 = FUN_002924c0(*(undefined8 *)(param_1 + 0x20),extraout_x1_00,

                             &cf_ttsFvCheckinNoticeEnabled);

        if ((uVar5 & 1) != 0) {

LAB_0008b578:

          auVar17 = FUN_00297fa0(param_3);

          if (auVar17._0_8_ != 0) {

            pcVar7 = param_3;

            if ((param_2 & 1) == 0) {

              FUN_002a4680(&_OBJC_CLASS___NSString,auVar17._8_8_,&cf___0R1Y__);

              pcVar7 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

            }

            _objc_retain(pcVar7);

            lVar6 = FUN_00297fa0(pcVar7);

            if (lVar6 != 0) {

              FUN_002a2e60(&_OBJC_CLASS___UIApplication);

              uVar15 = _objc_retainAutoreleasedReturnValue();

              auVar17 = FUN_00291a00();

              if (auVar17._0_8_ == 0) {

                auVar17 = FUN_00293580(pcVar7,auVar17._8_8_,&cf_1Y_);

                if ((auVar17._0_8_ & 1) == 0) {

                  uVar5 = FUN_00293580(pcVar7,auVar17._8_8_,&cf_format_s_);

                  bVar2 = (uVar5 & 1) != 0;

                  uVar8 = 1;

                  if (bVar2) {

                    uVar8 = 2;

                  }

                  uVar9 = 0x4010000000000000;

                  if (!bVar2) {

                    uVar9 = 0x4004000000000000;

                  }

                }

                else {

                  uVar9 = 0x4010000000000000;

                  uVar8 = 2;

                }

                FUN_0002a854(uVar9,&cf_F,pcVar7,uVar8);

              }

              else {

                lVar6 = _NSClassFromString(&cf_UILocalNotification);

                if ((lVar6 != 0) &&

                   (uVar5 = _objc_opt_respondsToSelector(uVar15,"presentLocalNotificationNow:"),

                   (uVar5 & 1) != 0)) {

                  auVar17 = _objc_alloc_init(lVar6);

                  uVar8 = auVar17._0_8_;

                  FUN_0029c9e0(uVar8,auVar17._8_8_,&cf_F);

                  FUN_0029c9c0(uVar8,extraout_x1_01,pcVar7);

                  FUN_0029a360(uVar15,extraout_x1_02,uVar8);

                  _objc_release(uVar8);

                }

              }

              _objc_release(uVar15);

            }

            _objc_release(pcVar7);

            if ((param_2 & 1) == 0) {

              _objc_release(pcVar7);

            }

          }

        }

      }

    }

    if ((((*(byte *)(param_1 + 0x48) & 1) == 0) && (uVar4 = FUN_00077244(), (uVar14 & uVar4) == 1))

       && (lVar6 = FUN_00297fa0(param_3), lVar6 != 0)) {

      _objc_retain(param_3);

      lVar6 = FUN_00297fa0(param_3);

      if (lVar6 != 0) {

        _objc_getClass("MMServiceCenter");

        FUN_00294200();

        uVar15 = _objc_retainAutoreleasedReturnValue();

        auVar17 = _objc_getClass("CContactMgr");

        FUN_00295b60(uVar15,auVar17._8_8_,auVar17._0_8_);

        uVar8 = _objc_retainAutoreleasedReturnValue();

        FUN_00295b20();

        uVar9 = _objc_retainAutoreleasedReturnValue();

        FUN_002986c0();

        uVar10 = _objc_retainAutoreleasedReturnValue();

        auVar17 = FUN_00297fa0();

        if (auVar17._0_8_ != 0) {

          FUN_002a4680(&_OBJC_CLASS___NSString,auVar17._8_8_,&cf_0F);

          uVar11 = _objc_retainAutoreleasedReturnValue();

          auVar17 = _objc_getClass("CMessageMgr");

          FUN_00295b60(uVar15,auVar17._8_8_,auVar17._0_8_);

          lVar6 = _objc_retainAutoreleasedReturnValue();

          if ((lVar6 != 0) &&

             (uVar5 = _objc_opt_respondsToSelector(lVar6,"AddMsg:MsgWrap:"), (uVar5 & 1) != 0)) {

            _objc_getClass("CMessageWrap");

            auVar17 = _objc_alloc();

            auVar17 = FUN_00296d40(auVar17._0_8_,auVar17._8_8_,1,uVar10);

            uVar12 = auVar17._0_8_;

            FUN_0029f760(uVar12,auVar17._8_8_,uVar10);

            FUN_0029f780(uVar12,extraout_x1_03,uVar10);

            FUN_0029f740(uVar12,extraout_x1_04,uVar11);

            FUN_0029f840(uVar12,extraout_x1_05,0);

            FUN_0029f860(uVar12,extraout_x1_06,1);

            FUN_002940e0(&_OBJC_CLASS___NSDate);

            uVar13 = _objc_retainAutoreleasedReturnValue();

            dVar16 = (double)FUN_002a51c0();

            FUN_0029f7e0(uVar12,extraout_x1_07,(int)dVar16);

            _objc_release(uVar13);

            FUN_002909e0(lVar6,extraout_x1_08,uVar10,uVar12);

            _objc_release(uVar12);

          }

          _objc_release(lVar6);

          _objc_release(uVar11);

        }

        _objc_release(uVar10);

        _objc_release(uVar9);

        _objc_release(uVar8);

        _objc_release(uVar15);

      }

      _objc_release(param_3);

    }

    lVar6 = *(long *)(param_1 + 0x40);

    pcVar7 = param_3;

    if (lVar6 == 0) goto LAB_0008b8ac;

  }

  (**(code **)(lVar6 + 0x10))(lVar6,param_2,pcVar7);

LAB_0008b8ac:

  _objc_release(param_3);

  return;

}




