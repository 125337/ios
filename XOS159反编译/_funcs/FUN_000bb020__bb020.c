// FUN_000bb020 @0xbb020


void FUN_000bb020(long param_1)



{

  undefined *puVar1;

  undefined4 uVar2;

  long lVar3;

  undefined8 uVar4;

  long lVar5;

  dispatch_time_t dVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  long lVar7;

  long lVar8;

  double dVar9;

  undefined *local_1a8;

  undefined8 local_1a0;

  code *local_198;

  undefined *puStack_190;

  undefined8 local_188;

  undefined1 auStack_180 [8];

  long local_178;

  double local_170;

  undefined4 local_168;

  undefined8 local_160;

  long lStack_158;

  long *local_150;

  undefined8 uStack_148;

  undefined8 local_140;

  undefined8 uStack_138;

  undefined8 uStack_130;

  undefined8 uStack_128;

  undefined1 auStack_118 [8];

  undefined1 auStack_110 [128];

  long local_90;

  

  local_90 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  if (param_1 != 0) {

    FUN_002a6520(param_1);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar3 != 0) {

      _objc_getAssociatedObject(param_1,PTR_LOOP_003e65f0);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      lVar3 = FUN_002a5a20();

      _objc_release(uVar4);

      puVar1 = PTR_LOOP_003e65f0;

      FUN_00299480(&_OBJC_CLASS___NSNumber,extraout_x1,lVar3 + 1);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_setAssociatedObject(param_1,puVar1,uVar4,1);

      _objc_release(uVar4);

      FUN_000839f4(param_1);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      FUN_000856e8();

      lVar5 = _objc_retainAutoreleasedReturnValue();

      if (lVar5 == 0) {

        uVar2 = 0;

      }

      else {

        uVar2 = FUN_00298740(lVar5);

      }

      _objc_release(lVar5);

      _objc_initWeak(auStack_118,param_1);

      uStack_138 = 0;

      local_140 = 0;

      uStack_128 = 0;

      uStack_130 = 0;

      lStack_158 = 0;

      local_160 = 0;

      uStack_148 = 0;

      local_150 = (long *)0x0;

      lVar5 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bdee8,extraout_x1_00,&local_160,

                           auStack_110,0x10);

      puVar1 = PTR___dispatch_main_q_00388740;

      if (lVar5 != 0) {

        lVar8 = *local_150;

        do {

          lVar7 = 0;

          do {

            if (*local_150 != lVar8) {

              _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_003bdee8);

            }

            dVar9 = (double)FUN_00294860(*(undefined8 *)(lStack_158 + lVar7 * 8));

            dVar6 = _dispatch_time(0,(long)(dVar9 * 1000000000.0));

            local_1a8 = PTR___NSConcreteStackBlock_003886f0;

            local_1a0 = 0xc2000000;

            local_198 = FUN_000bb3c0;

            puStack_190 = &DAT_0038b310;

            _objc_copyWeak(auStack_180,auStack_118);

            local_178 = lVar3 + 1;

            _objc_retain(uVar4);

            local_188 = uVar4;

            local_170 = dVar9;

            local_168 = uVar2;

            _dispatch_after(dVar6,puVar1,&local_1a8);

            _objc_release(local_188);

            _objc_destroyWeak(auStack_180);

            lVar7 = lVar7 + 1;

          } while (lVar5 != lVar7);

          lVar5 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bdee8,extraout_x1_01,&local_160

                               ,auStack_110,0x10);

        } while (lVar5 != 0);

      }

      _objc_destroyWeak(auStack_118);

      _objc_release(uVar4);

    }

  }

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_90) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




