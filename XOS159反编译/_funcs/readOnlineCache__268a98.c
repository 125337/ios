// readOnlineCache @0x268a98


/* Function Stack Size: 0x10 bytes */



ID XZYDockPlayerEngine::readOnlineCache(ID param_1,SEL param_2)



{

  cfstringStruct *pcVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 uVar4;

  cfstringStruct *pcVar5;

  long lVar6;

  ID IVar7;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  long lVar8;

  long lVar9;

  undefined8 uVar10;

  undefined1 auVar11 [16];

  undefined *local_138;

  undefined8 local_130;

  long lStack_128;

  long *local_120;

  undefined8 uStack_118;

  undefined8 local_110;

  undefined8 uStack_108;

  undefined8 uStack_100;

  undefined8 uStack_f8;

  undefined1 auStack_f0 [128];

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_00291d40(auVar11._0_8_,auVar11._8_8_,&cf_xzy_dock_player_cachedSongs);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar11._0_8_);

  lVar3 = FUN_00293860(uVar2);

  if (lVar3 == 0) {

    local_138 = PTR____NSArray0__struct_00388308;

  }

  else {

    FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

    local_138 = (undefined *)_objc_retainAutoreleasedReturnValue();

    lStack_128 = 0;

    local_130 = 0;

    uStack_118 = 0;

    local_120 = (long *)0x0;

    uStack_108 = 0;

    local_110 = 0;

    uStack_f8 = 0;

    uStack_100 = 0;

    _objc_retain(uVar2);

    lVar3 = FUN_00293880(uVar2,extraout_x1,&local_130,auStack_f0,0x10);

    if (lVar3 != 0) {

      lVar8 = *local_120;

      do {

        lVar9 = 0;

        do {

          if (*local_120 != lVar8) {

            _objc_enumerationMutation(uVar2);

          }

          uVar10 = *(undefined8 *)(lStack_128 + lVar9 * 8);

          uVar4 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);

          auVar11 = _objc_opt_isKindOfClass(uVar10,uVar4);

          uVar4 = auVar11._8_8_;

          if ((auVar11._0_8_ & 1) != 0) {

            auVar11 = _objc_alloc_init(&objc::class_t::XZYDockPlayerSong);

            uVar4 = auVar11._0_8_;

            FUN_00299540(uVar10,auVar11._8_8_,&cf_i);

            auVar11 = _objc_retainAutoreleasedReturnValue();

            pcVar5 = auVar11._0_8_;

            pcVar1 = &::cf___;

            if (pcVar5 != (cfstringStruct *)0x0) {

              pcVar1 = pcVar5;

            }

            FUN_002a16e0(uVar4,auVar11._8_8_,pcVar1);

            _objc_release(pcVar5);

            FUN_00299540(uVar10,extraout_x1_00,&cf_t);

            auVar11 = _objc_retainAutoreleasedReturnValue();

            FUN_002a1f60(uVar4,auVar11._8_8_,auVar11._0_8_);

            _objc_release(auVar11._0_8_);

            FUN_00299540(uVar10,extraout_x1_01,&cf_a);

            auVar11 = _objc_retainAutoreleasedReturnValue();

            pcVar5 = auVar11._0_8_;

            pcVar1 = &cf__gwLkKb;

            if (pcVar5 != (cfstringStruct *)0x0) {

              pcVar1 = pcVar5;

            }

            FUN_0029cd20(uVar4,auVar11._8_8_,pcVar1);

            _objc_release(pcVar5);

            FUN_00299540(uVar10,extraout_x1_02,&cf_c);

            auVar11 = _objc_retainAutoreleasedReturnValue();

            FUN_0029d8c0(uVar4,auVar11._8_8_,auVar11._0_8_);

            _objc_release(auVar11._0_8_);

            FUN_00299540(uVar10,extraout_x1_03,&cf_h);

            auVar11 = _objc_retainAutoreleasedReturnValue();

            FUN_0029ea00(uVar4,auVar11._8_8_,auVar11._0_8_);

            _objc_release(auVar11._0_8_);

            FUN_002a5360(uVar4);

            uVar10 = _objc_retainAutoreleasedReturnValue();

            lVar6 = FUN_00297fa0();

            _objc_release(uVar10);

            if (lVar6 != 0) {

              FUN_00291240(local_138,extraout_x1_04,uVar4);

            }

            _objc_release(uVar4);

            uVar4 = extraout_x1_05;

          }

          lVar9 = lVar9 + 1;

        } while (lVar3 != lVar9);

        lVar3 = FUN_00293880(uVar2,uVar4,&local_130,auStack_f0,0x10);

      } while (lVar3 != 0);

    }

    _objc_release(uVar2);

  }

  _objc_release(uVar2);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    IVar7 = _objc_autoreleaseReturnValue(local_138);

    return IVar7;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




