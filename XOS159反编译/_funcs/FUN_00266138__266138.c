// FUN_00266138 @0x266138


void FUN_00266138(void)



{

  ulong uVar1;

  int iVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  long lVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  long lVar11;

  cfstringStruct *pcVar12;

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

  undefined8 extraout_x1_10;

  undefined8 extraout_x1_11;

  long lVar13;

  undefined8 uVar14;

  long lVar15;

  undefined1 auVar16 [16];

  undefined *local_140;

  undefined8 local_130;

  long lStack_128;

  long *local_120;

  undefined8 uStack_118;

  undefined8 local_110;

  undefined8 uStack_108;

  undefined8 uStack_100;

  undefined8 uStack_f8;

  undefined1 auStack_f0 [128];

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  FUN_0026bd28(&cf_CoverRes_music);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00294240(&_OBJC_CLASS___NSFileManager);

  auVar16 = _objc_retainAutoreleasedReturnValue();

  FUN_00293660(auVar16._0_8_,auVar16._8_8_,uVar3,0);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar16._0_8_);

  lVar5 = FUN_00293860(uVar4);

  if (lVar5 == 0) {

    local_140 = PTR____NSArray0__struct_00388308;

  }

  else {

    FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

    local_140 = (undefined *)_objc_retainAutoreleasedReturnValue();

    lStack_128 = 0;

    local_130 = 0;

    uStack_118 = 0;

    local_120 = (long *)0x0;

    uStack_108 = 0;

    local_110 = 0;

    uStack_f8 = 0;

    uStack_100 = 0;

    _objc_retain(uVar4);

    lVar5 = FUN_00293880(uVar4,extraout_x1,&local_130,auStack_f0,0x10);

    if (lVar5 != 0) {

      lVar15 = *local_120;

      do {

        lVar13 = 0;

        do {

          if (*local_120 != lVar15) {

            _objc_enumerationMutation(uVar4);

          }

          uVar14 = *(undefined8 *)(lStack_128 + lVar13 * 8);

          FUN_00299b20(uVar14);

          uVar6 = _objc_retainAutoreleasedReturnValue();

          FUN_002984e0();

          uVar7 = _objc_retainAutoreleasedReturnValue();

          _objc_release(uVar6);

          iVar2 = FUN_00293560(&PTR__OBJC_CLASS___NSConstantArray_003bf0a0,extraout_x1_00,uVar7);

          if (iVar2 != 0) {

            FUN_002a44e0(uVar14);

            uVar6 = _objc_retainAutoreleasedReturnValue();

            auVar16 = _objc_alloc_init(&objc::class_t::XZYDockPlayerSong);

            uVar8 = auVar16._0_8_;

            FUN_002a44a0(&cf_local_,auVar16._8_8_,uVar6);

            auVar16 = _objc_retainAutoreleasedReturnValue();

            FUN_002a16e0(uVar8,auVar16._8_8_,auVar16._0_8_);

            _objc_release(auVar16._0_8_);

            _objc_retain(uVar6);

            auVar16 = FUN_00297fa0(uVar6);

            FUN_002a4580(uVar6,auVar16._8_8_,&cf_________,&cf___,0x400,0,auVar16._0_8_);

            uVar9 = _objc_retainAutoreleasedReturnValue();

            _objc_release(uVar6);

            auVar16 = FUN_00297fa0(uVar9);

            FUN_002a4580(uVar9,auVar16._8_8_,&cf___d___s_____,&cf___,0x400,0,auVar16._0_8_);

            uVar10 = _objc_retainAutoreleasedReturnValue();

            _objc_release(uVar9);

            auVar16 = FUN_0029aba0(uVar10,extraout_x1_01,&cf__);

            if (auVar16._0_8_ == 0x7fffffffffffffff) {

              auVar16 = FUN_0029aba0(uVar10,auVar16._8_8_,&cf_space_s_);

              if (auVar16._0_8_ == 0x7fffffffffffffff) {

                auVar16 = FUN_0029aba0(uVar10,auVar16._8_8_,&cf_space_s_);

              }

            }

            lVar11 = auVar16._0_8_;

            if (lVar11 == 0 || lVar11 == 0x7fffffffffffffff) {

LAB_002663c0:

              _objc_retainAutorelease(uVar10);

              pcVar12 = &cf__g0WPN;

              uVar9 = uVar10;

            }

            else {

              uVar1 = auVar16._8_8_ + lVar11;

              auVar16 = FUN_00297fa0(uVar10);

              if (auVar16._0_8_ <= uVar1) goto LAB_002663c0;

              FUN_002a47e0(uVar10,auVar16._8_8_,lVar11);

              pcVar12 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

              _objc_autorelease();

              FUN_002a47c0(uVar10,extraout_x1_10,uVar1);

              uVar9 = _objc_retainAutoreleasedReturnValue();

              _objc_autorelease();

            }

            _objc_release(uVar10);

            _objc_retain(pcVar12);

            _objc_retain(uVar9);

            FUN_0029cd20(uVar8,extraout_x1_02,pcVar12);

            FUN_002a1f60(uVar8,extraout_x1_03,uVar9);

            _objc_release(uVar9);

            FUN_002a4460(uVar3,extraout_x1_04,uVar14);

            auVar16 = _objc_retainAutoreleasedReturnValue();

            FUN_0029f5c0(uVar8,auVar16._8_8_,auVar16._0_8_);

            _objc_release(auVar16._0_8_);

            FUN_002a4460(uVar3,extraout_x1_05,uVar6);

            auVar16 = _objc_retainAutoreleasedReturnValue();

            FUN_002a4480(auVar16._0_8_,auVar16._8_8_,&cf_lrc);

            uVar9 = _objc_retainAutoreleasedReturnValue();

            _objc_release(auVar16._0_8_);

            FUN_00294240(&_OBJC_CLASS___NSFileManager);

            auVar16 = _objc_retainAutoreleasedReturnValue();

            iVar2 = FUN_00295160(auVar16._0_8_,auVar16._8_8_,uVar9);

            _objc_release(auVar16._0_8_);

            uVar14 = extraout_x1_06;

            if (iVar2 != 0) {

              FUN_0029f680(uVar8,extraout_x1_06,uVar9);

              uVar14 = extraout_x1_07;

            }

            FUN_0029f0c0(uVar8,uVar14,1);

            FUN_00291240(local_140,extraout_x1_08,uVar8);

            _objc_release(uVar9);

            _objc_release(pcVar12);

            _objc_release(uVar8);

            _objc_release(uVar6);

          }

          _objc_release(uVar7);

          lVar13 = lVar13 + 1;

        } while (lVar5 != lVar13);

        lVar5 = FUN_00293880(uVar4,extraout_x1_09,&local_130,auStack_f0,0x10);

      } while (lVar5 != 0);

    }

    _objc_release(uVar4);

    FUN_002a3ee0(local_140,extraout_x1_11,&PTR___NSConcreteGlobalBlock_00390468);

  }

  _objc_release(uVar4);

  _objc_release(uVar3);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    _objc_autoreleaseReturnValue(local_140);

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




