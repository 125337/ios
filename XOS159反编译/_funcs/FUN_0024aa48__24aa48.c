// FUN_0024aa48 @0x24aa48


void FUN_0024aa48(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,

                 long param_5)



{

  cfstringStruct *pcVar1;

  long lVar2;

  long lVar3;

  long lVar4;

  long lVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  long lVar9;

  cfstringStruct *pcVar10;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 uVar11;

  long lVar12;

  undefined8 uVar13;

  undefined1 auVar14 [16];

  undefined1 auVar15 [16];

  undefined1 auVar16 [16];

  undefined *local_1b0;

  undefined8 local_1a8;

  code *local_1a0;

  undefined *puStack_198;

  undefined8 local_190;

  long lStack_188;

  undefined *local_180;

  undefined8 local_178;

  code *local_170;

  undefined *puStack_168;

  undefined8 local_160;

  long lStack_158;

  undefined8 local_150;

  long lStack_148;

  long *local_140;

  undefined8 uStack_138;

  undefined8 local_130;

  undefined8 uStack_128;

  undefined8 uStack_120;

  undefined8 uStack_118;

  undefined1 auStack_110 [128];

  long local_90;

  

  local_90 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  if (param_5 != 0) {

    _objc_retain(param_5);

    lVar3 = param_5;

    do {

      FUN_002a6520(lVar3);

      lVar2 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      if (lVar2 != 0) {

        FUN_002a6520(lVar3);

        lVar2 = _objc_retainAutoreleasedReturnValue();

        if (lVar2 == 0) {

          lVar2 = 0;

        }

        else {

          FUN_0029bac0();

          lVar4 = _objc_retainAutoreleasedReturnValue();

          if (lVar4 != 0) {

            while( true ) {

              FUN_0029a560(lVar4);

              lVar5 = _objc_retainAutoreleasedReturnValue();

              _objc_release();

              if (lVar5 == 0) break;

              FUN_0029a560(lVar4);

              lVar5 = _objc_retainAutoreleasedReturnValue();

              _objc_release(lVar4);

              lVar4 = lVar5;

            }

            FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

            auVar14 = _objc_retainAutoreleasedReturnValue();

            uVar6 = auVar14._0_8_;

            auVar15 = FUN_00297480(uVar6,auVar14._8_8_,&cf_xzyHomeBottomBarStyleMode);

            FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar15._8_8_,&cf_Rbc_h7h_,0,0);

            auVar14 = _objc_retainAutoreleasedReturnValue();

            uVar7 = auVar14._0_8_;

            uStack_128 = 0;

            local_130 = 0;

            uStack_118 = 0;

            uStack_120 = 0;

            lStack_148 = 0;

            local_150 = 0;

            uStack_138 = 0;

            local_140 = (long *)0x0;

            auVar14 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bf010,auVar14._8_8_,

                                   &local_150,auStack_110,0x10);

            if (auVar14._0_8_ != 0) {

              lVar5 = *local_140;

              do {

                uVar8 = auVar14._8_8_;

                lVar12 = 0;

                do {

                  if (*local_140 != lVar5) {

                    _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_003bf010);

                    uVar8 = extraout_x1;

                  }

                  uVar11 = *(undefined8 *)(lStack_148 + lVar12 * 8);

                  FUN_00299500(uVar11,uVar8,0);

                  uVar8 = _objc_retainAutoreleasedReturnValue();

                  lVar9 = FUN_002974a0();

                  _objc_release(uVar8);

                  FUN_00299500(uVar11,extraout_x1_00,1);

                  auVar16 = _objc_retainAutoreleasedReturnValue();

                  uVar8 = auVar16._0_8_;

                  if (lVar9 == auVar15._0_8_) {

                    FUN_002a4680(&_OBJC_CLASS___NSString,auVar16._8_8_,&cf__);

                    uVar11 = _objc_retainAutoreleasedReturnValue();

                  }

                  else {

                    _objc_retain(uVar8);

                    uVar11 = uVar8;

                  }

                  local_180 = PTR___NSConcreteStackBlock_003886f0;

                  local_178 = 0xc2000000;

                  local_170 = FUN_0024b478;

                  puStack_168 = &DAT_003890b0;

                  _objc_retain(uVar6);

                  local_160 = uVar6;

                  lStack_158 = lVar9;

                  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,uVar11,0,&local_180);

                  auVar16 = _objc_retainAutoreleasedReturnValue();

                  FUN_00290fe0(uVar7,auVar16._8_8_,auVar16._0_8_);

                  _objc_release(auVar16._0_8_);

                  _objc_release(local_160);

                  _objc_release(uVar11);

                  _objc_release(uVar8);

                  lVar12 = lVar12 + 1;

                  uVar8 = extraout_x1_02;

                } while (auVar14._0_8_ != lVar12);

                auVar14 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bf010,extraout_x1_02,

                                       &local_150,auStack_110,0x10);

              } while (auVar14._0_8_ != 0);

            }

            FUN_0024d85c();

            uVar8 = _objc_retainAutoreleasedReturnValue();

            lVar5 = 0;

            while( true ) {

              auVar14 = FUN_00293860(uVar8);

              if (auVar14._0_8_ <= lVar5) break;

              FUN_00299500(uVar8,auVar14._8_8_,lVar5);

              auVar14 = _objc_retainAutoreleasedReturnValue();

              FUN_00299540(auVar14._0_8_,auVar14._8_8_,&cf_name);

              pcVar10 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

              pcVar1 = &cf__g_TT;

              if (pcVar10 != (cfstringStruct *)0x0) {

                pcVar1 = pcVar10;

              }

              _objc_retain(pcVar1);

              _objc_release(pcVar10);

              if (lVar5 + 100 == auVar15._0_8_) {

                FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_03,&cf__);

                pcVar10 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

              }

              else {

                _objc_retain(pcVar1);

                pcVar10 = pcVar1;

              }

              local_1b0 = PTR___NSConcreteStackBlock_003886f0;

              local_1a8 = 0xc2000000;

              local_1a0 = FUN_0024b4b0;

              puStack_198 = &DAT_003890b0;

              _objc_retain(uVar6);

              local_190 = uVar6;

              lStack_188 = lVar5 + 100;

              FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_04,pcVar10,0,&local_1b0);

              auVar16 = _objc_retainAutoreleasedReturnValue();

              FUN_00290fe0(uVar7,auVar16._8_8_,auVar16._0_8_);

              _objc_release(auVar16._0_8_);

              _objc_release(local_190);

              _objc_release(pcVar10);

              _objc_release(pcVar1);

              _objc_release(auVar14._0_8_);

              lVar5 = lVar5 + 1;

            }

            FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar14._8_8_,&cf_Sm,1,0);

            auVar14 = _objc_retainAutoreleasedReturnValue();

            FUN_00290fe0(uVar7,auVar14._8_8_,auVar14._0_8_);

            _objc_release(auVar14._0_8_);

            FUN_0029a0a0(uVar7);

            lVar5 = _objc_retainAutoreleasedReturnValue();

            _objc_release();

            uVar11 = extraout_x1_05;

            if (lVar5 != 0) {

              FUN_0029a0a0(uVar7);

              auVar14 = _objc_retainAutoreleasedReturnValue();

              FUN_002a1740(auVar14._0_8_,auVar14._8_8_,param_5);

              _objc_release(auVar14._0_8_);

              uVar13 = FUN_002925a0(param_5);

              FUN_0029a0a0(uVar7);

              uVar11 = _objc_retainAutoreleasedReturnValue();

              FUN_002a1700(uVar13,param_2,param_3,param_4);

              _objc_release(uVar11);

              uVar11 = extraout_x1_06;

            }

            FUN_0029a500(lVar4,uVar11,uVar7,1,0);

            _objc_release(uVar8);

            _objc_release(uVar7);

            _objc_release(uVar6);

            _objc_release(lVar4);

          }

        }

        goto LAB_0024afa8;

      }

      FUN_002a4880(lVar3);

      lVar2 = _objc_retainAutoreleasedReturnValue();

      _objc_release(lVar3);

      lVar3 = lVar2;

    } while (lVar2 != 0);

    lVar3 = 0;

    lVar2 = 0;

LAB_0024afa8:

    _objc_release(lVar3);

    _objc_release(lVar2);

  }

  _objc_release(param_5);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_90) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return;

}




