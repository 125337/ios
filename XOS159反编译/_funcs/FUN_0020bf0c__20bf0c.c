// FUN_0020bf0c @0x20bf0c


void FUN_0020bf0c(void)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  ulong uVar4;

  long lVar5;

  long lVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  long lVar7;

  long lVar8;

  long lVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  long lVar12;

  undefined1 auVar13 [16];

  undefined1 auVar14 [16];

  undefined8 local_1f0;

  long lStack_1e8;

  long *local_1e0;

  undefined8 uStack_1d8;

  undefined8 local_1d0;

  undefined8 uStack_1c8;

  undefined8 uStack_1c0;

  undefined8 uStack_1b8;

  undefined8 local_1b0;

  long lStack_1a8;

  long *local_1a0;

  undefined8 uStack_198;

  undefined8 local_190;

  undefined8 uStack_188;

  undefined8 uStack_180;

  undefined8 uStack_178;

  undefined1 auStack_170 [128];

  undefined1 auStack_f0 [128];

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  FUN_002944c0(&_OBJC_CLASS___NSMutableDictionary);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  uVar1 = DAT_003eaa18;

  DAT_003eaa18 = uVar2;

  _objc_release(uVar1);

  uVar1 = DAT_003eaa10;

  uStack_188 = 0;

  local_190 = 0;

  uStack_178 = 0;

  uStack_180 = 0;

  lStack_1a8 = 0;

  local_1b0 = 0;

  uStack_198 = 0;

  local_1a0 = (long *)0x0;

  _objc_retain(DAT_003eaa10);

  auVar13 = FUN_00293880(uVar1,extraout_x1,&local_1b0,auStack_f0,0x10);

  if (auVar13._0_8_ != 0) {

    lVar7 = *local_1a0;

    do {

      uVar2 = auVar13._8_8_;

      lVar8 = 0;

      do {

        if (*local_1a0 != lVar7) {

          _objc_enumerationMutation(uVar1);

          uVar2 = extraout_x1_00;

        }

        uVar10 = *(undefined8 *)(lStack_1a8 + lVar8 * 8);

        FUN_00299540(uVar10,uVar2,&cf_id);

        auVar14 = _objc_retainAutoreleasedReturnValue();

        uVar2 = auVar14._0_8_;

        FUN_00299540(uVar10,auVar14._8_8_,&cf_members);

        uVar10 = _objc_retainAutoreleasedReturnValue();

        uVar3 = _objc_opt_class(&_OBJC_CLASS___NSString);

        uVar4 = _objc_opt_isKindOfClass(uVar2,uVar3);

        if ((uVar4 & 1) != 0) {

          uVar3 = _objc_opt_class(&_OBJC_CLASS___NSArray);

          uVar4 = _objc_opt_isKindOfClass(uVar10,uVar3);

          if ((uVar4 & 1) != 0) {

            uStack_1c8 = 0;

            local_1d0 = 0;

            uStack_1b8 = 0;

            uStack_1c0 = 0;

            lStack_1e8 = 0;

            local_1f0 = 0;

            uStack_1d8 = 0;

            local_1e0 = (long *)0x0;

            _objc_retain(uVar10);

            lVar5 = FUN_00293880(uVar10,extraout_x1_01,&local_1f0,auStack_170,0x10);

            if (lVar5 != 0) {

              lVar9 = *local_1e0;

              do {

                lVar12 = 0;

                do {

                  if (*local_1e0 != lVar9) {

                    _objc_enumerationMutation(uVar10);

                  }

                  uVar11 = *(undefined8 *)(lStack_1e8 + lVar12 * 8);

                  uVar3 = _objc_opt_class(&_OBJC_CLASS___NSString);

                  auVar14 = _objc_opt_isKindOfClass(uVar11,uVar3);

                  uVar3 = auVar14._8_8_;

                  if (((auVar14._0_8_ & 1) != 0) &&

                     (auVar14 = FUN_00297fa0(uVar11), uVar3 = auVar14._8_8_, auVar14._0_8_ != 0)) {

                    FUN_00299540(DAT_003eaa18,uVar3,uVar11);

                    lVar6 = _objc_retainAutoreleasedReturnValue();

                    _objc_release();

                    uVar3 = extraout_x1_02;

                    if (lVar6 == 0) {

                      FUN_002a00a0(DAT_003eaa18,extraout_x1_02,uVar2,uVar11);

                      uVar3 = extraout_x1_03;

                    }

                  }

                  lVar12 = lVar12 + 1;

                } while (lVar5 != lVar12);

                lVar5 = FUN_00293880(uVar10,uVar3,&local_1f0,auStack_170,0x10);

              } while (lVar5 != 0);

            }

            _objc_release(uVar10);

          }

        }

        _objc_release(uVar10);

        _objc_release(uVar2);

        lVar8 = lVar8 + 1;

        uVar2 = extraout_x1_04;

      } while (lVar8 != auVar13._0_8_);

      auVar13 = FUN_00293880(uVar1,extraout_x1_04,&local_1b0,auStack_f0,0x10);

    } while (auVar13._0_8_ != 0);

  }

  _objc_release(uVar1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




