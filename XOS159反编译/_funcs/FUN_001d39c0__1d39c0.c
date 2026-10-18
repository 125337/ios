// FUN_001d39c0 @0x1d39c0


void FUN_001d39c0(long param_1,undefined8 param_2)



{

  uint uVar1;

  uint uVar2;

  int iVar3;

  long lVar4;

  long lVar5;

  long lVar6;

  undefined8 uVar7;

  long lVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  ulong uVar12;

  undefined8 uVar13;

  long lVar14;

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

  undefined8 extraout_x1_09;

  undefined1 auVar15 [16];

  undefined *local_120;

  undefined8 local_118;

  code *local_110;

  undefined *puStack_108;

  long local_100;

  long local_f8;

  undefined *local_f0;

  undefined8 local_e8;

  code *local_e0;

  undefined *puStack_d8;

  long local_d0;

  long local_c8;

  undefined *local_c0;

  undefined8 local_b8;

  code *local_b0;

  undefined *puStack_a8;

  long local_a0;

  long local_98;

  cfstringStruct *local_90;

  cfstringStruct *pcStack_88;

  undefined8 local_80;

  long lStack_78;

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  _objc_retain(param_2);

  if (param_1 == 0) goto LAB_001d41f4;

  auVar15 = FUN_00297fa0(param_2);

  if (auVar15._0_8_ == 0) goto LAB_001d41f4;

  FUN_002a6080(param_1,auVar15._8_8_,&cf_m_tableView);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  if (lVar4 == 0) goto LAB_001d41f4;

  FUN_0020e91c(param_1);

  lVar5 = _objc_retainAutoreleasedReturnValue();

  if (lVar5 != 0) {

    if ((DAT_003eaac8 - 1U < 2) || (DAT_003eaac8 == 5)) {

      iVar3 = FUN_001cbca4(param_2);

      if (iVar3 != 0) {

        FUN_001cbd20(param_2);

      }

      FUN_001d393c(param_1,param_2);

      uVar7 = FUN_002974a0(lVar5);

      uVar13 = FUN_0020eb40(param_1,uVar7);

      uVar7 = FUN_002974a0(lVar5);

      FUN_002104cc(param_1,uVar7,uVar13);

      uVar9 = _objc_retainAutoreleasedReturnValue();

      FUN_00210690(param_1);

      auVar15 = _objc_retainAutoreleasedReturnValue();

      uVar10 = auVar15._0_8_;

      FUN_00299540(uVar10,auVar15._8_8_,param_2);

      auVar15 = _objc_retainAutoreleasedReturnValue();

      uVar7 = auVar15._0_8_;

      FUN_00299540(uVar7,auVar15._8_8_,&cf_plan);

      lVar14 = _objc_retainAutoreleasedReturnValue();

      uVar11 = _objc_opt_class(&objc::class_t::XZYCLGPlan);

      auVar15 = _objc_opt_isKindOfClass(lVar14,uVar11);

      if ((auVar15._0_8_ & 1) == 0) {

LAB_001d3c4c:

        _objc_release(lVar14);

        uVar11 = extraout_x1_00;

LAB_001d3c54:

        FUN_0029b4a0(uVar10,uVar11,param_2);

        FUN_00210740(param_1,uVar9);

        lVar14 = _objc_retainAutoreleasedReturnValue();

        if (lVar14 == 0) {

LAB_001d3ca0:

          FUN_0029b240(uVar10);

          FUN_002111c8(param_1,uVar9,0);

          uVar11 = FUN_002974a0(lVar5);

          FUN_0020ec88(param_1,uVar11,uVar13);

          lVar6 = _objc_retainAutoreleasedReturnValue();

        }

        else {

          FUN_00210904(lVar14,param_2);

          lVar6 = _objc_retainAutoreleasedReturnValue();

          if (lVar6 == 0) goto LAB_001d3ca0;

        }

        iVar3 = FUN_00297aa0(lVar6);

        if (iVar3 == 0) {

          _objc_release(uVar7);

          uVar13 = 0;

        }

        else {

          local_90 = &cf_sig;

          pcStack_88 = &cf_plan;

          local_80 = uVar9;

          lStack_78 = lVar6;

          FUN_00294560(&_OBJC_CLASS___NSDictionary,extraout_x1_01,&local_80,&local_90,2);

          uVar13 = _objc_retainAutoreleasedReturnValue();

          _objc_release(uVar7);

          FUN_002a00a0(uVar10,extraout_x1_02,uVar13,param_2);

          FUN_002111c8(param_1,uVar9,lVar6);

        }

        _objc_release(lVar14);

        uVar7 = uVar13;

      }

      else {

        FUN_00299540(uVar7,auVar15._8_8_,&cf_plan);

        lVar6 = _objc_retainAutoreleasedReturnValue();

        _objc_release(lVar14);

        uVar11 = extraout_x1;

        if (lVar6 == 0) goto LAB_001d3c54;

        FUN_00299540(uVar7,extraout_x1,&cf_sig);

        auVar15 = _objc_retainAutoreleasedReturnValue();

        uVar12 = FUN_00297820(auVar15._0_8_,auVar15._8_8_,uVar9);

        _objc_release(auVar15._0_8_);

        lVar14 = lVar6;

        if ((uVar12 & 1) == 0) goto LAB_001d3c4c;

      }

      FUN_002101cc(param_1);

      uVar13 = _objc_retainAutoreleasedReturnValue();

      iVar3 = FUN_00297aa0(lVar6);

      if (iVar3 == 0) {

        FUN_0029b4a0(uVar13,extraout_x1_03,lVar5);

      }

      else {

        FUN_002a00a0(uVar13,extraout_x1_03,lVar6,lVar5);

        FUN_0021027c(param_1,lVar6);

      }

      local_120 = PTR___NSConcreteStackBlock_003886f0;

      local_118 = 0xc2000000;

      local_110 = FUN_00211314;

      puStack_108 = &DAT_00388d50;

      _objc_retain(lVar4);

      local_100 = lVar4;

      _objc_retain(param_1);

      local_f8 = param_1;

      FUN_00299ce0(&_OBJC_CLASS___UIView,extraout_x1_04,&local_120);

      FUN_0011afe4(lVar4);

      FUN_0020b734(param_1,1);

      _objc_release(local_f8);

      _objc_release(local_100);

      _objc_release(uVar13);

      _objc_release(lVar6);

      _objc_release(uVar7);

      _objc_release(uVar10);

      _objc_release(uVar9);

    }

    else {

      if (DAT_003eaac8 == 6) {

        FUN_001d393c(param_1,param_2);

        uVar2 = FUN_001cbca4(param_2);

        if (uVar2 != 0) {

          FUN_001cbd20(param_2);

        }

        FUN_0020e940(param_1,lVar5,1);

        lVar6 = _objc_retainAutoreleasedReturnValue();

        if ((((uVar2 & 1) != 0) || (iVar3 = FUN_00297aa0(lVar6), iVar3 == 0)) ||

           (iVar3 = FUN_002a28a0(lVar6), lVar14 = lVar6, iVar3 != DAT_003eaab4)) {

          uVar7 = FUN_002974a0(lVar5);

          uVar7 = FUN_0020eb40(param_1,uVar7);

          uVar1 = 0;

          if (DAT_003eaac8 == 6) {

            uVar1 = uVar2;

          }

          if (uVar1 == 1) {

            FUN_0020ebc8(lVar6);

            lVar8 = _objc_retainAutoreleasedReturnValue();

            if (lVar8 == 0) {

              uVar13 = FUN_002974a0(lVar5);

              FUN_0020ec88(param_1,uVar13,uVar7);

              lVar14 = _objc_retainAutoreleasedReturnValue();

            }

            else {

              _objc_retain(lVar8);

              lVar14 = lVar8;

            }

            _objc_release(lVar6);

            lVar6 = lVar8;

          }

          else {

            uVar13 = FUN_002974a0(lVar5);

            FUN_0020ec88(param_1,uVar13,uVar7);

            lVar14 = _objc_retainAutoreleasedReturnValue();

          }

          _objc_release(lVar6);

          FUN_002101cc(param_1);

          uVar7 = _objc_retainAutoreleasedReturnValue();

          iVar3 = FUN_00297aa0(lVar14);

          if (iVar3 == 0) {

            FUN_0029b4a0(uVar7,extraout_x1_07,lVar5);

          }

          else {

            FUN_002a00a0(uVar7,extraout_x1_07,lVar14,lVar5);

            FUN_0021027c(param_1,lVar14);

          }

          FUN_00209f2c(param_1);

          local_c0 = PTR___NSConcreteStackBlock_003886f0;

          local_b8 = 0xc2000000;

          local_b0 = FUN_0021046c;

          puStack_a8 = &DAT_00388d50;

          _objc_retain(lVar4);

          local_a0 = lVar4;

          _objc_retain(param_1);

          local_98 = param_1;

          FUN_00299ce0(&_OBJC_CLASS___UIView,extraout_x1_08,&local_c0);

          FUN_0011afe4(lVar4);

          _objc_release(local_98);

          _objc_release(local_a0);

          _objc_release(uVar7);

        }

        iVar3 = FUN_00297aa0(lVar14);

        if (iVar3 != 0) {

          lVar6 = 0;

          while( true ) {

            FUN_00294d00(lVar14);

            uVar7 = _objc_retainAutoreleasedReturnValue();

            lVar8 = FUN_00293860();

            _objc_release(uVar7);

            if (lVar8 <= lVar6) break;

            FUN_00294d00(lVar14);

            auVar15 = _objc_retainAutoreleasedReturnValue();

            FUN_00299500(auVar15._0_8_,auVar15._8_8_,lVar6);

            uVar7 = _objc_retainAutoreleasedReturnValue();

            _objc_release(auVar15._0_8_);

            iVar3 = FUN_00297760(uVar7);

            if (iVar3 != 0) {

              FUN_00295de0(uVar7);

              auVar15 = _objc_retainAutoreleasedReturnValue();

              iVar3 = FUN_00297820(auVar15._0_8_,auVar15._8_8_,param_2);

              _objc_release(auVar15._0_8_);

              if (iVar3 != 0) {

                _objc_release(uVar7);

                FUN_00297ee0(lVar4);

                auVar15 = FUN_002974a0(lVar5);

                FUN_00296780(&_OBJC_CLASS___NSIndexPath,auVar15._8_8_,lVar6,auVar15._0_8_);

                uVar7 = _objc_retainAutoreleasedReturnValue();

                uVar2 = _UIAccessibilityIsReduceMotionEnabled();

                FUN_0029bec0(lVar4,extraout_x1_09,uVar7,1,uVar2 ^ 1);

                _objc_release(uVar7);

                break;

              }

            }

            _objc_release(uVar7);

            lVar6 = lVar6 + 1;

          }

        }

        FUN_0020b734(param_1,1);

      }

      else {

        FUN_001d393c(param_1,param_2);

        uVar7 = FUN_002974a0(lVar5);

        uVar7 = FUN_0020eb40(param_1,uVar7);

        uVar13 = FUN_002974a0(lVar5);

        FUN_0020ec88(param_1,uVar13,uVar7);

        lVar14 = _objc_retainAutoreleasedReturnValue();

        FUN_002101cc(param_1);

        uVar7 = _objc_retainAutoreleasedReturnValue();

        iVar3 = FUN_00297aa0(lVar14);

        if (iVar3 == 0) {

          FUN_0029b4a0(uVar7,extraout_x1_05,lVar5);

        }

        else {

          FUN_002a00a0(uVar7,extraout_x1_05,lVar14,lVar5);

          FUN_0021027c(param_1,lVar14);

        }

        local_f0 = PTR___NSConcreteStackBlock_003886f0;

        local_e8 = 0xc2000000;

        local_e0 = FUN_002104a0;

        puStack_d8 = &DAT_00388d50;

        _objc_retain(lVar4);

        local_d0 = lVar4;

        _objc_retain(param_1);

        local_c8 = param_1;

        FUN_00299ce0(&_OBJC_CLASS___UIView,extraout_x1_06,&local_f0);

        FUN_0011afe4(lVar4);

        FUN_0020b734(param_1,1);

        _objc_release(local_c8);

        _objc_release(local_d0);

        _objc_release(uVar7);

      }

      _objc_release(lVar14);

    }

  }

  _objc_release(lVar5);

  _objc_release(lVar4);

LAB_001d41f4:

  _objc_release(param_2);

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_70) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return;

}




