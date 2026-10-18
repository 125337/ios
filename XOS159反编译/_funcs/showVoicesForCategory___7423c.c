// showVoicesForCategory: @0x7423c


/* Function Stack Size: 0x18 bytes */



void _0x016d26c7::showVoicesForCategory_(ID param_1,SEL param_2,ID param_3)



{

  int iVar1;

  long lVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 uVar5;

  ulong uVar6;

  long lVar7;

  long lVar8;

  long lVar9;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  long lVar10;

  long lVar11;

  long lVar12;

  long lVar13;

  undefined1 auVar14 [16];

  undefined *local_1a0;

  undefined8 local_198;

  code *local_190;

  undefined *puStack_188;

  ID local_180;

  undefined *local_178;

  undefined8 local_170;

  code *local_168;

  undefined *puStack_160;

  ID local_158;

  long local_150;

  long local_148;

  undefined8 local_140;

  long lStack_138;

  long *local_130;

  undefined8 uStack_128;

  undefined8 local_120;

  undefined8 uStack_118;

  undefined8 uStack_110;

  undefined8 uStack_108;

  undefined1 auStack_100 [128];

  long local_80;

  

  local_80 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_3);

  FUN_002a63a0(param_1);

  auVar14 = _objc_retainAutoreleasedReturnValue();

  FUN_00299540(auVar14._0_8_,auVar14._8_8_,param_3);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar14._0_8_);

  if ((lVar2 == 0) || (auVar14 = FUN_00293860(lVar2), auVar14._0_8_ == 0)) {

    FUN_0002a854(0x4008000000000000,&cf_R__fer,0,2);

  }

  else {

    FUN_002a4680(&_OBJC_CLASS___NSString,auVar14._8_8_,&::cf__);

    auVar14 = _objc_retainAutoreleasedReturnValue();

    FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar14._8_8_,auVar14._0_8_,0,0);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar14._0_8_);

    uStack_118 = 0;

    local_120 = 0;

    uStack_108 = 0;

    uStack_110 = 0;

    lStack_138 = 0;

    local_140 = 0;

    uStack_128 = 0;

    local_130 = (long *)0x0;

    _objc_retain(lVar2);

    lVar4 = FUN_00293880(lVar2,extraout_x1,&local_140,auStack_100,0x10);

    if (lVar4 != 0) {

      lVar10 = *local_130;

      do {

        lVar13 = 0;

        do {

          if (*local_130 != lVar10) {

            _objc_enumerationMutation(lVar2);

          }

          lVar11 = *(long *)(lStack_138 + lVar13 * 8);

          uVar5 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);

          auVar14 = _objc_opt_isKindOfClass(lVar11,uVar5);

          if ((auVar14._0_8_ & 1) == 0) {

            uVar5 = _objc_opt_class(&_OBJC_CLASS___NSString);

            uVar6 = _objc_opt_isKindOfClass(lVar11,uVar5);

            if ((uVar6 & 1) != 0) {

              _objc_retain(lVar11);

              _objc_retain(lVar11);

              lVar12 = lVar11;

              goto LAB_00074528;

            }

            lVar11 = 0;

            lVar12 = 0;

          }

          else {

            FUN_00299540(lVar11,auVar14._8_8_,&cf_name);

            auVar14 = _objc_retainAutoreleasedReturnValue();

            lVar12 = auVar14._0_8_;

            if (lVar12 == 0) {

              FUN_00299540(lVar11,auVar14._8_8_,&cf_label);

              auVar14 = _objc_retainAutoreleasedReturnValue();

              lVar9 = auVar14._0_8_;

              if (lVar9 == 0) {

                FUN_00299540(lVar11,auVar14._8_8_,&cf_title);

                lVar7 = _objc_retainAutoreleasedReturnValue();

              }

              else {

                _objc_retain(lVar9);

                lVar7 = lVar9;

              }

              _objc_release(lVar9);

            }

            else {

              _objc_retain(lVar12);

              lVar7 = lVar12;

            }

            _objc_release(lVar12);

            FUN_00299540(lVar11,extraout_x1_00,&cf_vid);

            auVar14 = _objc_retainAutoreleasedReturnValue();

            lVar9 = auVar14._0_8_;

            if (lVar9 == 0) {

              FUN_00299540(lVar11,auVar14._8_8_,&cf_id);

              auVar14 = _objc_retainAutoreleasedReturnValue();

              lVar8 = auVar14._0_8_;

              if (lVar8 == 0) {

                FUN_00299540(lVar11,auVar14._8_8_,&cf_value);

                lVar11 = _objc_retainAutoreleasedReturnValue();

                lVar12 = lVar7;

                if (lVar11 != 0) {

                  lVar12 = lVar11;

                }

                _objc_retain(lVar12);

                _objc_release(lVar11);

              }

              else {

                _objc_retain(lVar8);

                lVar12 = lVar8;

              }

              _objc_release(lVar8);

            }

            else {

              _objc_retain(lVar9);

              lVar12 = lVar9;

            }

            _objc_release(lVar9);

            lVar11 = lVar7;

LAB_00074528:

            if (lVar11 != 0) {

              _objc_retain(lVar11);

              FUN_0029c360(param_1);

              auVar14 = _objc_retainAutoreleasedReturnValue();

              iVar1 = FUN_00297820(lVar12,auVar14._8_8_,auVar14._0_8_);

              _objc_release(auVar14._0_8_);

              lVar9 = lVar11;

              if (iVar1 != 0) {

                FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_01,&cf__);

                lVar9 = _objc_retainAutoreleasedReturnValue();

                _objc_release(lVar11);

              }

              local_178 = PTR___NSConcreteStackBlock_003886f0;

              local_170 = 0xc2000000;

              local_168 = FUN_000748c4;

              puStack_160 = &DAT_00388c90;

              local_158 = param_1;

              _objc_retain(lVar12);

              local_150 = lVar12;

              _objc_retain(lVar11);

              local_148 = lVar11;

              FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_02,lVar9,0,&local_178);

              auVar14 = _objc_retainAutoreleasedReturnValue();

              FUN_00290fe0(uVar3,auVar14._8_8_,auVar14._0_8_);

              _objc_release(auVar14._0_8_);

              _objc_release(local_148);

              _objc_release(local_150);

              _objc_release(lVar9);

            }

          }

          _objc_release(lVar12);

          _objc_release(lVar11);

          lVar13 = lVar13 + 1;

        } while (lVar4 != lVar13);

        lVar4 = FUN_00293880(lVar2,extraout_x1_03,&local_140,auStack_100,0x10);

      } while (lVar4 != 0);

    }

    _objc_release(lVar2);

    local_1a0 = PTR___NSConcreteStackBlock_003886f0;

    local_198 = 0xc2000000;

    local_190 = FUN_000749e4;

    puStack_188 = &DAT_00388cf0;

    local_180 = param_1;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_04,&cf_VR__,0,&local_1a0);

    auVar14 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar3,auVar14._8_8_,auVar14._0_8_);

    _objc_release(auVar14._0_8_);

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_05,&cf_Sm,1,0);

    auVar14 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar3,auVar14._8_8_,auVar14._0_8_);

    _objc_release(auVar14._0_8_);

    FUN_0029a500(param_1,extraout_x1_06,uVar3,1,0);

    _objc_release(uVar3);

  }

  _objc_release(lVar2);

  _objc_release(param_3);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_80) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




