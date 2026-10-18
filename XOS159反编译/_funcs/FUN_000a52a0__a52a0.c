// FUN_000a52a0 @0xa52a0


/* WARNING: Type propagation algorithm not settling */



void FUN_000a52a0(undefined8 param_1,long *param_2)



{

  uint uVar1;

  uint uVar2;

  long lVar3;

  long lVar4;

  ulong uVar5;

  long lVar6;

  long lVar7;

  undefined8 uVar8;

  long lVar9;

  long lVar10;

  long lVar11;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  long lVar12;

  undefined8 uVar13;

  double dVar14;

  double dVar15;

  double dVar16;

  undefined1 auVar17 [16];

  undefined1 auVar18 [16];

  undefined *local_148;

  undefined8 local_140;

  code *local_138;

  undefined *puStack_130;

  long local_128;

  long *local_120;

  long local_118 [2];

  long *plStack_108;

  undefined8 local_100;

  undefined1 local_f8;

  long local_f0;

  long local_e8;

  undefined8 local_e0;

  cfstringStruct *pcStack_d8;

  undefined8 local_d0;

  cfstringStruct *pcStack_c8;

  undefined8 local_c0;

  cfstringStruct *pcStack_b8;

  undefined8 local_b0;

  cfstringStruct *pcStack_a8;

  undefined8 local_a0;

  cfstringStruct *pcStack_98;

  undefined8 local_90;

  cfstringStruct *pcStack_88;

  long local_80;

  

  local_80 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  auVar17 = FUN_00297840(param_1);

  if ((auVar17._0_8_ & 1) == 0) {

    local_90 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_00388218;

    pcStack_88 = &cf__g0W;

    FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar17._8_8_,&pcStack_88,&local_90,1);

    auVar17 = _objc_retainAutoreleasedReturnValue();

    lVar10 = auVar17._0_8_;

    FUN_00294de0(&_OBJC_CLASS___NSError,auVar17._8_8_,&cf_XZYSilk,0xfffffffffffffff6,lVar10);

    _objc_retainAutoreleasedReturnValue();

    lVar3 = _objc_autorelease();

    uVar13 = 0;

    *param_2 = lVar3;

    goto LAB_000a58c8;

  }

  auVar17 = _objc_alloc(&_OBJC_CLASS___AVAudioFile);

  local_e8 = 0;

  lVar3 = FUN_002968e0(auVar17._0_8_,auVar17._8_8_,param_1,&local_e8);

  lVar10 = local_e8;

  _objc_retain(local_e8);

  if (lVar3 == 0 || lVar10 != 0) {

    if (lVar10 == 0) {

      local_a0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_00388218;

      pcStack_98 = &cf_M;

      FUN_00294560(&_OBJC_CLASS___NSDictionary,extraout_x1,&pcStack_98,&local_a0,1);

      auVar17 = _objc_retainAutoreleasedReturnValue();

      FUN_00294de0(&_OBJC_CLASS___NSError,auVar17._8_8_,&cf_XZYSilk,0xfffffffffffffff5,auVar17._0_8_

                  );

      _objc_retainAutoreleasedReturnValue();

      lVar10 = _objc_retainAutorelease();

      *param_2 = lVar10;

      _objc_release();

      _objc_release(auVar17._0_8_);

      lVar10 = 0;

      uVar13 = 0;

    }

    else {

      _objc_retainAutorelease(lVar10);

      uVar13 = 0;

      *param_2 = lVar10;

    }

  }

  else {

    FUN_0029a920(lVar3);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    auVar17 = FUN_00297fa0(lVar3);

    if ((lVar4 == 0) || (auVar17._0_8_ - 0x100000000U < 0xffffffff00000001)) {

      local_b0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_00388218;

      pcStack_a8 = &cf_M;

      FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar17._8_8_,&pcStack_a8,&local_b0,1);

      auVar17 = _objc_retainAutoreleasedReturnValue();

      lVar12 = auVar17._0_8_;

      FUN_00294de0(&_OBJC_CLASS___NSError,auVar17._8_8_,&cf_XZYSilk,0xfffffffffffffff4,lVar12);

      _objc_retainAutoreleasedReturnValue();

      lVar6 = _objc_autorelease();

      lVar10 = 0;

      uVar13 = 0;

      *param_2 = lVar6;

    }

    else {

      auVar18 = _objc_alloc(&_OBJC_CLASS___AVAudioPCMBuffer);

      auVar17 = FUN_00296d60(auVar18._0_8_,auVar18._8_8_,lVar4,auVar17._0_8_);

      uVar13 = auVar17._8_8_;

      lVar12 = auVar17._0_8_;

      if (lVar12 != 0) {

        local_f0 = 0;

        uVar5 = FUN_0029aca0(lVar3,uVar13,lVar12,&local_f0);

        lVar10 = local_f0;

        _objc_retain(local_f0);

        if ((uVar5 & 1) != 0) {

          auVar17 = _objc_alloc(&_OBJC_CLASS___AVAudioFormat);

          lVar6 = FUN_002969e0(0x40d7700000000000,auVar17._0_8_,auVar17._8_8_,3,1,0);

          auVar17 = _objc_alloc(&_OBJC_CLASS___AVAudioConverter);

          auVar17 = FUN_00296900(auVar17._0_8_,auVar17._8_8_,lVar4,lVar6);

          lVar7 = auVar17._0_8_;

          if ((lVar7 == 0) || (lVar6 == 0)) {

            local_d0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_00388218;

            pcStack_c8 = &cf_elR_;

            FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar17._8_8_,&pcStack_c8,&local_d0,1);

            auVar17 = _objc_retainAutoreleasedReturnValue();

            uVar8 = auVar17._0_8_;

            FUN_00294de0(&_OBJC_CLASS___NSError,auVar17._8_8_,&cf_XZYSilk,0xfffffffffffffff2,uVar8);

            _objc_retainAutoreleasedReturnValue();

            lVar11 = _objc_autorelease();

            uVar13 = 0;

            *param_2 = lVar11;

          }

          else {

            dVar14 = (double)FUN_0029bba0(lVar6);

            dVar15 = (double)FUN_0029bba0(lVar4);

            dVar16 = 1.0;

            if (1.0 <= dVar15) {

              dVar16 = dVar15;

            }

            uVar1 = FUN_00295640(lVar12);

            uVar2 = FUN_00295640(lVar12);

            auVar17 = _objc_alloc(&_OBJC_CLASS___AVAudioPCMBuffer);

            dVar16 = (double)(long)((dVar14 / dVar16) * (double)uVar2);

            if (dVar16 <= (double)uVar1) {

              dVar16 = (double)uVar1;

            }

            dVar14 = 4294967295.0;

            if (dVar16 + 1024.0 <= 4294967295.0) {

              dVar14 = dVar16 + 1024.0;

            }

            uVar8 = FUN_00296d60(auVar17._0_8_,auVar17._8_8_,lVar6,(int)dVar14);

            local_120 = local_118 + 1;

            local_118[1] = 0;

            local_100 = 0x2020000000;

            local_f8 = 0;

            local_118[0] = 0;

            local_148 = PTR___NSConcreteStackBlock_003886f0;

            local_140 = 0xc2000000;

            local_138 = FUN_000a5a64;

            puStack_130 = &DAT_0038add0;

            plStack_108 = local_120;

            _objc_retain(lVar12);

            local_128 = lVar12;

            lVar9 = FUN_00293780(lVar7,extraout_x1_01,uVar8,local_118,&local_148);

            lVar11 = local_118[0];

            _objc_retain(local_118[0]);

            uVar13 = extraout_x1_02;

            if (lVar9 == 3) {

LAB_000a57e4:

              if (lVar11 == 0) {

                local_e0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_00388218;

                pcStack_d8 = &cf_M;

                FUN_00294560(&_OBJC_CLASS___NSDictionary,uVar13,&pcStack_d8,&local_e0,1);

                auVar17 = _objc_retainAutoreleasedReturnValue();

                FUN_00294de0(&_OBJC_CLASS___NSError,auVar17._8_8_,&cf_XZYSilk,0xfffffffffffffff1,

                             auVar17._0_8_);

                _objc_retainAutoreleasedReturnValue();

                lVar9 = _objc_retainAutorelease();

                *param_2 = lVar9;

                _objc_release();

                _objc_release(auVar17._0_8_);

                uVar13 = 0;

              }

              else {

                _objc_retainAutorelease(lVar11);

                uVar13 = 0;

                *param_2 = lVar11;

              }

            }

            else {

              auVar17 = FUN_00291f20(uVar8);

              uVar13 = auVar17._8_8_;

              if (auVar17._0_8_ == 0) goto LAB_000a57e4;

              auVar17 = FUN_00291f20(uVar8);

              uVar13 = auVar17._8_8_;

              if (*auVar17._0_8_ == 0) goto LAB_000a57e4;

              auVar17 = FUN_00291f20(uVar8);

              uVar13 = auVar17._8_8_;

              if (*(int *)(auVar17._0_8_ + 0xc) == 0) goto LAB_000a57e4;

              auVar17 = FUN_00291f20(uVar8);

              FUN_00293fc0(&_OBJC_CLASS___NSData,auVar17._8_8_,*(undefined8 *)(auVar17._0_8_ + 0x10)

                           ,*(undefined4 *)(auVar17._0_8_ + 0xc));

              uVar13 = _objc_retainAutoreleasedReturnValue();

            }

            _objc_release(local_128);

            __Block_object_dispose(local_118 + 1,8);

            _objc_release(lVar11);

          }

          _objc_release(uVar8);

          _objc_release(lVar7);

          _objc_release(lVar6);

          goto LAB_000a58b0;

        }

        uVar13 = extraout_x1_00;

        if (lVar10 != 0) {

          _objc_retainAutorelease(lVar10);

          uVar13 = 0;

          *param_2 = lVar10;

          goto LAB_000a58b0;

        }

      }

      local_c0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_00388218;

      pcStack_b8 = &cf_M;

      FUN_00294560(&_OBJC_CLASS___NSDictionary,uVar13,&pcStack_b8,&local_c0,1);

      auVar17 = _objc_retainAutoreleasedReturnValue();

      FUN_00294de0(&_OBJC_CLASS___NSError,auVar17._8_8_,&cf_XZYSilk,0xfffffffffffffff3,auVar17._0_8_

                  );

      _objc_retainAutoreleasedReturnValue();

      lVar10 = _objc_retainAutorelease();

      *param_2 = lVar10;

      _objc_release();

      _objc_release(auVar17._0_8_);

      lVar10 = 0;

      uVar13 = 0;

    }

LAB_000a58b0:

    _objc_release(lVar12);

    _objc_release(lVar4);

  }

  _objc_release(lVar3);

LAB_000a58c8:

  _objc_release(lVar10);

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_80) {

    _objc_autoreleaseReturnValue(uVar13);

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




