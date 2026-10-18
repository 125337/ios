// FUN_001c009c @0x1c009c


undefined8 FUN_001c009c(void)



{

  int iVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  long lVar7;

  long lVar8;

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

  long lVar9;

  undefined1 auVar10 [16];

  undefined1 auVar11 [16];

  long local_98;

  long local_90;

  long local_88;

  long local_80;

  long local_78;

  undefined8 local_70;

  undefined8 local_68;

  undefined8 uStack_60;

  long local_58;

  

  local_58 = *(long *)PTR____stack_chk_guard_00388738;

  iVar1 = FUN_001c0f98();

  if (iVar1 != 0) {

    uVar2 = extraout_x1;

    if ((DAT_003e97f9 & 1) == 0) {

      DAT_003e97f9 = 1;

      FUN_00292980(&_OBJC_CLASS___CHHapticEngine);

      uVar2 = _objc_retainAutoreleasedReturnValue();

      DAT_003e97fa = FUN_002a48a0();

      _objc_release(uVar2);

      uVar2 = extraout_x1_00;

    }

    if (DAT_003e97fa == '\x01') {

      if (DAT_003e9798 == 0) {

        auVar10 = _objc_alloc(&_OBJC_CLASS___CHHapticEngine);

        local_78 = 0;

        lVar3 = FUN_002968a0(auVar10._0_8_,auVar10._8_8_,&local_78);

        lVar9 = local_78;

        _objc_retain(local_78);

        lVar7 = DAT_003e9798;

        DAT_003e9798 = lVar3;

        _objc_release(lVar7);

        uVar2 = 0;

        if ((lVar9 == 0) && (DAT_003e9798 != 0)) {

          FUN_002a0780(DAT_003e9798,extraout_x1_01,1);

          FUN_002a24a0(DAT_003e9798,extraout_x1_02,PTR____kCFBooleanFalse_00388318,

                       &cf_autoShutdownEnabled);

          FUN_002a1a00(DAT_003e9798,extraout_x1_03,&PTR___NSConcreteGlobalBlock_0038e990);

          FUN_002a0d20(DAT_003e9798,extraout_x1_04,&PTR___NSConcreteGlobalBlock_0038e9b0);

          uVar2 = extraout_x1_05;

          goto LAB_001c01ac;

        }

      }

      else {

LAB_001c01ac:

        if ((DAT_003e97c0 & 1) == 0) {

          local_80 = 0;

          FUN_002a4140(DAT_003e9798,uVar2,&local_80);

          lVar9 = local_80;

          _objc_retain(local_80);

          if (lVar9 != 0) {

            uVar2 = 0;

            DAT_003e97c0 = 0;

            goto LAB_001c03ec;

          }

          DAT_003e97c0 = 1;

        }

        if (DAT_003e97a0 == 0) {

          auVar10 = _objc_alloc(&_OBJC_CLASS___CHHapticEventParameter);

          uVar4 = FUN_00296d80(0x3eb33333,auVar10._0_8_,auVar10._8_8_,

                               *(undefined8 *)PTR__CHHapticEventParameterIDHapticIntensity_00388670)

          ;

          auVar10 = _objc_alloc(&_OBJC_CLASS___CHHapticEventParameter);

          uVar5 = FUN_00296d80(0x3ec28f5c,auVar10._0_8_,auVar10._8_8_,

                               *(undefined8 *)PTR__CHHapticEventParameterIDHapticSharpness_00388678)

          ;

          auVar10 = _objc_alloc(&_OBJC_CLASS___CHHapticEvent);

          uVar2 = *(undefined8 *)PTR__CHHapticEventTypeHapticContinuous_00388680;

          local_68 = uVar4;

          uStack_60 = uVar5;

          FUN_00291e00(&_OBJC_CLASS___NSArray,auVar10._8_8_,&local_68,2);

          auVar11 = _objc_retainAutoreleasedReturnValue();

          uVar6 = FUN_00296b40(0,0x4028000000000000,auVar10._0_8_,auVar11._8_8_,uVar2,auVar11._0_8_)

          ;

          _objc_release(auVar11._0_8_);

          auVar10 = _objc_alloc(&_OBJC_CLASS___CHHapticPattern);

          local_70 = uVar6;

          FUN_00291e00(&_OBJC_CLASS___NSArray,auVar10._8_8_,&local_70,1);

          auVar11 = _objc_retainAutoreleasedReturnValue();

          local_88 = 0;

          lVar7 = FUN_00296b60(auVar10._0_8_,auVar11._8_8_,auVar11._0_8_,

                               PTR____NSArray0__struct_00388308,&local_88);

          lVar9 = local_88;

          _objc_retain(local_88);

          _objc_release(auVar11._0_8_);

          uVar2 = 0;

          if ((lVar9 == 0) && (lVar7 != 0)) {

            local_90 = 0;

            FUN_00293a40(DAT_003e9798,extraout_x1_06,lVar7,&local_90);

            lVar8 = _objc_retainAutoreleasedReturnValue();

            lVar9 = local_90;

            _objc_retain(local_90);

            lVar3 = DAT_003e97a0;

            DAT_003e97a0 = lVar8;

            _objc_release(lVar3);

            uVar2 = 0;

            if ((lVar9 == 0) && (DAT_003e97a0 != 0)) {

              FUN_0029f660(DAT_003e97a0,extraout_x1_07,1);

              local_98 = 0;

              FUN_002a4180(0,DAT_003e97a0,extraout_x1_08,&local_98);

              lVar9 = local_98;

              _objc_retain(local_98);

              lVar3 = DAT_003e97a0;

              if (lVar9 == 0) {

                uVar2 = 1;

              }

              else {

                DAT_003e97a0 = 0;

                _objc_release(lVar3);

                uVar2 = 0;

                DAT_003e70b0 = 0xbf800000;

                DAT_003e70b4 = 0xbf800000;

              }

            }

          }

          _objc_release(lVar7);

          _objc_release(uVar6);

          _objc_release(uVar5);

          _objc_release(uVar4);

        }

        else {

          lVar9 = 0;

          uVar2 = 1;

        }

      }

LAB_001c03ec:

      _objc_release(lVar9);

      goto LAB_001c03f4;

    }

  }

  uVar2 = 0;

LAB_001c03f4:

  if (*(long *)PTR____stack_chk_guard_00388738 == local_58) {

    return uVar2;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




