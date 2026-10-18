// FUN_0023ae90 @0x23ae90


void FUN_0023ae90(undefined8 param_1)



{

  uint uVar1;

  uint uVar2;

  int iVar3;

  long lVar4;

  undefined8 uVar5;

  long lVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  long lVar9;

  undefined8 extraout_x1;

  undefined8 uVar10;

  long lVar11;

  undefined8 uVar12;

  long lVar13;

  undefined1 auVar14 [16];

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

  if (DAT_003e7298 < 100) {

    if (DAT_003e7298 == 3) {

      FUN_00243fa0();

      uVar5 = _objc_retainAutoreleasedReturnValue();

      goto LAB_0023b0fc;

    }

  }

  else {

    FUN_0023d02c(param_1);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar4 != 0) {

      FUN_0024e1e4();

      lVar4 = _objc_retainAutoreleasedReturnValue();

      if (lVar4 == 0) {

LAB_0023b0c8:

        iVar3 = FUN_0023d2c4(param_1);

        if (iVar3 == 0) {

          FUN_0024423c();

          uVar5 = _objc_retainAutoreleasedReturnValue();

        }

        else {

          FUN_00243fa0();

          uVar5 = _objc_retainAutoreleasedReturnValue();

        }

      }

      else {

        auVar14 = FUN_00293860();

        if (auVar14._0_8_ == 0) goto LAB_0023b0c8;

        FUN_00299500(lVar4,auVar14._8_8_,0);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        lVar6 = FUN_002974a0();

        _objc_release(uVar5);

        auVar14 = FUN_00293860(lVar4);

        if (auVar14._0_8_ < 2) {

          uVar2 = 1;

        }

        else {

          FUN_00299500(lVar4,auVar14._8_8_,1);

          uVar5 = _objc_retainAutoreleasedReturnValue();

          uVar2 = FUN_002924e0();

          _objc_release(uVar5);

        }

        if (lVar6 < 1) goto LAB_0023b0c8;

        FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        FUN_0029c6e0(&_OBJC_CLASS___NSMutableSet);

        uVar7 = _objc_retainAutoreleasedReturnValue();

        uStack_108 = 0;

        local_110 = 0;

        uStack_f8 = 0;

        uStack_100 = 0;

        lStack_128 = 0;

        local_130 = 0;

        uStack_118 = 0;

        local_120 = (long *)0x0;

        FUN_0024423c();

        auVar14 = _objc_retainAutoreleasedReturnValue();

        uVar8 = auVar14._0_8_;

        lVar9 = FUN_00293880(uVar8,auVar14._8_8_,&local_130,auStack_f0,0x10);

        if (lVar9 != 0) {

          lVar13 = *local_120;

          do {

            lVar11 = 0;

            do {

              if (*local_120 != lVar13) {

                _objc_enumerationMutation(uVar8);

              }

              uVar12 = *(undefined8 *)(lStack_128 + lVar11 * 8);

              auVar14 = FUN_002974a0(uVar12);

              uVar10 = auVar14._8_8_;

              uVar1 = 0;

              if (auVar14._0_8_ < 4) {

                uVar1 = uVar2;

              }

              if ((uVar1 & 1) == 0) {

                auVar14 = FUN_00293560(uVar7,uVar10,uVar12);

                uVar10 = auVar14._8_8_;

                if ((auVar14._0_8_ & 1) == 0) {

                  FUN_00291240(uVar5,uVar10,uVar12);

                  FUN_00291240(uVar7,extraout_x1,uVar12);

                  auVar14 = FUN_00293860(uVar5);

                  uVar10 = auVar14._8_8_;

                  if (lVar6 <= auVar14._0_8_) goto LAB_0023b0b4;

                }

              }

              lVar11 = lVar11 + 1;

            } while (lVar9 != lVar11);

            lVar9 = FUN_00293880(uVar8,uVar10,&local_130,auStack_f0,0x10);

          } while (lVar9 != 0);

        }

LAB_0023b0b4:

        _objc_release(uVar8);

        _objc_release(uVar7);

      }

      _objc_release(lVar4);

      goto LAB_0023b0fc;

    }

  }

  FUN_0024423c();

  uVar5 = _objc_retainAutoreleasedReturnValue();

LAB_0023b0fc:

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_70) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  _objc_autoreleaseReturnValue(uVar5);

  return;

}




