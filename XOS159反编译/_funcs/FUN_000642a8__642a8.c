// FUN_000642a8 @0x642a8


void FUN_000642a8(long param_1,undefined8 param_2)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  ulong uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  long lVar7;

  long lVar8;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  long lVar9;

  long lVar10;

  undefined8 uVar11;

  undefined1 auVar12 [16];

  undefined1 auVar13 [16];

  undefined8 local_140;

  long lStack_138;

  long *local_130;

  undefined8 uStack_128;

  undefined8 local_120;

  undefined8 uStack_118;

  undefined8 uStack_110;

  undefined8 uStack_108;

  long local_f8;

  undefined1 auStack_f0 [128];

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  FUN_0029f0a0(*(undefined8 *)(param_1 + 0x20),param_2,0);

  FUN_00298300(*(undefined8 *)(param_1 + 0x20));

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a42e0();

  _objc_release(uVar2);

  if (((*(long *)(param_1 + 0x28) == 0) && (*(long *)(param_1 + 0x30) != 0)) &&

     (auVar12 = FUN_00297fa0(), auVar12._0_8_ != 0)) {

    local_f8 = 0;

    FUN_00290ae0(&_OBJC_CLASS___NSJSONSerialization,auVar12._8_8_,*(undefined8 *)(param_1 + 0x30),0,

                 &local_f8);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    lVar1 = local_f8;

    _objc_retain(local_f8);

    if (lVar1 == 0) {

      FUN_002a63a0(*(undefined8 *)(param_1 + 0x20));

      uVar3 = _objc_retainAutoreleasedReturnValue();

      FUN_0029b240();

      _objc_release(uVar3);

      FUN_00292a40(*(undefined8 *)(param_1 + 0x20));

      uVar3 = _objc_retainAutoreleasedReturnValue();

      FUN_0029b240();

      _objc_release(uVar3);

      uVar3 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);

      uVar4 = _objc_opt_isKindOfClass(uVar2,uVar3);

      if ((uVar4 & 1) != 0) {

        _objc_retain(uVar2);

        lStack_138 = 0;

        local_140 = 0;

        uStack_128 = 0;

        local_130 = (long *)0x0;

        uStack_118 = 0;

        local_120 = 0;

        uStack_108 = 0;

        uStack_110 = 0;

        FUN_00291600(uVar2);

        auVar12 = _objc_retainAutoreleasedReturnValue();

        uVar3 = auVar12._0_8_;

        auVar12 = FUN_00293880(uVar3,auVar12._8_8_,&local_140,auStack_f0,0x10);

        if (auVar12._0_8_ != 0) {

          lVar10 = *local_130;

          do {

            uVar5 = auVar12._8_8_;

            lVar9 = 0;

            do {

              if (*local_130 != lVar10) {

                _objc_enumerationMutation(uVar3);

                uVar5 = extraout_x1;

              }

              uVar11 = *(undefined8 *)(lStack_138 + lVar9 * 8);

              FUN_00299540(uVar2,uVar5,uVar11);

              uVar5 = _objc_retainAutoreleasedReturnValue();

              uVar6 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);

              uVar4 = _objc_opt_isKindOfClass(uVar5,uVar6);

              if ((uVar4 & 1) == 0) {

                uVar6 = _objc_opt_class(&_OBJC_CLASS___NSArray);

                uVar4 = _objc_opt_isKindOfClass(uVar5,uVar6);

                if ((uVar4 & 1) != 0) {

                  _objc_retain(uVar5);

                  lVar7 = FUN_00293860(uVar5);

                  if (lVar7 != 0) {

                    FUN_002a63a0(*(undefined8 *)(param_1 + 0x20));

                    auVar13 = _objc_retainAutoreleasedReturnValue();

                    FUN_002a0060(auVar13._0_8_,auVar13._8_8_,uVar5,uVar11);

                    _objc_release(auVar13._0_8_);

                    FUN_00292a40(*(undefined8 *)(param_1 + 0x20));

                    auVar13 = _objc_retainAutoreleasedReturnValue();

                    lVar7 = auVar13._0_8_;

                    FUN_00291240(lVar7,auVar13._8_8_,uVar11);

                    goto LAB_000645a4;

                  }

                  goto LAB_000645ac;

                }

              }

              else {

                _objc_retain(uVar5);

                FUN_00299540(uVar5,extraout_x1_00,&cf_list);

                lVar7 = _objc_retainAutoreleasedReturnValue();

                if (lVar7 != 0) {

                  uVar6 = _objc_opt_class(&_OBJC_CLASS___NSArray);

                  uVar4 = _objc_opt_isKindOfClass(lVar7,uVar6);

                  if (((uVar4 & 1) != 0) && (lVar8 = FUN_00293860(lVar7), lVar8 != 0)) {

                    FUN_002a63a0(*(undefined8 *)(param_1 + 0x20));

                    auVar13 = _objc_retainAutoreleasedReturnValue();

                    FUN_002a0060(auVar13._0_8_,auVar13._8_8_,lVar7,uVar11);

                    _objc_release(auVar13._0_8_);

                    FUN_00292a40(*(undefined8 *)(param_1 + 0x20));

                    auVar13 = _objc_retainAutoreleasedReturnValue();

                    FUN_00291240(auVar13._0_8_,auVar13._8_8_,uVar11);

                    _objc_release(auVar13._0_8_);

                  }

                }

LAB_000645a4:

                _objc_release(lVar7);

LAB_000645ac:

                _objc_release(uVar5);

              }

              _objc_release(uVar5);

              lVar9 = lVar9 + 1;

              uVar5 = extraout_x1_01;

            } while (auVar12._0_8_ != lVar9);

            auVar12 = FUN_00293880(uVar3,extraout_x1_01,&local_140,auStack_f0,0x10);

          } while (auVar12._0_8_ != 0);

        }

        _objc_release(uVar3);

        FUN_00292a40(*(undefined8 *)(param_1 + 0x20));

        auVar12 = _objc_retainAutoreleasedReturnValue();

        FUN_002a3ee0(auVar12._0_8_,auVar12._8_8_,&PTR___NSConcreteGlobalBlock_00389fe0);

        _objc_release(auVar12._0_8_);

        _objc_release(uVar2);

      }

      FUN_00292a40(*(undefined8 *)(param_1 + 0x20));

      uVar3 = _objc_retainAutoreleasedReturnValue();

      lVar10 = FUN_00293860();

      _objc_release(uVar3);

      if (lVar10 != 0) {

        FUN_00292a40(*(undefined8 *)(param_1 + 0x20));

        auVar12 = _objc_retainAutoreleasedReturnValue();

        FUN_00299500(auVar12._0_8_,auVar12._8_8_,0);

        auVar13 = _objc_retainAutoreleasedReturnValue();

        FUN_0029d920(*(undefined8 *)(param_1 + 0x20),auVar13._8_8_,auVar13._0_8_);

        _objc_release(auVar13._0_8_);

        _objc_release(auVar12._0_8_);

        FUN_002a2aa0(*(undefined8 *)(param_1 + 0x20));

        FUN_002a4dc0(*(undefined8 *)(param_1 + 0x20));

        uVar3 = _objc_retainAutoreleasedReturnValue();

        FUN_0029b140();

        _objc_release(uVar3);

        FUN_0029bd80(*(undefined8 *)(param_1 + 0x20));

      }

    }

    _objc_release(uVar2);

    _objc_release(lVar1);

  }

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




