// FUN_0023aa8c @0x23aa8c


void FUN_0023aa8c(undefined8 param_1)



{

  long lVar1;

  bool bVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  long lVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  long lVar8;

  long lVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  cfstringStruct *pcVar12;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  long lVar13;

  long lVar14;

  undefined1 auVar15 [16];

  undefined1 auVar16 [16];

  ulong local_150;

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

  FUN_0029c6e0(&_OBJC_CLASS___NSMutableSet);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uStack_108 = 0;

  local_110 = 0;

  uStack_f8 = 0;

  uStack_100 = 0;

  lStack_128 = 0;

  local_130 = 0;

  uStack_118 = 0;

  local_120 = (long *)0x0;

  FUN_0023ae90(param_1);

  auVar15 = _objc_retainAutoreleasedReturnValue();

  uVar4 = auVar15._0_8_;

  lVar5 = FUN_00293880(uVar4,auVar15._8_8_,&local_130,auStack_f0,0x10);

  if (lVar5 == 0) {

    _objc_release(uVar4);

    pcVar12 = (cfstringStruct *)0x0;

  }

  else {

    bVar2 = false;

    local_150 = 0;

    lVar13 = *local_120;

    do {

      lVar14 = 0;

      do {

        if (*local_120 != lVar13) {

          _objc_enumerationMutation(uVar4);

        }

        uVar6 = FUN_002974a0(*(undefined8 *)(lStack_128 + lVar14 * 8));

        FUN_00239d80(uVar6,param_1);

        auVar15 = _objc_retainAutoreleasedReturnValue();

        uVar6 = auVar15._0_8_;

        FUN_00299540(uVar6,auVar15._8_8_,&cf_source);

        auVar15 = _objc_retainAutoreleasedReturnValue();

        uVar7 = auVar15._0_8_;

        FUN_00299540(uVar6,auVar15._8_8_,&cf_text);

        lVar8 = _objc_retainAutoreleasedReturnValue();

        auVar15 = FUN_00297fa0(uVar7);

        if (auVar15._0_8_ != 0 && lVar8 != 0) {

          auVar15 = FUN_00293560(uVar3,auVar15._8_8_,uVar7);

          if ((auVar15._0_8_ & 1) == 0) {

            FUN_00291240(uVar3,auVar15._8_8_,uVar7);

            _objc_retain(lVar8);

            lVar9 = FUN_00297fa0(lVar8);

            if (lVar9 == 0) {

              lVar9 = -1;

            }

            else {

              FUN_002941e0(&_OBJC_CLASS___NSCharacterSet);

              uVar10 = _objc_retainAutoreleasedReturnValue();

              FUN_00297580();

              auVar15 = _objc_retainAutoreleasedReturnValue();

              FUN_00293260(lVar8,auVar15._8_8_,auVar15._0_8_);

              auVar16 = _objc_retainAutoreleasedReturnValue();

              FUN_00293240(auVar16._0_8_,auVar16._8_8_,&cf___);

              uVar11 = _objc_retainAutoreleasedReturnValue();

              _objc_release(auVar16._0_8_);

              _objc_release(auVar15._0_8_);

              _objc_release(uVar10);

              lVar9 = FUN_00297fa0(uVar11);

              if (lVar9 == 0) {

                lVar9 = -1;

              }

              else {

                lVar9 = FUN_002984c0(uVar11);

                if (lVar9 < 1) {

                  lVar9 = -1;

                }

              }

              _objc_release(uVar11);

            }

            _objc_release(lVar8);

            bVar2 = (bool)(lVar9 < 1 | bVar2);

            lVar1 = 0;

            if (0 < lVar9) {

              lVar1 = lVar9;

            }

            local_150 = lVar1 + local_150;

          }

        }

        _objc_release(lVar8);

        _objc_release(uVar7);

        _objc_release(uVar6);

        lVar14 = lVar14 + 1;

      } while (lVar5 != lVar14);

      lVar5 = FUN_00293880(uVar4,extraout_x1,&local_130,auStack_f0,0x10);

    } while (lVar5 != 0);

    _objc_release(uVar4);

    if (0 < (long)local_150) {

      if (local_150 < 100) {

        FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_00,&cf__lld);

        pcVar12 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

      }

      else {

        pcVar12 = &cf_99_;

      }

      goto LAB_0023ad68;

    }

    pcVar12 = &cf___;

    if (!bVar2) {

      pcVar12 = (cfstringStruct *)0x0;

    }

  }

  _objc_retain(pcVar12);

LAB_0023ad68:

  _objc_release(uVar3);

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    _objc_autoreleaseReturnValue(pcVar12);

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




