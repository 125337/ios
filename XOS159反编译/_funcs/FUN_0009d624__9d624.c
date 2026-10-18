// FUN_0009d624 @0x9d624


void FUN_0009d624(undefined8 param_1,undefined8 param_2)



{

  uint uVar1;

  int iVar2;

  uint uVar3;

  undefined8 uVar4;

  long lVar5;

  long lVar6;

  long lVar7;

  undefined8 uVar8;

  undefined8 extraout_x1;

  long lVar9;

  long lVar10;

  undefined8 uVar11;

  long lVar12;

  undefined1 auVar13 [16];

  undefined *local_188;

  undefined8 local_180;

  code *local_178;

  undefined *puStack_170;

  undefined1 auStack_168 [8];

  undefined8 local_160;

  long lStack_158;

  long *local_150;

  undefined8 uStack_148;

  undefined8 local_140;

  undefined8 uStack_138;

  undefined8 uStack_130;

  undefined8 uStack_128;

  undefined *local_120;

  undefined8 local_118;

  code *local_110;

  undefined *puStack_108;

  undefined1 auStack_100 [8];

  undefined1 auStack_f8 [8];

  undefined1 auStack_f0 [128];

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  FUN_002a6280();

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_000a9154(uVar4,param_1);

  _objc_release(uVar4);

  (*DAT_003e78f8)(param_1,param_2);

  FUN_002a6280(param_1);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_000a9154(uVar4,param_1);

  _objc_release(uVar4);

  iVar2 = FUN_000a89d8();

  if ((iVar2 != 0) && ((DAT_003e7ba0 & 1) == 0)) {

    FUN_002a6280(param_1);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    if (lVar5 != 0) {

      _objc_retain(lVar5);

      if (DAT_003e76c0 == 0) {

        DAT_003e76c0 = _objc_getClass("TextMessageSubViewModel");

      }

      lVar9 = DAT_003e76c0;

      _objc_retain(DAT_003e76c0);

      _objc_autorelease(lVar9);

      auVar13 = _objc_opt_isKindOfClass(lVar5,lVar9);

      lVar9 = lVar5;

      if ((auVar13._0_8_ & 1) != 0) {

        FUN_002a6080(lVar5,auVar13._8_8_,&cf_parentModel);

        lVar6 = _objc_retainAutoreleasedReturnValue();

        if (lVar6 != 0) {

          _objc_retain(lVar6);

          _objc_release(lVar5);

          lVar9 = lVar6;

        }

        _objc_release(lVar6);

      }

      lVar6 = _objc_loadWeakRetained(&DAT_003e7498);

      _objc_release();

      if (lVar6 == lVar9) {

        FUN_002a6080(param_1,extraout_x1,&cf_m_translateView);

        lVar6 = _objc_retainAutoreleasedReturnValue();

        _objc_getAssociatedObject(lVar9,PTR_LOOP_003e65a0);

        uVar4 = _objc_retainAutoreleasedReturnValue();

        uVar3 = FUN_002924e0();

        _objc_release(uVar4);

        uVar1 = 0;

        if (lVar6 == 0) {

          uVar1 = uVar3;

        }

        if (uVar1 == 1) {

          _objc_setAssociatedObject

                    (lVar9,PTR_LOOP_003e6640,&PTR__OBJC_CLASS___NSConstantIntegerNumber_003bf890,1);

          _objc_setAssociatedObject(lVar9,PTR_LOOP_003e65a0,PTR____kCFBooleanFalse_00388318,1);

          FUN_000acd04(lVar9,1);

          FUN_000acd04(lVar5,1);

          _objc_storeWeak(&DAT_003e7490,0);

          _objc_storeWeak(&DAT_003e7498,0);

          _objc_initWeak(auStack_f8,param_1);

          local_120 = PTR___NSConcreteStackBlock_003886f0;

          local_118 = 0xc2000000;

          local_110 = FUN_000bc940;

          puStack_108 = &DAT_0038a150;

          _objc_copyWeak(auStack_100,auStack_f8);

          _dispatch_async(PTR___dispatch_main_q_00388740,&local_120);

          _objc_destroyWeak(auStack_100);

          _objc_destroyWeak(auStack_f8);

        }

        else if (lVar6 != 0) {

          uStack_138 = 0;

          local_140 = 0;

          uStack_128 = 0;

          uStack_130 = 0;

          lStack_158 = 0;

          local_160 = 0;

          uStack_148 = 0;

          local_150 = (long *)0x0;

          FUN_002a4840(lVar6);

          auVar13 = _objc_retainAutoreleasedReturnValue();

          uVar4 = auVar13._0_8_;

          lVar7 = FUN_00293880(uVar4,auVar13._8_8_,&local_160,auStack_f0,0x10);

          if (lVar7 != 0) {

            lVar12 = *local_150;

            do {

              lVar10 = 0;

              do {

                if (*local_150 != lVar12) {

                  _objc_enumerationMutation(uVar4);

                }

                uVar11 = *(undefined8 *)(lStack_158 + lVar10 * 8);

                uVar8 = _objc_getClass("MMUIActivityIndicatorView");

                auVar13 = _objc_opt_isKindOfClass(uVar11,uVar8);

                if ((auVar13._0_8_ & 1) != 0) {

                  _objc_release(uVar4);

                  goto LAB_0009da48;

                }

                lVar10 = lVar10 + 1;

              } while (lVar7 != lVar10);

              lVar7 = FUN_00293880(uVar4,auVar13._8_8_,&local_160,auStack_f0,0x10);

            } while (lVar7 != 0);

          }

          _objc_release(uVar4);

          if ((uVar3 & 1) == 0) {

            _objc_setAssociatedObject(lVar9,PTR_LOOP_003e65a0,PTR____kCFBooleanTrue_00388320,1);

            FUN_000acd04(lVar9,1);

            FUN_000acd04(lVar5,1);

            _objc_storeWeak(&DAT_003e7490,0);

            _objc_storeWeak(&DAT_003e7498,0);

            _objc_initWeak(auStack_f8,param_1);

            local_188 = PTR___NSConcreteStackBlock_003886f0;

            local_180 = 0xc2000000;

            local_178 = FUN_000bc980;

            puStack_170 = &DAT_0038a150;

            _objc_copyWeak(auStack_168,auStack_f8);

            _dispatch_async(PTR___dispatch_main_q_00388740,&local_188);

            _objc_destroyWeak(auStack_168);

            _objc_destroyWeak(auStack_f8);

          }

        }

LAB_0009da48:

        _objc_release(lVar6);

      }

      _objc_release(lVar9);

    }

    _objc_release(lVar5);

  }

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




