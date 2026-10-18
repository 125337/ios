// FUN_00070248 @0x70248


void FUN_00070248(long param_1,undefined8 param_2)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  ulong uVar4;

  long lVar5;

  undefined8 uVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  long lVar7;

  long lVar8;

  undefined1 auVar9 [16];

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

  if ((*(long *)(param_1 + 0x20) != 0) || (*(long *)(param_1 + 0x28) == 0)) goto LAB_000705f0;

  local_f8 = 0;

  FUN_00290ae0(&_OBJC_CLASS___NSJSONSerialization,param_2,*(long *)(param_1 + 0x28),0,&local_f8);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  lVar1 = local_f8;

  _objc_retain(local_f8);

  if (lVar1 == 0) {

    uVar3 = _objc_opt_class(&_OBJC_CLASS___NSArray);

    uVar4 = _objc_opt_isKindOfClass(uVar2,uVar3);

    if ((uVar4 & 1) == 0) {

      uVar3 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);

      auVar9 = _objc_opt_isKindOfClass(uVar2,uVar3);

      if ((auVar9._0_8_ & 1) != 0) {

        FUN_00299540(uVar2,auVar9._8_8_,&cf_list);

        auVar9 = _objc_retainAutoreleasedReturnValue();

        lVar5 = auVar9._0_8_;

        if (lVar5 == 0) {

          FUN_00299540(uVar2,auVar9._8_8_,&cf_data);

          auVar9 = _objc_retainAutoreleasedReturnValue();

          lVar5 = auVar9._0_8_;

          if (lVar5 == 0) {

            FUN_00299540(uVar2,auVar9._8_8_,&cf_sounds);

            lVar5 = _objc_retainAutoreleasedReturnValue();

            if (lVar5 == 0) goto LAB_000703e4;

          }

        }

        FUN_002923c0(*(undefined8 *)(param_1 + 0x30));

        uVar3 = _objc_retainAutoreleasedReturnValue();

        FUN_0029b240();

        _objc_release(uVar3);

        FUN_002923c0(*(undefined8 *)(param_1 + 0x30));

        auVar9 = _objc_retainAutoreleasedReturnValue();

        FUN_00291260(auVar9._0_8_,auVar9._8_8_,lVar5);

        _objc_release(auVar9._0_8_);

        goto LAB_000703dc;

      }

    }

    else {

      FUN_002923c0(*(undefined8 *)(param_1 + 0x30));

      uVar3 = _objc_retainAutoreleasedReturnValue();

      FUN_0029b240();

      _objc_release(uVar3);

      FUN_002923c0(*(undefined8 *)(param_1 + 0x30));

      auVar9 = _objc_retainAutoreleasedReturnValue();

      lVar5 = auVar9._0_8_;

      FUN_00291260(lVar5,auVar9._8_8_,uVar2);

LAB_000703dc:

      _objc_release(lVar5);

    }

LAB_000703e4:

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_002a45e0(auVar9._0_8_,auVar9._8_8_,&cf_ttsSelectedBgSound);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar9._0_8_);

    auVar9 = FUN_00297fa0(uVar3);

    if ((auVar9._0_8_ != 0) &&

       (uVar4 = FUN_00297820(uVar3,auVar9._8_8_,&cf___xzy_tts_random_bg_sound__), (uVar4 & 1) == 0))

    {

      uStack_118 = 0;

      local_120 = 0;

      uStack_108 = 0;

      uStack_110 = 0;

      lStack_138 = 0;

      local_140 = 0;

      uStack_128 = 0;

      local_130 = (long *)0x0;

      FUN_002923c0(*(undefined8 *)(param_1 + 0x30));

      auVar9 = _objc_retainAutoreleasedReturnValue();

      uVar6 = auVar9._0_8_;

      lVar5 = FUN_00293880(uVar6,auVar9._8_8_,&local_140,auStack_f0,0x10);

      if (lVar5 != 0) {

        lVar8 = *local_130;

        do {

          lVar7 = 0;

          do {

            if (*local_130 != lVar8) {

              _objc_enumerationMutation(uVar6);

            }

            FUN_00070748(*(undefined8 *)(lStack_138 + lVar7 * 8));

            auVar9 = _objc_retainAutoreleasedReturnValue();

            uVar4 = FUN_00297820(auVar9._0_8_,auVar9._8_8_,uVar3);

            _objc_release(auVar9._0_8_);

            if ((uVar4 & 1) != 0) {

              _objc_release(uVar6);

              goto LAB_0007053c;

            }

            lVar7 = lVar7 + 1;

          } while (lVar5 != lVar7);

          lVar5 = FUN_00293880(uVar6,extraout_x1,&local_140,auStack_f0,0x10);

        } while (lVar5 != 0);

      }

      _objc_release(uVar6);

      FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

      auVar9 = _objc_retainAutoreleasedReturnValue();

      FUN_0029b4a0(auVar9._0_8_,auVar9._8_8_,&cf_ttsSelectedBgSound);

      _objc_release(auVar9._0_8_);

      FUN_002a1140(*(undefined8 *)(param_1 + 0x30),extraout_x1_00,0);

    }

LAB_0007053c:

    FUN_002923c0(*(undefined8 *)(param_1 + 0x30));

    uVar6 = _objc_retainAutoreleasedReturnValue();

    lVar5 = FUN_00293860();

    _objc_release(uVar6);

    if (lVar5 != 0) {

      FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      FUN_002923c0(*(undefined8 *)(param_1 + 0x30));

      auVar9 = _objc_retainAutoreleasedReturnValue();

      FUN_002a0060(uVar6,auVar9._8_8_,auVar9._0_8_,&cf_ttsBgSoundCatalog);

      _objc_release(auVar9._0_8_);

      _objc_release(uVar6);

    }

    FUN_002a4dc0(*(undefined8 *)(param_1 + 0x30));

    uVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b140();

    _objc_release(uVar6);

    _objc_release(uVar3);

  }

  _objc_release(uVar2);

  _objc_release(lVar1);

LAB_000705f0:

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




