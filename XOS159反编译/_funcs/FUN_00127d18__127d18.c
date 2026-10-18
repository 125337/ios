// FUN_00127d18 @0x127d18


void FUN_00127d18(void)



{

  cfstringStruct *pcVar1;

  cfstringStruct *pcVar2;

  uint uVar3;

  int iVar4;

  cfstringStruct *pcVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  long lVar9;

  undefined8 uVar10;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  long lVar11;

  long lVar12;

  undefined8 uVar13;

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

  uVar3 = FUN_001331c4();

  lVar9 = DAT_003e82f0;

  if (DAT_003e82f0 != 0 && DAT_003e8490 == uVar3) {

    _objc_retain(DAT_003e82f0);

    goto LAB_00127ed0;

  }

  if (DAT_003e8438 != -1) {

    thunk_FUN_00128d5c();

  }

  FUN_001272a4();

  pcVar5 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  auVar14 = FUN_00297fa0();

  if (auVar14._0_8_ == 0) {

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar14 = _objc_retainAutoreleasedReturnValue();

    uVar6 = auVar14._0_8_;

    FUN_002a45e0(uVar6,auVar14._8_8_,&cf_xzyNameplateImageNameLight);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    auVar14 = FUN_00297fa0();

    if (auVar14._0_8_ == 0) {

      FUN_002a45e0(uVar6,auVar14._8_8_,&cf_xzyNameplateImageNameDark);

      uVar8 = _objc_retainAutoreleasedReturnValue();

      lVar9 = FUN_00297fa0();

      _objc_release(uVar8);

      _objc_release(uVar7);

      if (lVar9 != 0) goto LAB_00127e44;

      if ((DAT_003e84c8 & 1) == 0) {

        DAT_003e84c8 = 1;

        FUN_00294240(&_OBJC_CLASS___NSFileManager);

        auVar14 = _objc_retainAutoreleasedReturnValue();

        FUN_00293660(auVar14._0_8_,auVar14._8_8_,DAT_003e8308,0);

        uVar7 = _objc_retainAutoreleasedReturnValue();

        _objc_release(auVar14._0_8_);

        uStack_108 = 0;

        local_110 = 0;

        uStack_f8 = 0;

        uStack_100 = 0;

        lStack_128 = 0;

        local_130 = 0;

        uStack_118 = 0;

        local_120 = (long *)0x0;

        _objc_retain(uVar7);

        lVar9 = FUN_00293880(uVar7,extraout_x1_00,&local_130,auStack_f0,0x10);

        if (lVar9 != 0) {

          lVar12 = *local_120;

          do {

            lVar11 = 0;

            do {

              if (*local_120 != lVar12) {

                _objc_enumerationMutation(uVar7);

              }

              uVar8 = DAT_003e8310;

              uVar13 = *(undefined8 *)(lStack_128 + lVar11 * 8);

              FUN_00299b20(uVar13);

              uVar10 = _objc_retainAutoreleasedReturnValue();

              FUN_002984e0();

              auVar14 = _objc_retainAutoreleasedReturnValue();

              iVar4 = FUN_00293560(uVar8,auVar14._8_8_,auVar14._0_8_);

              _objc_release(auVar14._0_8_);

              _objc_release(uVar10);

              if (iVar4 != 0) {

                FUN_002a4460(DAT_003e8308,extraout_x1_01,uVar13);

                uVar10 = _objc_retainAutoreleasedReturnValue();

                uVar8 = DAT_003e84c0;

                DAT_003e84c0 = uVar10;

                _objc_release(uVar8);

                goto LAB_00128064;

              }

              lVar11 = lVar11 + 1;

            } while (lVar9 != lVar11);

            lVar9 = FUN_00293880(uVar7,extraout_x1_01,&local_130,auStack_f0,0x10);

          } while (lVar9 != 0);

        }

LAB_00128064:

        _objc_release(uVar7);

        _objc_release(uVar7);

      }

      uVar7 = DAT_003e84c0;

      _objc_retain(DAT_003e84c0);

    }

    else {

      _objc_release(uVar7);

LAB_00127e44:

      uVar7 = 0;

    }

    _objc_release(uVar6);

    auVar14._8_8_ = extraout_x1;

    auVar14._0_8_ = uVar7;

  }

  else {

    FUN_002a4460(DAT_003e8308,auVar14._8_8_,pcVar5);

    auVar14 = _objc_retainAutoreleasedReturnValue();

  }

  lVar12 = auVar14._0_8_;

  if (lVar12 == 0) {

    lVar9 = 0;

  }

  else {

    FUN_002965c0(&_OBJC_CLASS___UIImage,auVar14._8_8_,lVar12);

    lVar9 = _objc_retainAutoreleasedReturnValue();

  }

  lVar11 = DAT_003e82f0;

  DAT_003e82f0 = lVar9;

  _objc_release(lVar11);

  pcVar1 = &cf___;

  if (pcVar5 != (cfstringStruct *)0x0) {

    pcVar1 = pcVar5;

  }

  _objc_retain(pcVar1);

  pcVar2 = DAT_003e82f8;

  DAT_003e82f8 = pcVar1;

  _objc_release(pcVar2);

  lVar9 = DAT_003e82f0;

  DAT_003e8490 = (byte)uVar3;

  _objc_retain(DAT_003e82f0);

  _objc_release(lVar12);

  _objc_release(pcVar5);

LAB_00127ed0:

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    _objc_autoreleaseReturnValue(lVar9);

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




