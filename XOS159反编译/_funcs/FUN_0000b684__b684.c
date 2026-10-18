// FUN_0000b684 @0xb684


void FUN_0000b684(void)



{

  undefined *puVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  long lVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  long lVar6;

  long lVar7;

  undefined1 auVar8 [16];

  undefined *local_168;

  undefined8 local_160;

  code *local_158;

  undefined *puStack_150;

  long local_148;

  undefined8 local_140;

  long lStack_138;

  long *local_130;

  undefined8 uStack_128;

  undefined8 local_120;

  undefined8 uStack_118;

  undefined8 uStack_110;

  undefined8 uStack_108;

  undefined1 auStack_f8 [128];

  long local_78;

  

  local_78 = *(long *)PTR____stack_chk_guard_00388738;

  lVar2 = _NSClassFromString(&cf_MMUILongPressImageView);

  if (lVar2 != 0) {

    FUN_002a2e60(&_OBJC_CLASS___UIApplication);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_002a6560();

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar3);

    uStack_118 = 0;

    local_120 = 0;

    uStack_108 = 0;

    uStack_110 = 0;

    lStack_138 = 0;

    local_140 = 0;

    uStack_128 = 0;

    local_130 = (long *)0x0;

    _objc_retain(uVar4);

    lVar5 = FUN_00293880(uVar4,extraout_x1,&local_140,auStack_f8,0x10);

    puVar1 = PTR___NSConcreteStackBlock_003886f0;

    if (lVar5 != 0) {

      lVar6 = *local_130;

      do {

        lVar7 = 0;

        do {

          if (*local_130 != lVar6) {

            _objc_enumerationMutation(uVar4);

          }

          FUN_002a4840(*(undefined8 *)(lStack_138 + lVar7 * 8));

          auVar8 = _objc_retainAutoreleasedReturnValue();

          local_168 = puVar1;

          local_160 = 0xc0000000;

          local_158 = FUN_00090690;

          puStack_150 = &DAT_0038a9b0;

          local_148 = lVar2;

          FUN_00294d80(auVar8._0_8_,auVar8._8_8_,&local_168);

          _objc_release(auVar8._0_8_);

          lVar7 = lVar7 + 1;

        } while (lVar5 != lVar7);

        lVar5 = FUN_00293880(uVar4,extraout_x1_00,&local_140,auStack_f8,0x10);

      } while (lVar5 != 0);

    }

    _objc_release(uVar4);

    FUN_00294200(&_OBJC_CLASS___NSNotificationCenter);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_0029a120(auVar8._0_8_,auVar8._8_8_,&cf_CoverRemoveAllCovers,0);

    _objc_release(auVar8._0_8_);

    _objc_release(uVar4);

  }

  if (*(long *)PTR____stack_chk_guard_00388738 == local_78) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




