// FUN_000a9154 @0xa9154


void FUN_000a9154(undefined8 param_1,long param_2)



{

  undefined *puVar1;

  long lVar2;

  long lVar3;

  undefined8 uVar4;

  long lVar5;

  undefined8 uVar6;

  long lVar7;

  long lVar8;

  undefined8 uVar9;

  ulong uVar10;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  long lVar11;

  long lVar12;

  undefined8 uVar13;

  undefined1 auVar14 [16];

  undefined8 local_180;

  long lStack_178;

  long *local_170;

  undefined8 uStack_168;

  undefined8 local_160;

  undefined8 uStack_158;

  undefined8 uStack_150;

  undefined8 uStack_148;

  undefined *local_138;

  undefined8 local_130;

  code *local_128;

  undefined *puStack_120;

  long local_118;

  undefined1 auStack_110 [8];

  undefined1 auStack_108 [8];

  undefined1 auStack_100 [8];

  undefined1 auStack_f8 [8];

  undefined1 auStack_f0 [128];

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  _objc_retain(param_2);

  FUN_000afa24(param_1);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_000afc2c();

  lVar3 = _objc_retainAutoreleasedReturnValue();

  if ((lVar2 != 0) && (lVar3 != 0)) {

    FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_000affc8(lVar2);

    auVar14 = _objc_retainAutoreleasedReturnValue();

    lVar5 = auVar14._0_8_;

    if (lVar5 != 0) {

      FUN_00291240(uVar4,auVar14._8_8_,lVar5);

    }

    FUN_0029c6e0(&_OBJC_CLASS___NSMutableSet);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    uStack_158 = 0;

    local_160 = 0;

    uStack_148 = 0;

    uStack_150 = 0;

    lStack_178 = 0;

    local_180 = 0;

    uStack_168 = 0;

    local_170 = (long *)0x0;

    _objc_retain(lVar3);

    lVar7 = FUN_00293880(lVar3,extraout_x1,&local_180,auStack_f0,0x10);

    if (lVar7 != 0) {

      lVar12 = *local_170;

      do {

        lVar11 = 0;

        do {

          if (*local_170 != lVar12) {

            _objc_enumerationMutation(lVar3);

          }

          uVar13 = *(undefined8 *)(lStack_178 + lVar11 * 8);

          auVar14 = _object_getClass(uVar13);

          uVar9 = auVar14._8_8_;

          lVar8 = auVar14._0_8_;

          if (lVar8 != 0) {

            auVar14 = FUN_00293560(uVar6,uVar9,lVar8);

            uVar9 = auVar14._8_8_;

            if ((auVar14._0_8_ & 1) == 0) {

              FUN_00291240(uVar6,uVar9,lVar8);

              FUN_000affc8(uVar13);

              auVar14 = _objc_retainAutoreleasedReturnValue();

              lVar8 = auVar14._0_8_;

              if (lVar8 != 0) {

                auVar14 = FUN_00293560(uVar4,auVar14._8_8_,lVar8);

                if ((auVar14._0_8_ & 1) == 0) {

                  FUN_00291240(uVar4,auVar14._8_8_,lVar8);

                }

              }

              _objc_release(lVar8);

              uVar9 = extraout_x1_00;

            }

          }

          lVar11 = lVar11 + 1;

        } while (lVar7 != lVar11);

        lVar7 = FUN_00293880(lVar3,uVar9,&local_180,auStack_f0,0x10);

      } while (lVar7 != 0);

    }

    _objc_release(lVar3);

    lVar7 = FUN_00293860(uVar4);

    if (lVar7 != 0) {

      _objc_getAssociatedObject(lVar2,PTR_LOOP_003e64f8);

      uVar9 = _objc_retainAutoreleasedReturnValue();

      _objc_getAssociatedObject(lVar2,PTR_LOOP_003e6500);

      auVar14 = _objc_retainAutoreleasedReturnValue();

      lVar7 = auVar14._0_8_;

      if ((lVar7 == 0) || (uVar10 = FUN_002977e0(uVar9,auVar14._8_8_,uVar4), (uVar10 & 1) == 0)) {

        lVar12 = _objc_opt_new(&_OBJC_CLASS___NSObject);

        _objc_release(lVar7);

        puVar1 = PTR_LOOP_003e64f8;

        uVar13 = FUN_002937a0(uVar4);

        _objc_setAssociatedObject(lVar2,puVar1,uVar13,1);

        _objc_release(uVar13);

        _objc_setAssociatedObject(lVar2,PTR_LOOP_003e6500,lVar12,1);

        lVar7 = lVar12;

      }

      if (param_2 != 0) {

        _objc_retain(lVar2);

        _objc_retain(param_2);

        _objc_retain(lVar7);

        FUN_000afc2c(lVar2);

        lVar12 = _objc_retainAutoreleasedReturnValue();

        if ((lVar7 != 0) && (lVar12 != 0)) {

          _objc_getAssociatedObject(lVar2,PTR_LOOP_003e6528);

          lVar11 = _objc_retainAutoreleasedReturnValue();

          if (lVar11 != lVar7) {

            _objc_setAssociatedObject(lVar2,PTR_LOOP_003e6528,lVar7,1);

            _objc_initWeak(auStack_f8,lVar2);

            _objc_initWeak(auStack_100,param_2);

            _objc_retain(lVar7);

            local_138 = PTR___NSConcreteStackBlock_003886f0;

            local_130 = 0xc2000000;

            local_128 = FUN_000b040c;

            puStack_120 = &DAT_0038b010;

            _objc_copyWeak(auStack_110,auStack_f8);

            local_118 = lVar7;

            _objc_retain(lVar7);

            _objc_copyWeak(auStack_108,auStack_100);

            _dispatch_async(PTR___dispatch_main_q_00388740,&local_138);

            _objc_destroyWeak(auStack_108);

            _objc_release(local_118);

            _objc_release(lVar7);

            _objc_destroyWeak(auStack_110);

            _objc_destroyWeak(auStack_100);

            _objc_destroyWeak(auStack_f8);

          }

          _objc_release(lVar11);

        }

        _objc_release(lVar12);

        _objc_release(lVar7);

        _objc_release(param_2);

        _objc_release(lVar2);

      }

      _objc_release(lVar7);

      _objc_release(uVar9);

    }

    _objc_release(uVar6);

    _objc_release(lVar5);

    _objc_release(uVar4);

  }

  _objc_release(lVar3);

  _objc_release(lVar2);

  _objc_release(param_2);

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_70) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return;

}




