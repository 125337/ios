// FUN_0008876c @0x8876c


undefined8 FUN_0008876c(undefined8 param_1,undefined8 param_2,int param_3)



{

  int iVar1;

  uint uVar2;

  uint uVar3;

  long lVar4;

  undefined8 uVar5;

  long lVar6;

  undefined8 uVar7;

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

  long lVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  undefined1 auVar11 [16];

  undefined1 auVar12 [16];

  undefined1 auVar13 [16];

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

  _objc_retain();

  _objc_retain(param_2);

  lVar4 = FUN_00297fa0(param_2);

  if (lVar4 == 0) {

    uVar7 = 0;

  }

  else {

    _objc_retain(param_2);

    uVar5 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);

    lVar4 = FUN_00297fa0(param_2);

    if ((lVar4 != 0) &&

       (lVar4 = _CFPreferencesCopyKeyList

                          (param_2,*(undefined8 *)PTR__kCFPreferencesCurrentUser_00388340,

                           *(undefined8 *)PTR__kCFPreferencesAnyHost_00388338), lVar4 != 0)) {

      for (lVar8 = 0; lVar6 = _CFArrayGetCount(lVar4), lVar8 < lVar6; lVar8 = lVar8 + 1) {

        _CFArrayGetValueAtIndex(lVar4,lVar8);

        uVar7 = _objc_retainAutoreleasedReturnValue();

        auVar11 = _CFPreferencesCopyAppValue(uVar7,param_2);

        lVar6 = auVar11._0_8_;

        if (lVar6 != 0) {

          FUN_002a00a0(uVar5,auVar11._8_8_,lVar6,uVar7);

          _objc_release(lVar6);

        }

        _objc_release(uVar7);

      }

      _CFRelease(lVar4);

    }

    _objc_release(param_2);

    uStack_188 = 0;

    local_190 = 0;

    uStack_178 = 0;

    uStack_180 = 0;

    lStack_1a8 = 0;

    local_1b0 = 0;

    uStack_198 = 0;

    local_1a0 = (long *)0x0;

    _objc_retain(param_1);

    auVar11 = FUN_00293880(param_1,extraout_x1,&local_1b0,auStack_f0,0x10);

    if (auVar11._0_8_ != 0) {

      lVar4 = *local_1a0;

      do {

        uVar7 = auVar11._8_8_;

        lVar8 = 0;

        do {

          if (*local_1a0 != lVar4) {

            _objc_enumerationMutation(param_1);

            uVar7 = extraout_x1_00;

          }

          uVar9 = *(undefined8 *)(lStack_1a8 + lVar8 * 8);

          if (param_3 == 0) {

            iVar1 = FUN_00085164(uVar9);

            uVar7 = extraout_x1_02;

          }

          else {

            iVar1 = FUN_00295f60(uVar9,uVar7,&cf_Cadis);

            uVar7 = extraout_x1_01;

          }

          if (iVar1 != 0) {

            FUN_00299540(uVar5,uVar7,uVar9);

            auVar12 = _objc_retainAutoreleasedReturnValue();

            FUN_00299540(param_1,auVar12._8_8_,uVar9);

            auVar13 = _objc_retainAutoreleasedReturnValue();

            iVar1 = FUN_002977c0(auVar12._0_8_,auVar13._8_8_,auVar13._0_8_);

            _objc_release(auVar13._0_8_);

            _objc_release(auVar12._0_8_);

            uVar7 = extraout_x1_03;

            if (iVar1 == 0) {

              uVar7 = 0;

              uVar9 = param_1;

              goto LAB_00088ab4;

            }

          }

          lVar8 = lVar8 + 1;

        } while (auVar11._0_8_ != lVar8);

        auVar11 = FUN_00293880(param_1,uVar7,&local_1b0,auStack_f0,0x10);

      } while (auVar11._0_8_ != 0);

    }

    _objc_release(param_1);

    uStack_1c8 = 0;

    local_1d0 = 0;

    uStack_1b8 = 0;

    uStack_1c0 = 0;

    lStack_1e8 = 0;

    local_1f0 = 0;

    uStack_1d8 = 0;

    local_1e0 = (long *)0x0;

    _objc_retain(uVar5);

    auVar11 = FUN_00293880(uVar5,extraout_x1_04,&local_1f0,auStack_170,0x10);

    uVar9 = uVar5;

    if (auVar11._0_8_ != 0) {

      lVar4 = *local_1e0;

      do {

        uVar7 = auVar11._8_8_;

        lVar8 = 0;

        do {

          if (*local_1e0 != lVar4) {

            _objc_enumerationMutation(uVar5);

            uVar7 = extraout_x1_05;

          }

          uVar10 = *(undefined8 *)(lStack_1e8 + lVar8 * 8);

          if (param_3 == 0) {

            uVar2 = FUN_00085164(uVar10);

            uVar7 = extraout_x1_07;

          }

          else {

            uVar2 = FUN_00295f60(uVar10,uVar7,&cf_Cadis);

            uVar7 = extraout_x1_06;

          }

          auVar12 = FUN_00297820(uVar10,uVar7,&cf_xzySettingsRevision);

          uVar7 = auVar12._8_8_;

          if (((auVar12._0_8_ & 1) == 0) &&

             (uVar3 = FUN_00297820(uVar10,uVar7,&cf_CadisXZYSettingsRevision),

             uVar7 = extraout_x1_08, ((uVar3 | uVar2 ^ 0xffffffff) & 1) == 0)) {

            FUN_00299540(param_1,extraout_x1_08,uVar10);

            lVar6 = _objc_retainAutoreleasedReturnValue();

            _objc_release();

            uVar7 = extraout_x1_09;

            if (lVar6 == 0) {

              uVar7 = 0;

              goto LAB_00088ab4;

            }

          }

          lVar8 = lVar8 + 1;

        } while (auVar11._0_8_ != lVar8);

        auVar11 = FUN_00293880(uVar5,uVar7,&local_1f0,auStack_170,0x10);

      } while (auVar11._0_8_ != 0);

    }

    uVar7 = 1;

LAB_00088ab4:

    _objc_release(uVar9);

    _objc_release(uVar5);

  }

  _objc_release(param_2);

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_70) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return uVar7;

}




