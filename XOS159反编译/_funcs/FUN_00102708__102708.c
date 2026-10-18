// FUN_00102708 @0x102708


void FUN_00102708(undefined8 param_1)



{

  byte bVar1;

  long lVar2;

  undefined8 uVar3;

  long lVar4;

  long lVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 extraout_x1;

  undefined8 uVar9;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  long lVar10;

  undefined8 uVar11;

  long lVar12;

  undefined1 auVar13 [16];

  undefined1 auVar14 [16];

  byte local_131;

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

  _objc_retain();

  FUN_000ff4a8();

  auVar13 = _objc_retainAutoreleasedReturnValue();

  uVar3 = auVar13._8_8_;

  lVar2 = auVar13._0_8_;

  if (lVar2 == 0) {

    lVar12 = 0;

    goto LAB_00102a54;

  }

  if (DAT_003e8048 != -1) {

    thunk_FUN_001055ac();

    uVar3 = extraout_x1_03;

  }

  FUN_002a4680(&_OBJC_CLASS___NSString,uVar3,&cf______);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00299520(DAT_003e7ec0);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  if (lVar4 == 0) {

    FUN_00103154(lVar2,param_1);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    if (lVar5 == 0) {

      FUN_001039d4(lVar2,param_1);

      auVar13 = _objc_retainAutoreleasedReturnValue();

      lVar5 = auVar13._0_8_;

      if (lVar5 == 0) {

        FUN_002a4460(lVar2,auVar13._8_8_,param_1);

        auVar13 = _objc_retainAutoreleasedReturnValue();

        uVar6 = auVar13._0_8_;

        FUN_002965c0(&_OBJC_CLASS___UIImage,auVar13._8_8_,uVar6);

        lVar5 = _objc_retainAutoreleasedReturnValue();

        if (lVar5 == 0) {

          FUN_00294240(&_OBJC_CLASS___NSFileManager);

          auVar13 = _objc_retainAutoreleasedReturnValue();

          uVar7 = auVar13._0_8_;

          FUN_00293660(uVar7,auVar13._8_8_,lVar2,0);

          uVar8 = _objc_retainAutoreleasedReturnValue();

          uStack_108 = 0;

          local_110 = 0;

          uStack_f8 = 0;

          uStack_100 = 0;

          lStack_128 = 0;

          local_130 = 0;

          uStack_118 = 0;

          local_120 = (long *)0x0;

          _objc_retain();

          auVar13 = FUN_00293880(uVar8,extraout_x1,&local_130,auStack_f0,0x10);

          if (auVar13._0_8_ != 0) {

            lVar12 = *local_120;

            do {

              uVar9 = auVar13._8_8_;

              lVar10 = 0;

              do {

                if (*local_120 != lVar12) {

                  _objc_enumerationMutation(uVar8);

                  uVar9 = extraout_x1_00;

                }

                uVar11 = *(undefined8 *)(lStack_128 + lVar10 * 8);

                auVar14 = FUN_00295f60(uVar11,uVar9,&cf__);

                uVar9 = auVar14._8_8_;

                if ((auVar14._0_8_ & 1) == 0) {

                  FUN_002a4460(lVar2,uVar9,uVar11);

                  auVar14 = _objc_retainAutoreleasedReturnValue();

                  uVar9 = auVar14._0_8_;

                  local_131 = 0;

                  bVar1 = FUN_00295180(uVar7,auVar14._8_8_,uVar9,&local_131);

                  if ((bVar1 & local_131) == 1) {

                    auVar14 = FUN_00297820(uVar11,extraout_x1_01,&cf_sub);

                    if ((auVar14._0_8_ & 1) == 0) {

                      FUN_002a4460(uVar9,auVar14._8_8_,param_1);

                      auVar14 = _objc_retainAutoreleasedReturnValue();

                      FUN_002965c0(&_OBJC_CLASS___UIImage,auVar14._8_8_,auVar14._0_8_);

                      lVar5 = _objc_retainAutoreleasedReturnValue();

                      _objc_release(auVar14._0_8_);

                      if (lVar5 != 0) {

                        _objc_release(uVar9);

                        goto LAB_001029d8;

                      }

                    }

                  }

                  _objc_release(uVar9);

                  uVar9 = extraout_x1_02;

                }

                lVar10 = lVar10 + 1;

              } while (auVar13._0_8_ != lVar10);

              auVar13 = FUN_00293880(uVar8,uVar9,&local_130,auStack_f0,0x10);

            } while (auVar13._0_8_ != 0);

          }

          lVar5 = 0;

LAB_001029d8:

          _objc_release(uVar8);

          _objc_release(uVar8);

          _objc_release(uVar7);

          _objc_release(uVar6);

          if (lVar5 == 0) {

            lVar12 = 0;

            goto LAB_00102a44;

          }

        }

        else {

          _objc_release(uVar6);

        }

      }

    }

    FUN_001040f4(0x404d000000000000,0x4044000000000000,lVar5);

    auVar13 = _objc_retainAutoreleasedReturnValue();

    lVar12 = auVar13._0_8_;

    if (lVar12 != 0) {

      FUN_002a0060(DAT_003e7ec0,auVar13._8_8_,lVar12,uVar3);

    }

    _objc_release(lVar5);

  }

  else {

    _objc_retain(lVar4);

    lVar12 = lVar4;

  }

LAB_00102a44:

  _objc_release(lVar4);

  _objc_release(uVar3);

LAB_00102a54:

  _objc_release(lVar2);

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_70) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  _objc_autoreleaseReturnValue(lVar12);

  return;

}




