// FUN_000ba5fc @0xba5fc


void FUN_000ba5fc(undefined1 param_1 [16],double param_2,double param_3,double param_4,long param_5)



{

  bool bVar1;

  undefined *puVar2;

  int iVar3;

  long lVar4;

  undefined8 uVar5;

  undefined *puVar6;

  long lVar7;

  undefined8 uVar8;

  ulong uVar9;

  undefined8 uVar10;

  ulong uVar11;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 uVar12;

  long lVar13;

  long lVar14;

  double dVar15;

  double dVar16;

  double dVar17;

  double dVar18;

  undefined1 auVar19 [16];

  undefined8 local_240;

  long lStack_238;

  long *local_230;

  undefined8 uStack_228;

  undefined8 local_220;

  undefined8 uStack_218;

  undefined8 uStack_210;

  undefined8 uStack_208;

  undefined *local_1f8;

  undefined8 local_1f0;

  code *local_1e8;

  undefined *puStack_1e0;

  long local_1d8;

  undefined8 local_1d0;

  long lStack_1c8;

  long *local_1c0;

  undefined8 uStack_1b8;

  undefined8 local_1b0;

  undefined8 uStack_1a8;

  undefined8 uStack_1a0;

  undefined8 uStack_198;

  undefined1 auStack_188 [128];

  undefined1 auStack_108 [128];

  long local_88;

  

  local_88 = *(long *)PTR____stack_chk_guard_00388738;

  lVar4 = _objc_loadWeakRetained(param_5 + 0x20);

  if (lVar4 != 0) {

    _objc_setAssociatedObject(lVar4,PTR_LOOP_003e6628,0,1);

    FUN_000ba548(lVar4,0);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_00291620();

    puVar6 = (undefined *)_objc_retainAutoreleasedReturnValue();

    puVar2 = PTR____NSArray0__struct_00388308;

    if (puVar6 != (undefined *)0x0) {

      puVar2 = puVar6;

    }

    _objc_retain(puVar2);

    _objc_release(puVar6);

    FUN_0029b240(uVar5);

    lVar7 = FUN_00293860(puVar2);

    if (lVar7 != 0) {

      auVar19 = FUN_00293860(puVar2);

      FUN_00291da0(&_OBJC_CLASS___NSMutableArray,auVar19._8_8_,auVar19._0_8_);

      uVar8 = _objc_retainAutoreleasedReturnValue();

      uStack_1a8 = 0;

      local_1b0 = 0;

      uStack_198 = 0;

      uStack_1a0 = 0;

      lStack_1c8 = 0;

      local_1d0 = 0;

      uStack_1b8 = 0;

      local_1c0 = (long *)0x0;

      _objc_retain(puVar2);

      auVar19 = FUN_00293880(puVar2,extraout_x1,&local_1d0,auStack_108,0x10);

      if (auVar19._0_8_ != 0) {

        lVar7 = *local_1c0;

        do {

          uVar10 = auVar19._8_8_;

          lVar13 = 0;

          do {

            if (*local_1c0 != lVar7) {

              _objc_enumerationMutation(puVar2);

              uVar10 = extraout_x1_00;

            }

            uVar12 = *(undefined8 *)(lStack_1c8 + lVar13 * 8);

            uVar9 = FUN_00297700(uVar12,uVar10,lVar4);

            if (((uVar9 & 1) == 0) || (uVar9 = FUN_000b9ffc(uVar12), (uVar9 & 1) == 0)) {

              FUN_000b6b34(uVar12);

              FUN_000b6d90(uVar12);

              uVar10 = extraout_x1_03;

            }

            else {

              FUN_000ba114(uVar12);

              FUN_00291240(uVar8,extraout_x1_01,uVar12);

              uVar10 = extraout_x1_02;

            }

            lVar13 = lVar13 + 1;

          } while (auVar19._0_8_ != lVar13);

          auVar19 = FUN_00293880(puVar2,uVar10,&local_1d0,auStack_108,0x10);

        } while (auVar19._0_8_ != 0);

      }

      _objc_release(puVar2);

      lVar7 = FUN_00293860(uVar8);

      if (lVar7 != 0) {

        iVar3 = FUN_000a89d8();

        if (iVar3 == 0) {

          uVar9 = 1;

        }

        else {

          FUN_00295440(uVar8);

          uVar10 = _objc_retainAutoreleasedReturnValue();

          uVar9 = FUN_000ba260();

          _objc_release(uVar10);

        }

        dVar15 = (double)FUN_002935a0(lVar4);

        FUN_00293600(lVar4);

        FUN_002925a0(lVar4);

        dVar18 = param_4;

        FUN_002935a0(lVar4);

        dVar17 = (param_2 - param_4) + param_3;

        dVar16 = -dVar15;

        if (-dVar15 <= dVar17) {

          dVar16 = dVar17;

        }

        uVar11 = FUN_00297780(lVar4);

        if (((uVar11 & 1) == 0) && (uVar11 = FUN_00297b40(lVar4), (uVar11 & 1) == 0)) {

          uVar11 = FUN_000af718(lVar4);

          if ((uVar11 & 1) == 0) {

            FUN_002935e0(lVar4);

            dVar16 = dVar16 - dVar17;

            dVar17 = 120.0;

            bVar1 = dVar16 <= 120.0;

          }

          else {

            bVar1 = true;

          }

        }

        else {

          bVar1 = false;

        }

        local_1f8 = PTR___NSConcreteStackBlock_003886f0;

        local_1f0 = 0xc2000000;

        local_1e8 = FUN_000bab68;

        puStack_1e0 = &DAT_00388e60;

        _objc_retain(lVar4);

        local_1d8 = lVar4;

        FUN_00299ce0(&_OBJC_CLASS___UIView,extraout_x1_04,&local_1f8);

        _objc_release(local_1d8);

        if ((((bVar1) && (uVar11 = FUN_00297780(lVar4), (uVar11 & 1) == 0)) &&

            (uVar11 = FUN_00297b40(lVar4), (uVar11 & 1) == 0)) &&

           (uVar11 = FUN_002976e0(lVar4), (uVar11 & 1) == 0)) {

          dVar16 = (double)FUN_002935a0(lVar4);

          FUN_00293600(lVar4);

          FUN_002925a0(lVar4);

          FUN_002935a0(lVar4);

          uVar10 = FUN_002935e0(lVar4);

          param_3 = (dVar17 - dVar18) + param_3;

          dVar18 = -dVar16;

          if (-dVar16 <= param_3) {

            dVar18 = param_3;

          }

          FUN_0029d6e0(uVar10,dVar18,lVar4);

        }

        uStack_218 = 0;

        local_220 = 0;

        uStack_208 = 0;

        uStack_210 = 0;

        lStack_238 = 0;

        local_240 = 0;

        uStack_228 = 0;

        local_230 = (long *)0x0;

        _objc_retain(uVar8);

        lVar7 = FUN_00293880(uVar8,extraout_x1_05,&local_240,auStack_188,0x10);

        if (lVar7 != 0) {

          lVar13 = *local_230;

          do {

            lVar14 = 0;

            do {

              if (*local_230 != lVar13) {

                _objc_enumerationMutation(uVar8);

              }

              uVar10 = *(undefined8 *)(lStack_238 + lVar14 * 8);

              iVar3 = FUN_000b9ffc(uVar10);

              if (iVar3 != 0) {

                FUN_000b7b78(uVar10);

              }

              if ((uVar9 & 1) == 0) {

                FUN_000b6b34(uVar10);

              }

              else {

                FUN_000ba464(uVar10);

              }

              FUN_000b6d90(uVar10);

              lVar14 = lVar14 + 1;

            } while (lVar7 != lVar14);

            lVar7 = FUN_00293880(uVar8,extraout_x1_06,&local_240,auStack_188,0x10);

          } while (lVar7 != 0);

        }

        _objc_release(uVar8);

      }

      _objc_release(uVar8);

    }

    _objc_release(puVar2);

    _objc_release(uVar5);

  }

  _objc_release(lVar4);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_88) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




