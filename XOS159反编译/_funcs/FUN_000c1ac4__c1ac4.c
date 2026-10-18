// FUN_000c1ac4 @0xc1ac4


void FUN_000c1ac4(long param_1)



{

  undefined8 *puVar1;

  undefined1 uVar2;

  long lVar3;

  long lVar4;

  long lVar5;

  undefined8 uVar6;

  ulong uVar7;

  long lVar8;

  long lVar9;

  long lVar10;

  undefined8 uVar11;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 uVar12;

  long lVar13;

  undefined1 auVar14 [16];

  undefined *local_1a0;

  undefined8 local_198;

  code *local_190;

  undefined *puStack_188;

  long local_180;

  undefined8 *puStack_178;

  undefined8 local_170;

  undefined1 local_168;

  undefined8 local_160;

  long lStack_158;

  long *local_150;

  undefined8 uStack_148;

  undefined8 local_140;

  undefined8 uStack_138;

  undefined8 uStack_130;

  undefined8 uStack_128;

  undefined8 local_120;

  undefined8 *local_118;

  undefined8 local_110;

  code *local_108;

  code *pcStack_100;

  undefined8 local_f8;

  undefined1 auStack_f0 [128];

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  FUN_002a5820(*(undefined8 *)(param_1 + 0x20));

  lVar3 = _objc_retainAutoreleasedReturnValue();

  if ((lVar3 == 0) || (lVar4 = FUN_00297fa0(lVar3), lVar4 == 0)) {

    FUN_0002a854(0x4008000000000000,&cf_ellbc,&cf__gS0R_Nve_g,2);

    goto LAB_000c1e90;

  }

  FUN_002a5800(*(undefined8 *)(param_1 + 0x20));

  lVar4 = _objc_retainAutoreleasedReturnValue();

  if (lVar4 == 0) {

LAB_000c1c34:

    FUN_0002a854(0x4008000000000000,&cf_ellbc,&cf__gSS_MRJ_Y_a,2);

  }

  else {

    auVar14 = FUN_00297fa0(lVar4);

    if (auVar14._0_8_ == 0) goto LAB_000c1c34;

    FUN_0029fbe0(*(undefined8 *)(param_1 + 0x20),auVar14._8_8_,0,1);

    local_118 = &local_120;

    local_120 = 0;

    local_110 = 0x3032000000;

    local_108 = FUN_00030178;

    pcStack_100 = FUN_00030188;

    local_f8 = 0;

    FUN_002a5840(*(undefined8 *)(param_1 + 0x20));

    lVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_retain();

    lVar10 = lVar5;

    if (lVar5 == 0) {

      lVar9 = 0;

    }

    else {

      do {

        uVar6 = _objc_getClass("BaseMsgContentViewController");

        uVar7 = _objc_opt_isKindOfClass(lVar10,uVar6);

        puVar1 = local_118;

        if ((uVar7 & 1) != 0) {

          _objc_retain(lVar10);

          uVar6 = puVar1[5];

          puVar1[5] = lVar10;

          _objc_release(uVar6);

          lVar9 = lVar10;

          break;

        }

        FUN_0029a580(lVar10);

        lVar8 = _objc_retainAutoreleasedReturnValue();

        if (lVar8 == 0) {

          FUN_00299ac0(lVar10);

          lVar9 = _objc_retainAutoreleasedReturnValue();

        }

        else {

          _objc_retain(lVar8);

          lVar9 = lVar8;

        }

        _objc_release(lVar10);

        _objc_release(lVar8);

        lVar10 = lVar9;

      } while (lVar9 != 0);

    }

    if (local_118[5] == 0) {

      FUN_002990e0(lVar5);

      lVar10 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      if (lVar10 != 0) {

        uStack_138 = 0;

        local_140 = 0;

        uStack_128 = 0;

        uStack_130 = 0;

        lStack_158 = 0;

        local_160 = 0;

        uStack_148 = 0;

        local_150 = (long *)0x0;

        FUN_002990e0(lVar5);

        uVar6 = _objc_retainAutoreleasedReturnValue();

        FUN_002a6260();

        uVar11 = _objc_retainAutoreleasedReturnValue();

        _objc_release(uVar6);

        lVar10 = FUN_00293880(uVar11,extraout_x1,&local_160,auStack_f0,0x10);

        if (lVar10 != 0) {

          lVar8 = *local_150;

          do {

            lVar13 = 0;

            do {

              if (*local_150 != lVar8) {

                _objc_enumerationMutation(uVar11);

              }

              uVar12 = *(undefined8 *)(lStack_158 + lVar13 * 8);

              uVar6 = _objc_getClass("BaseMsgContentViewController");

              auVar14 = _objc_opt_isKindOfClass(uVar12,uVar6);

              puVar1 = local_118;

              if ((auVar14._0_8_ & 1) != 0) {

                _objc_retain(uVar12);

                uVar6 = puVar1[5];

                puVar1[5] = uVar12;

                _objc_release(uVar6);

                goto LAB_000c1d84;

              }

              lVar13 = lVar13 + 1;

            } while (lVar10 != lVar13);

            lVar10 = FUN_00293880(uVar11,auVar14._8_8_,&local_160,auStack_f0,0x10);

          } while (lVar10 != 0);

        }

LAB_000c1d84:

        _objc_release(uVar11);

      }

    }

    uVar2 = FUN_000a2d9c(local_118[5],lVar4);

    if (local_118[5] == 0) {

      uVar6 = 0;

    }

    else {

      FUN_00295b80();

      uVar6 = _objc_retainAutoreleasedReturnValue();

    }

    uVar11 = FUN_000a2fe8(local_118[5],uVar6);

    FUN_0002a854(0,&cf_ck_Wlbc,0,0);

    uVar12 = _objc_getClass("_0x016d26c7");

    local_1a0 = PTR___NSConcreteStackBlock_003886f0;

    local_198 = 0xc2000000;

    local_190 = FUN_000c202c;

    puStack_188 = &DAT_0038b6d0;

    _objc_retain(lVar4);

    puStack_178 = &local_120;

    local_180 = lVar4;

    local_170 = uVar11;

    local_168 = uVar2;

    FUN_00293740(uVar12,extraout_x1_00,lVar3,&local_1a0);

    _objc_release(local_180);

    _objc_release(uVar6);

    _objc_release(lVar9);

    _objc_release(lVar5);

    __Block_object_dispose(&local_120,8);

    _objc_release(local_f8);

  }

  _objc_release(lVar4);

LAB_000c1e90:

  _objc_release(lVar3);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_70) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return;

}




