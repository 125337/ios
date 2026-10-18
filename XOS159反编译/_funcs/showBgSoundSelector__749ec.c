// showBgSoundSelector @0x749ec


/* Function Stack Size: 0x10 bytes */



void _0x016d26c7::showBgSoundSelector(ID param_1,SEL param_2)



{

  cfstringStruct *pcVar1;

  cfstringStruct *pcVar2;

  int iVar3;

  undefined8 uVar4;

  long lVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  ulong uVar9;

  long lVar10;

  long lVar11;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  long lVar12;

  long lVar13;

  long lVar14;

  undefined1 auVar15 [16];

  undefined *local_1c0;

  undefined8 local_1b8;

  code *local_1b0;

  undefined *puStack_1a8;

  ID local_1a0;

  undefined8 local_198;

  undefined8 local_190;

  long lStack_188;

  long *local_180;

  undefined8 uStack_178;

  undefined8 local_170;

  undefined8 uStack_168;

  undefined8 uStack_160;

  undefined8 uStack_158;

  undefined *local_150;

  undefined8 local_148;

  code *local_140;

  undefined *puStack_138;

  ID local_130;

  undefined *local_128;

  undefined8 local_120;

  code *local_118;

  undefined *puStack_110;

  ID local_108;

  undefined1 auStack_100 [128];

  long local_80;

  

  local_80 = *(long *)PTR____stack_chk_guard_00388738;

  FUN_00291580(&_OBJC_CLASS___UIAlertController,param_2,&cf_bofPN,0,0);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_0029c240(param_1);

  lVar5 = _objc_retainAutoreleasedReturnValue();

  pcVar1 = &cf__;

  if (lVar5 != 0) {

    pcVar1 = &cf_e;

  }

  _objc_retain(pcVar1);

  _objc_release(lVar5);

  local_128 = PTR___NSConcreteStackBlock_003886f0;

  local_120 = 0xc2000000;

  local_118 = FUN_00075000;

  puStack_110 = &DAT_00388cf0;

  local_108 = param_1;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1,pcVar1,0,&local_128);

  auVar15 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar4,auVar15._8_8_,auVar15._0_8_);

  _objc_release(auVar15._0_8_);

  FUN_0029c240(param_1);

  auVar15 = _objc_retainAutoreleasedReturnValue();

  iVar3 = FUN_00297820(auVar15._0_8_,auVar15._8_8_,&cf___xzy_tts_random_bg_sound__);

  pcVar2 = &cf__;

  if (iVar3 == 0) {

    pcVar2 = &cf__g;

  }

  _objc_retain();

  _objc_release(auVar15._0_8_);

  local_150 = PTR___NSConcreteStackBlock_003886f0;

  local_148 = 0xc2000000;

  local_140 = FUN_000750a4;

  puStack_138 = &DAT_00388cf0;

  local_130 = param_1;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_00,pcVar2,0,&local_150);

  auVar15 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar4,auVar15._8_8_,auVar15._0_8_);

  _objc_release(auVar15._0_8_);

  uStack_168 = 0;

  local_170 = 0;

  uStack_158 = 0;

  uStack_160 = 0;

  lStack_188 = 0;

  local_190 = 0;

  uStack_178 = 0;

  local_180 = (long *)0x0;

  FUN_002923c0(param_1);

  auVar15 = _objc_retainAutoreleasedReturnValue();

  uVar6 = auVar15._0_8_;

  lVar5 = FUN_00293880(uVar6,auVar15._8_8_,&local_190,auStack_100,0x10);

  if (lVar5 != 0) {

    lVar14 = *local_180;

    do {

      lVar13 = 0;

      do {

        if (*local_180 != lVar14) {

          _objc_enumerationMutation(uVar6);

        }

        lVar12 = *(long *)(lStack_188 + lVar13 * 8);

        FUN_00070748(lVar12);

        uVar7 = _objc_retainAutoreleasedReturnValue();

        uVar8 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);

        auVar15 = _objc_opt_isKindOfClass(lVar12,uVar8);

        if ((auVar15._0_8_ & 1) == 0) {

          uVar8 = _objc_opt_class(&_OBJC_CLASS___NSString);

          uVar9 = _objc_opt_isKindOfClass(lVar12,uVar8);

          if ((uVar9 & 1) != 0) {

            _objc_retain(lVar12);

            goto LAB_00074d04;

          }

          lVar12 = 0;

        }

        else {

          FUN_00299540(lVar12,auVar15._8_8_,&cf_name);

          auVar15 = _objc_retainAutoreleasedReturnValue();

          lVar11 = auVar15._0_8_;

          if (lVar11 == 0) {

            FUN_00299540(lVar12,auVar15._8_8_,&cf_label);

            auVar15 = _objc_retainAutoreleasedReturnValue();

            lVar10 = auVar15._0_8_;

            if (lVar10 == 0) {

              FUN_00299540(lVar12,auVar15._8_8_,&cf_title);

              lVar12 = _objc_retainAutoreleasedReturnValue();

            }

            else {

              _objc_retain(lVar10);

              lVar12 = lVar10;

            }

            _objc_release(lVar10);

          }

          else {

            _objc_retain(lVar11);

            lVar12 = lVar11;

          }

          _objc_release(lVar11);

LAB_00074d04:

          lVar11 = FUN_00297fa0(lVar12);

          if ((lVar11 != 0) && (lVar11 = FUN_00297fa0(uVar7), lVar11 != 0)) {

            _objc_retain(lVar12);

            FUN_0029c240(param_1);

            auVar15 = _objc_retainAutoreleasedReturnValue();

            iVar3 = FUN_00297820(uVar7,auVar15._8_8_,auVar15._0_8_);

            _objc_release(auVar15._0_8_);

            lVar11 = lVar12;

            if (iVar3 != 0) {

              FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_01,&cf__);

              lVar11 = _objc_retainAutoreleasedReturnValue();

              _objc_release(lVar12);

            }

            local_1c0 = PTR___NSConcreteStackBlock_003886f0;

            local_1b8 = 0xc2000000;

            local_1b0 = FUN_00075154;

            puStack_1a8 = &DAT_00388d20;

            local_1a0 = param_1;

            _objc_retain(uVar7);

            local_198 = uVar7;

            FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_02,lVar11,0,&local_1c0);

            auVar15 = _objc_retainAutoreleasedReturnValue();

            FUN_00290fe0(uVar4,auVar15._8_8_,auVar15._0_8_);

            _objc_release(auVar15._0_8_);

            _objc_release(local_198);

            _objc_release(lVar11);

          }

        }

        _objc_release(uVar7);

        _objc_release(lVar12);

        lVar13 = lVar13 + 1;

      } while (lVar5 != lVar13);

      lVar5 = FUN_00293880(uVar6,extraout_x1_03,&local_190,auStack_100,0x10);

    } while (lVar5 != 0);

  }

  _objc_release(uVar6);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_04,&cf_Sm,1,0);

  auVar15 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar4,auVar15._8_8_,auVar15._0_8_);

  _objc_release(auVar15._0_8_);

  FUN_0029a500(param_1,extraout_x1_05,uVar4,1,0);

  _objc_release(pcVar2);

  _objc_release(pcVar1);

  _objc_release(uVar4);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_80) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




