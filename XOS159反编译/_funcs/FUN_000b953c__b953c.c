// FUN_000b953c @0xb953c


void FUN_000b953c(long param_1)



{

  undefined *puVar1;

  long lVar2;

  char cVar3;

  undefined8 uVar4;

  ulong uVar5;

  long lVar6;

  undefined8 uVar7;

  long lVar8;

  long lVar9;

  undefined8 uVar10;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 uVar11;

  undefined8 extraout_x1_01;

  long lVar12;

  long lVar13;

  long lVar14;

  undefined1 auVar15 [16];

  undefined8 local_150;

  long lStack_148;

  long *local_140;

  undefined8 uStack_138;

  undefined8 local_130;

  undefined8 uStack_128;

  undefined8 uStack_120;

  undefined8 uStack_118;

  char local_109;

  undefined8 local_108;

  undefined1 auStack_100 [128];

  long local_80;

  

  local_80 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  if (param_1 != 0) {

    uVar4 = _objc_opt_class(&_OBJC_CLASS___UIView);

    uVar5 = _objc_opt_isKindOfClass(param_1,uVar4);

    if ((uVar5 & 1) != 0) {

      _objc_retain(param_1);

      local_108 = 0;

      local_109 = '\0';

      uVar5 = FUN_000b2180(param_1,&local_108,&local_109);

      if ((uVar5 & 1) == 0) {

        FUN_000b6bc8(param_1);

        _objc_setAssociatedObject

                  (param_1,PTR_LOOP_003e62f8,&PTR__OBJC_CLASS___NSConstantDoubleNumber_003bf2c0,1);

        _objc_setAssociatedObject

                  (param_1,PTR_LOOP_003e6300,&PTR__OBJC_CLASS___NSConstantDoubleNumber_003bf2c0,1);

      }

      else {

        uVar5 = _objc_opt_respondsToSelector(param_1,"getHeadImageView");

        if ((uVar5 & 1) == 0) {

          lVar6 = 0;

        }

        else {

          FUN_002959c0(param_1);

          lVar6 = _objc_retainAutoreleasedReturnValue();

        }

        uVar4 = local_108;

        puVar1 = PTR_LOOP_003e62f8;

        FUN_002993a0(local_108,&_OBJC_CLASS___NSNumber);

        uVar7 = _objc_retainAutoreleasedReturnValue();

        _objc_setAssociatedObject(param_1,puVar1,uVar7,1);

        _objc_release(uVar7);

        cVar3 = local_109;

        puVar1 = PTR_LOOP_003e6300;

        uVar7 = uVar4;

        if (local_109 == '\0') {

          uVar7 = 0;

        }

        FUN_002993a0(uVar7,&_OBJC_CLASS___NSNumber);

        uVar7 = _objc_retainAutoreleasedReturnValue();

        _objc_setAssociatedObject(param_1,puVar1,uVar7,1);

        _objc_release(uVar7);

        if (DAT_003e7b78 != -1) {

          FUN_0028f078();

        }

        FUN_0029c6e0(&_OBJC_CLASS___NSMutableSet);

        uVar7 = _objc_retainAutoreleasedReturnValue();

        FUN_00292180(&_OBJC_CLASS___CATransaction);

        FUN_0029dd40(&_OBJC_CLASS___CATransaction,extraout_x1,1);

        if ((cVar3 == '\0') || (lVar6 == 0)) {

          if (lVar6 != 0) {

            FUN_000b6dfc(lVar6);

          }

        }

        else {

          FUN_000b9a18(uVar4,lVar6,param_1,uVar7);

        }

        uStack_128 = 0;

        local_130 = 0;

        uStack_118 = 0;

        uStack_120 = 0;

        lStack_148 = 0;

        local_150 = 0;

        uStack_138 = 0;

        local_140 = (long *)0x0;

        FUN_002a4840(param_1);

        auVar15 = _objc_retainAutoreleasedReturnValue();

        uVar10 = auVar15._0_8_;

        lVar8 = FUN_00293880(uVar10,auVar15._8_8_,&local_150,auStack_100,0x10);

        if (lVar8 != 0) {

          lVar14 = *local_140;

          do {

            lVar12 = 0;

            do {

              if (*local_140 != lVar14) {

                _objc_enumerationMutation(uVar10);

              }

              lVar2 = DAT_003e7b70;

              lVar13 = *(long *)(lStack_148 + lVar12 * 8);

              _objc_retain(lVar13);

              _objc_retain(lVar6);

              if (((lVar13 == 0 || lVar13 == lVar6) ||

                  (lVar9 = FUN_002a4e60(lVar13), lVar9 - 0x1352577U < 6 || lVar9 == 0x135257e)) ||

                 ((lVar2 != 0 && (uVar5 = _objc_opt_isKindOfClass(lVar13,lVar2), (uVar5 & 1) != 0)))

                 ) {

                _objc_release(lVar6);

                _objc_release(lVar13);

                uVar11 = extraout_x1_00;

              }

              else {

                _objc_release(lVar6);

                _objc_release(lVar13);

                FUN_000b9a18(uVar4,lVar13,param_1,uVar7);

                uVar11 = extraout_x1_01;

              }

              lVar12 = lVar12 + 1;

            } while (lVar8 != lVar12);

            lVar8 = FUN_00293880(uVar10,uVar11,&local_150,auStack_100,0x10);

          } while (lVar8 != 0);

        }

        _objc_release(uVar10);

        lVar8 = 0;

        do {

          FUN_000b3444(param_1,*(undefined8 *)((long)&PTR_s_m_voiceTransView_0038b238 + lVar8));

          uVar10 = _objc_retainAutoreleasedReturnValue();

          FUN_000b9a18(uVar4,uVar10,param_1,uVar7);

          _objc_release(uVar10);

          lVar8 = lVar8 + 8;

        } while (lVar8 != 0x58);

        FUN_002930a0(&_OBJC_CLASS___CATransaction);

        _objc_release(uVar7);

        _objc_release(lVar6);

      }

      _objc_release(param_1);

    }

  }

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_80) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




