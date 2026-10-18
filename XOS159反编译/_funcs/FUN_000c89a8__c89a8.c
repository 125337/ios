// FUN_000c89a8 @0xc89a8


void FUN_000c89a8(long param_1,ulong param_2)



{

  bool bVar1;

  int iVar2;

  undefined8 uVar3;

  ulong uVar4;

  long lVar5;

  long lVar6;

  long lVar7;

  undefined8 uVar8;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  long lVar9;

  undefined *puVar10;

  long lVar11;

  long lVar12;

  undefined1 auVar13 [16];

  undefined8 local_2c0;

  long lStack_2b8;

  long *local_2b0;

  undefined8 uStack_2a8;

  undefined8 local_2a0;

  undefined8 uStack_298;

  undefined8 uStack_290;

  undefined8 uStack_288;

  undefined8 local_280;

  long lStack_278;

  long *local_270;

  undefined8 uStack_268;

  undefined8 local_260;

  undefined8 uStack_258;

  undefined8 uStack_250;

  undefined8 uStack_248;

  undefined8 local_240;

  long lStack_238;

  long *local_230;

  undefined8 uStack_228;

  undefined8 local_220;

  undefined8 uStack_218;

  undefined8 uStack_210;

  undefined8 uStack_208;

  undefined1 auStack_200 [128];

  undefined1 auStack_180 [128];

  undefined1 auStack_100 [128];

  long local_80;

  

  local_80 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  if (param_1 == 0) goto LAB_000c916c;

  _objc_getAssociatedObject(param_1,PTR_LOOP_003e66c0);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar4 = FUN_002924e0();

  _objc_release(uVar3);

  if ((uVar4 & 1) != 0) goto LAB_000c916c;

  _objc_setAssociatedObject(param_1,PTR_LOOP_003e66c0,PTR____kCFBooleanTrue_00388320,1);

  if ((param_2 & 1) == 0) {

    _objc_getAssociatedObject(param_1,PTR_LOOP_003e66b0);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar5 != 0) {

      uStack_218 = 0;

      local_220 = 0;

      uStack_208 = 0;

      uStack_210 = 0;

      lStack_238 = 0;

      local_240 = 0;

      uStack_228 = 0;

      local_230 = (long *)0x0;

      FUN_002a4840(param_1);

      auVar13 = _objc_retainAutoreleasedReturnValue();

      uVar3 = auVar13._0_8_;

      lVar5 = FUN_00293880(uVar3,auVar13._8_8_,&local_240,auStack_100,0x10);

      if (lVar5 != 0) {

        lVar9 = *local_230;

        do {

          lVar11 = 0;

          do {

            if (*local_230 != lVar9) {

              _objc_enumerationMutation(uVar3);

            }

            lVar12 = *(long *)(lStack_238 + lVar11 * 8);

            _objc_retain(lVar12);

            if (lVar12 != 0) {

              _objc_getAssociatedObject(lVar12,PTR_LOOP_003e66b8);

              lVar6 = _objc_retainAutoreleasedReturnValue();

              _objc_getAssociatedObject(lVar12,PTR_LOOP_003e6698);

              lVar7 = _objc_retainAutoreleasedReturnValue();

              _objc_setAssociatedObject(lVar12,PTR_LOOP_003e6698,0,1);

              _objc_setAssociatedObject(lVar12,PTR_LOOP_003e66a0,0,0);

              _objc_setAssociatedObject(lVar12,PTR_LOOP_003e66b8,0,1);

              if (lVar6 != 0) {

                FUN_00294860(lVar6);

                FUN_0029cb60(lVar12);

              }

              if (lVar7 != 0) {

                auVar13 = FUN_002924e0(lVar7);

                FUN_0029e8a0(lVar12,auVar13._8_8_,auVar13._0_8_);

              }

              _objc_release(lVar7);

              _objc_release(lVar6);

            }

            _objc_release(lVar12);

            lVar11 = lVar11 + 1;

          } while (lVar5 != lVar11);

          lVar5 = FUN_00293880(uVar3,extraout_x1_00,&local_240,auStack_100,0x10);

        } while (lVar5 != 0);

      }

      _objc_release(uVar3);

      _objc_retain(param_1);

      _objc_getAssociatedObject(param_1,PTR_LOOP_003e66c8);

      lVar5 = _objc_retainAutoreleasedReturnValue();

      if (lVar5 != 0) {

        FUN_002992c0(&_OBJC_CLASS___NSNull);

        auVar13 = _objc_retainAutoreleasedReturnValue();

        lVar9 = 0;

        if (lVar5 != auVar13._0_8_) {

          lVar9 = lVar5;

        }

        FUN_0029cf60(param_1,auVar13._8_8_,lVar9);

        _objc_release(auVar13._0_8_);

      }

      _objc_getAssociatedObject(param_1,PTR_LOOP_003e66d0);

      lVar9 = _objc_retainAutoreleasedReturnValue();

      if (lVar9 != 0) {

        FUN_002992c0(&_OBJC_CLASS___NSNull);

        lVar12 = _objc_retainAutoreleasedReturnValue();

        lVar11 = 0;

        if (lVar9 != lVar12) {

          lVar11 = lVar9;

        }

        _objc_retain(lVar11);

        _objc_release(lVar12);

        if (lVar9 == lVar12) {

          uVar3 = 0;

        }

        else {

          _objc_retainAutorelease(lVar9);

          uVar3 = FUN_00290a20(lVar9);

        }

        FUN_00297e40(param_1);

        auVar13 = _objc_retainAutoreleasedReturnValue();

        FUN_0029d0a0(auVar13._0_8_,auVar13._8_8_,uVar3);

        _objc_release(auVar13._0_8_);

        _objc_release(lVar11);

      }

      _objc_getAssociatedObject(param_1,PTR_LOOP_003e66d8);

      lVar11 = _objc_retainAutoreleasedReturnValue();

      if (lVar11 != 0) {

        uVar8 = FUN_00295480(lVar11);

        FUN_00297e40(param_1);

        uVar3 = _objc_retainAutoreleasedReturnValue();

        FUN_002a14a0(uVar8);

        _objc_release(uVar3);

      }

      _objc_release(lVar11);

      _objc_release(lVar9);

      _objc_release(lVar5);

      _objc_release(param_1);

      _objc_setAssociatedObject(param_1,PTR_LOOP_003e66b0,0,1);

    }

  }

  else {

    _objc_setAssociatedObject(param_1,PTR_LOOP_003e66b0,PTR____kCFBooleanTrue_00388320,1);

    if ((DAT_003e7d17 == '\x01') && (iVar2 = FUN_000c849c(param_1), iVar2 != 0)) {

      uStack_258 = 0;

      local_260 = 0;

      uStack_248 = 0;

      uStack_250 = 0;

      lStack_278 = 0;

      local_280 = 0;

      uStack_268 = 0;

      local_270 = (long *)0x0;

      FUN_002a4840(param_1);

      auVar13 = _objc_retainAutoreleasedReturnValue();

      uVar3 = auVar13._0_8_;

      lVar5 = FUN_00293880(uVar3,auVar13._8_8_,&local_280,auStack_180,0x10);

      if (lVar5 != 0) {

        lVar9 = *local_270;

        do {

          lVar11 = 0;

          do {

            if (*local_270 != lVar9) {

              _objc_enumerationMutation(uVar3);

            }

            FUN_000c8770(*(undefined8 *)(lStack_278 + lVar11 * 8));

            lVar11 = lVar11 + 1;

          } while (lVar5 != lVar11);

          lVar5 = FUN_00293880(uVar3,extraout_x1,&local_280,auStack_180,0x10);

        } while (lVar5 != 0);

      }

      _objc_release(uVar3);

    }

    _objc_retain(param_1);

    _objc_getAssociatedObject(param_1,PTR_LOOP_003e66c8);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar5 == 0) {

      FUN_00292080(param_1);

      lVar9 = _objc_retainAutoreleasedReturnValue();

      puVar10 = PTR_LOOP_003e66c8;

      lVar5 = lVar9;

      if (lVar9 == 0) {

        FUN_002992c0(&_OBJC_CLASS___NSNull);

        lVar5 = _objc_retainAutoreleasedReturnValue();

      }

      _objc_setAssociatedObject(param_1,puVar10,lVar5,1);

      if (lVar9 == 0) {

        _objc_release(lVar5);

      }

      _objc_release(lVar9);

    }

    _objc_getAssociatedObject(param_1,PTR_LOOP_003e66d0);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar5 == 0) {

      FUN_00297e40(param_1);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      lVar5 = FUN_00292500();

      _objc_release(uVar3);

      if (lVar5 == 0) {

LAB_000c8f4c:

        puVar10 = PTR_LOOP_003e66d0;

        FUN_002992c0(&_OBJC_CLASS___NSNull);

        lVar9 = _objc_retainAutoreleasedReturnValue();

        lVar5 = 0;

        bVar1 = true;

      }

      else {

        FUN_00297e40(param_1);

        uVar3 = _objc_retainAutoreleasedReturnValue();

        auVar13 = FUN_00292500();

        FUN_00292fe0(&_OBJC_CLASS___UIColor,auVar13._8_8_,auVar13._0_8_);

        lVar5 = _objc_retainAutoreleasedReturnValue();

        _objc_release(uVar3);

        if (lVar5 == 0) goto LAB_000c8f4c;

        bVar1 = false;

        puVar10 = PTR_LOOP_003e66d0;

        lVar9 = lVar5;

      }

      _objc_setAssociatedObject(param_1,puVar10,lVar9,1);

      if (bVar1) {

        _objc_release(lVar9);

      }

      _objc_release(lVar5);

    }

    _objc_getAssociatedObject(param_1,PTR_LOOP_003e66d8);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    puVar10 = PTR_LOOP_003e66d8;

    if (lVar5 == 0) {

      FUN_00297e40(param_1);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      FUN_002a2e00();

      FUN_002993c0(&_OBJC_CLASS___NSNumber);

      uVar8 = _objc_retainAutoreleasedReturnValue();

      _objc_setAssociatedObject(param_1,puVar10,uVar8,1);

      _objc_release(uVar8);

      _objc_release(uVar3);

    }

    _objc_release(param_1);

    FUN_00292dc0(&_OBJC_CLASS___UIColor);

    auVar13 = _objc_retainAutoreleasedReturnValue();

    FUN_0029cf60(param_1,auVar13._8_8_,auVar13._0_8_);

    _objc_release(auVar13._0_8_);

    FUN_00292dc0(&_OBJC_CLASS___UIColor);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_retainAutorelease();

    uVar8 = FUN_00290a20(uVar3);

    FUN_00297e40(param_1);

    auVar13 = _objc_retainAutoreleasedReturnValue();

    FUN_0029d0a0(auVar13._0_8_,auVar13._8_8_,uVar8);

    _objc_release(auVar13._0_8_);

    _objc_release(uVar3);

    FUN_00297e40(param_1);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_002a14a0(0);

    _objc_release(uVar3);

    uStack_298 = 0;

    local_2a0 = 0;

    uStack_288 = 0;

    uStack_290 = 0;

    lStack_2b8 = 0;

    local_2c0 = 0;

    uStack_2a8 = 0;

    local_2b0 = (long *)0x0;

    FUN_002a4840(param_1);

    auVar13 = _objc_retainAutoreleasedReturnValue();

    uVar3 = auVar13._0_8_;

    lVar5 = FUN_00293880(uVar3,auVar13._8_8_,&local_2c0,auStack_200,0x10);

    if (lVar5 != 0) {

      lVar9 = *local_2b0;

      do {

        lVar11 = 0;

        do {

          if (*local_2b0 != lVar9) {

            _objc_enumerationMutation(uVar3);

          }

          FUN_000c88c0(*(undefined8 *)(lStack_2b8 + lVar11 * 8));

          lVar11 = lVar11 + 1;

        } while (lVar5 != lVar11);

        lVar5 = FUN_00293880(uVar3,extraout_x1_01,&local_2c0,auStack_200,0x10);

      } while (lVar5 != 0);

    }

    _objc_release(uVar3);

  }

  _objc_setAssociatedObject(param_1,PTR_LOOP_003e66c0,0,1);

LAB_000c916c:

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_80) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return;

}




