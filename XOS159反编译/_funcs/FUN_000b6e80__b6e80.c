// FUN_000b6e80 @0xb6e80


/* WARNING: Removing unreachable block (ram,0x000b7558) */



void FUN_000b6e80(long param_1)



{

  long lVar1;

  undefined *puVar2;

  int iVar3;

  int iVar4;

  uint uVar5;

  undefined4 uVar6;

  undefined8 uVar7;

  ulong uVar8;

  ulong uVar9;

  long lVar10;

  undefined8 uVar11;

  long lVar12;

  dispatch_time_t dVar13;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  long lVar14;

  long lVar15;

  double dVar16;

  undefined1 auVar17 [16];

  undefined *local_1d0;

  undefined8 local_1c8;

  code *local_1c0;

  undefined *puStack_1b8;

  undefined8 local_1b0;

  undefined1 auStack_1a8 [8];

  undefined4 local_1a0;

  undefined8 local_198;

  undefined *local_190;

  undefined8 local_188;

  code *local_180;

  undefined *puStack_178;

  undefined8 local_170;

  undefined1 auStack_168 [8];

  long local_160;

  undefined4 local_158;

  undefined8 local_150;

  long lStack_148;

  long *local_140;

  undefined8 uStack_138;

  undefined8 local_130;

  undefined8 uStack_128;

  undefined8 uStack_120;

  undefined8 uStack_118;

  undefined1 auStack_108 [8];

  undefined1 auStack_100 [128];

  long local_80;

  

  local_80 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  if (param_1 == 0) goto LAB_000b7510;

  uVar7 = _objc_opt_class(&_OBJC_CLASS___UIView);

  uVar8 = _objc_opt_isKindOfClass(param_1,uVar7);

  lVar1 = param_1;

  if ((uVar8 & 1) == 0) {

    lVar1 = 0;

  }

  _objc_retain();

  if ((uVar8 & 1) == 0) {

    iVar3 = 0;

    local_198 = 0;

LAB_000b6ffc:

    FUN_000b7b78(param_1);

    if ((uVar8 & 1) != 0) {

      FUN_002a6520(param_1);

      lVar10 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      if ((lVar10 != 0) && (iVar4 = FUN_000b8330(param_1), iVar4 != 0)) {

        uVar5 = FUN_000b83fc(param_1);

        uVar7 = local_198;

        puVar2 = PTR_LOOP_003e6600;

        if (uVar5 != 0) {

          FUN_00299480(&_OBJC_CLASS___NSNumber,extraout_x1,local_198);

          uVar11 = _objc_retainAutoreleasedReturnValue();

          _objc_setAssociatedObject(param_1,puVar2,uVar11,1);

          _objc_release(uVar11);

          puVar2 = PTR_LOOP_003e65d8;

          if (iVar3 != 0) {

            FUN_00299480(&_OBJC_CLASS___NSNumber,extraout_x1_00,uVar7);

            uVar7 = _objc_retainAutoreleasedReturnValue();

            _objc_setAssociatedObject(param_1,puVar2,uVar7,1);

            _objc_release(uVar7);

            _objc_setAssociatedObject(param_1,PTR_LOOP_003e65e0,0,1);

            puVar2 = PTR_LOOP_003e65f8;

            dVar16 = (double)_CACurrentMediaTime();

            FUN_002993a0(dVar16 + 0.8,&_OBJC_CLASS___NSNumber);

            uVar7 = _objc_retainAutoreleasedReturnValue();

            _objc_setAssociatedObject(param_1,puVar2,uVar7,1);

            _objc_release(uVar7);

            _objc_retain(param_1);

            FUN_002a6520(param_1);

            lVar10 = _objc_retainAutoreleasedReturnValue();

            _objc_release();

            if (lVar10 != 0) {

              _objc_getAssociatedObject(param_1,PTR_LOOP_003e65e8);

              uVar7 = _objc_retainAutoreleasedReturnValue();

              lVar10 = FUN_002a5a20();

              _objc_release(uVar7);

              puVar2 = PTR_LOOP_003e65e8;

              FUN_00299480(&_OBJC_CLASS___NSNumber,extraout_x1_01,lVar10 + 1);

              uVar7 = _objc_retainAutoreleasedReturnValue();

              _objc_setAssociatedObject(param_1,puVar2,uVar7,1);

              _objc_release(uVar7);

              FUN_000839f4(param_1);

              uVar7 = _objc_retainAutoreleasedReturnValue();

              FUN_000856e8();

              lVar12 = _objc_retainAutoreleasedReturnValue();

              if (lVar12 == 0) {

                uVar6 = 0;

              }

              else {

                uVar6 = FUN_00298740(lVar12);

              }

              _objc_release(lVar12);

              _objc_initWeak(auStack_108,param_1);

              uStack_128 = 0;

              local_130 = 0;

              uStack_118 = 0;

              uStack_120 = 0;

              lStack_148 = 0;

              local_150 = 0;

              uStack_138 = 0;

              local_140 = (long *)0x0;

              lVar12 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bded0,extraout_x1_02,

                                    &local_150,auStack_100,0x10);

              puVar2 = PTR___dispatch_main_q_00388740;

              if (lVar12 != 0) {

                lVar14 = *local_140;

                do {

                  lVar15 = 0;

                  do {

                    if (*local_140 != lVar14) {

                      _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_003bded0);

                    }

                    dVar16 = (double)FUN_00294860(*(undefined8 *)(lStack_148 + lVar15 * 8));

                    dVar13 = _dispatch_time(0,(long)(dVar16 * 1000000000.0));

                    local_190 = PTR___NSConcreteStackBlock_003886f0;

                    local_188 = 0xc2000000;

                    local_180 = FUN_000b9e0c;

                    puStack_178 = &DAT_0038b2b0;

                    _objc_copyWeak(auStack_168,auStack_108);

                    local_160 = lVar10 + 1;

                    _objc_retain(uVar7);

                    local_170 = uVar7;

                    local_158 = uVar6;

                    _dispatch_after(dVar13,puVar2,&local_190);

                    _objc_release(local_170);

                    _objc_destroyWeak(auStack_168);

                    lVar15 = lVar15 + 1;

                  } while (lVar12 != lVar15);

                  lVar12 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bded0,extraout_x1_03,

                                        &local_150,auStack_100,0x10);

                } while (lVar12 != 0);

              }

              _objc_destroyWeak(auStack_108);

              _objc_release(uVar7);

            }

            _objc_release(lVar1);

          }

        }

        if ((DAT_003e74dc & 1) == 0) {

          FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

          auVar17 = _objc_retainAutoreleasedReturnValue();

          iVar3 = FUN_002924c0(auVar17._0_8_,auVar17._8_8_,&cf_mesMsgMergeBubbleWrapRefer);

          _objc_release(auVar17._0_8_);

          if (iVar3 != 0) {

            DAT_003e74dc = 1;

            goto LAB_000b73b0;

          }

        }

        else {

LAB_000b73b0:

          iVar3 = FUN_000b7704(lVar1);

          if (iVar3 != 0) {

            FUN_000b8984(lVar1);

          }

        }

        if ((uVar5 & 1) == 0) {

          FUN_000b8e00(lVar1);

          _objc_getAssociatedObject(lVar1,PTR_LOOP_003e65b0);

          uVar7 = _objc_retainAutoreleasedReturnValue();

          uVar9 = FUN_002924e0();

          _objc_release(uVar7);

          if ((uVar9 & 1) == 0) {

            _objc_setAssociatedObject(lVar1,PTR_LOOP_003e65b0,PTR____kCFBooleanTrue_00388320,1);

            _objc_initWeak(auStack_100,lVar1);

            FUN_000839f4(lVar1);

            uVar7 = _objc_retainAutoreleasedReturnValue();

            uVar6 = FUN_000b3dcc();

            local_1d0 = PTR___NSConcreteStackBlock_003886f0;

            local_1c8 = 0xc2000000;

            local_1c0 = FUN_000b9144;

            puStack_1b8 = &DAT_0038b138;

            _objc_copyWeak(auStack_1a8,auStack_100);

            local_1b0 = uVar7;

            local_1a0 = uVar6;

            _objc_retain(uVar7);

            _dispatch_async(PTR___dispatch_main_q_00388740,&local_1d0);

            _objc_release(local_1b0);

            _objc_release(uVar7);

            _objc_destroyWeak(auStack_1a8);

            _objc_destroyWeak(auStack_100);

          }

        }

        else {

          _objc_setAssociatedObject(lVar1,PTR_LOOP_003e65c8,0,1);

        }

      }

    }

    if ((uVar8 & 1) != 0) {

      _objc_setAssociatedObject(param_1,PTR_LOOP_003e65b8,0,1);

    }

  }

  else {

    _objc_getAssociatedObject(param_1,PTR_LOOP_003e65b8);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    uVar9 = FUN_002924e0();

    _objc_release(uVar7);

    if ((uVar9 & 1) == 0) {

      _objc_setAssociatedObject(param_1,PTR_LOOP_003e65b8,PTR____kCFBooleanTrue_00388320,1);

      _objc_getAssociatedObject(param_1,PTR_LOOP_003e65d8);

      lVar10 = _objc_retainAutoreleasedReturnValue();

      if (lVar10 == 0) {

        _objc_getAssociatedObject(param_1,PTR_LOOP_003e6340);

        lVar10 = _objc_retainAutoreleasedReturnValue();

        if (((lVar10 != 0) || (uVar9 = FUN_0008336c(param_1), (uVar9 & 1) != 0)) ||

           (uVar9 = FUN_000b7704(param_1), (uVar9 & 1) != 0)) goto LAB_000b6f98;

        uVar9 = FUN_000b77ac(param_1);

        local_198 = 0;

        if ((uVar9 & 1) != 0) goto LAB_000b6fa4;

        iVar3 = 0;

      }

      else {

LAB_000b6f98:

        _objc_release(lVar10);

LAB_000b6fa4:

        local_198 = 0;

        iVar3 = FUN_000b7918(param_1,&local_198);

      }

      iVar4 = FUN_000b7704(param_1);

      if (iVar4 != 0) {

        _objc_setAssociatedObject(param_1,PTR_LOOP_003e6308,0,1);

        _objc_setAssociatedObject(param_1,PTR_LOOP_003e6328,0,1);

      }

      goto LAB_000b6ffc;

    }

  }

  _objc_release(lVar1);

LAB_000b7510:

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_80) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




