// getAllBubbleFolders @0x3c6b4


/* Function Stack Size: 0x10 bytes */



ID _0x2f19de29::getAllBubbleFolders(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  byte bVar2;

  uint uVar3;

  uint uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  ID IVar10;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 uVar11;

  long lVar12;

  long lVar13;

  undefined1 auVar14 [16];

  undefined1 auVar15 [16];

  byte local_141;

  undefined8 local_140;

  long lStack_138;

  long *local_130;

  undefined8 uStack_128;

  undefined8 local_120;

  undefined8 uStack_118;

  undefined8 uStack_110;

  undefined8 uStack_108;

  undefined8 local_f8;

  undefined1 auStack_f0 [128];

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  FUN_002957e0();

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00294240(&_OBJC_CLASS___NSFileManager);

  auVar14 = _objc_retainAutoreleasedReturnValue();

  uVar6 = auVar14._0_8_;

  local_f8 = 0;

  FUN_00293660(uVar6,auVar14._8_8_,uVar5,&local_f8);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  uVar1 = local_f8;

  _objc_retain();

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar14 = _objc_retainAutoreleasedReturnValue();

  uVar3 = FUN_002924c0(auVar14._0_8_,auVar14._8_8_,&cf_mesMsgMergeCreatorPermission);

  _objc_release(auVar14._0_8_);

  FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

  uVar8 = _objc_retainAutoreleasedReturnValue();

  uStack_118 = 0;

  local_120 = 0;

  uStack_108 = 0;

  uStack_110 = 0;

  lStack_138 = 0;

  local_140 = 0;

  uStack_128 = 0;

  local_130 = (long *)0x0;

  _objc_retain(uVar7);

  auVar14 = FUN_00293880(uVar7,extraout_x1,&local_140,auStack_f0,0x10);

  if (auVar14._0_8_ != 0) {

    lVar13 = *local_130;

    do {

      uVar9 = auVar14._8_8_;

      lVar12 = 0;

      do {

        if (*local_130 != lVar13) {

          _objc_enumerationMutation(uVar7);

          uVar9 = extraout_x1_00;

        }

        uVar11 = *(undefined8 *)(lStack_138 + lVar12 * 8);

        FUN_002a4460(uVar5,uVar9,uVar11);

        auVar15 = _objc_retainAutoreleasedReturnValue();

        uVar9 = auVar15._0_8_;

        bVar2 = FUN_00295180(uVar6,auVar15._8_8_,uVar9,&local_141);

        if (((bVar2 & local_141) == 1) &&

           (auVar15 = FUN_00295f60(uVar11,extraout_x1_01,&cf__), (auVar15._0_8_ & 1) == 0)) {

          FUN_002a4460(uVar9,auVar15._8_8_,&cf_theme_xos);

          auVar15 = _objc_retainAutoreleasedReturnValue();

          uVar4 = FUN_00295160(uVar6,auVar15._8_8_,auVar15._0_8_);

          if (((uVar3 | uVar4) & 1) != 0) {

            FUN_00291240(uVar8,extraout_x1_02,uVar11);

          }

          _objc_release(auVar15._0_8_);

        }

        _objc_release(uVar9);

        lVar12 = lVar12 + 1;

        uVar9 = extraout_x1_03;

      } while (auVar14._0_8_ != lVar12);

      auVar14 = FUN_00293880(uVar7,extraout_x1_03,&local_140,auStack_f0,0x10);

    } while (auVar14._0_8_ != 0);

  }

  _objc_release(uVar7);

  FUN_002a3f40(uVar8,extraout_x1_04,"localizedCaseInsensitiveCompare:");

  uVar9 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar8);

  _objc_release(uVar7);

  _objc_release(uVar1);

  _objc_release(uVar6);

  _objc_release(uVar5);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    IVar10 = _objc_autoreleaseReturnValue(uVar9);

    return IVar10;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




