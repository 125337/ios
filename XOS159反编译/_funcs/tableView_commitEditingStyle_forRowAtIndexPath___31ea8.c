// tableView:commitEditingStyle:forRowAtIndexPath: @0x31ea8


/* Function Stack Size: 0x28 bytes */



void _0x2f19de29::tableView_commitEditingStyle_forRowAtIndexPath_

               (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5)



{

  undefined **ppuVar1;

  int iVar2;

  int iVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  long lVar10;

  ulong uVar11;

  undefined **ppuVar12;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  undefined8 extraout_x1_08;

  undefined8 extraout_x1_09;

  undefined8 extraout_x1_10;

  undefined1 auVar13 [16];

  undefined1 auVar14 [16];

  undefined *local_c0;

  undefined8 local_b8;

  code *local_b0;

  undefined *puStack_a8;

  undefined8 local_a0;

  ID IStack_98;

  ID local_90;

  undefined8 local_88;

  undefined8 local_80;

  ID local_78;

  ID local_70;

  long local_68;

  

  local_68 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_3);

  _objc_retain(param_5);

  if (param_4 != 1) goto LAB_00032618;

  lVar4 = FUN_002a4e60(param_3);

  if ((lVar4 == 0x3e9) && (lVar4 = FUN_0029c020(param_5), lVar4 == 5)) {

    FUN_00293960(param_1);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    auVar13 = FUN_0029bae0(param_5);

    FUN_00299500(uVar5,auVar13._8_8_,auVar13._0_8_);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar5);

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar13 = _objc_retainAutoreleasedReturnValue();

    uVar7 = auVar13._0_8_;

    FUN_002a45e0(uVar7,auVar13._8_8_,&cf_selectedCoverImageNameLight);

    auVar13 = _objc_retainAutoreleasedReturnValue();

    iVar2 = FUN_00297820(uVar6,auVar13._8_8_,auVar13._0_8_);

    _objc_release(auVar13._0_8_);

    uVar5 = extraout_x1;

    if (iVar2 != 0) {

      FUN_0029b4a0(uVar7,extraout_x1,&cf_selectedCoverImageNameLight);

      uVar5 = extraout_x1_00;

    }

    FUN_002a45e0(uVar7,uVar5,&cf_selectedCoverImageNameDark);

    auVar13 = _objc_retainAutoreleasedReturnValue();

    iVar3 = FUN_00297820(uVar6,auVar13._8_8_,auVar13._0_8_);

    _objc_release(auVar13._0_8_);

    if (iVar3 == 0) {

      if (iVar2 != 0) goto LAB_00032008;

    }

    else {

      FUN_0029b4a0(uVar7,extraout_x1_01,&cf_selectedCoverImageNameDark);

LAB_00032008:

      FUN_002a4a40(uVar7);

      FUN_00007f9c();

    }

    _objc_release(uVar7);

    FUN_00295960(param_1);

    auVar13 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4460(auVar13._0_8_,auVar13._8_8_,uVar6);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_00294240(&_OBJC_CLASS___NSFileManager);

    auVar14 = _objc_retainAutoreleasedReturnValue();

    local_80 = 0;

    iVar2 = FUN_0029b3c0(auVar14._0_8_,auVar14._8_8_,uVar7,&local_80);

    uVar5 = local_80;

    _objc_retain(local_80);

    _objc_release(auVar14._0_8_);

    if (iVar2 != 0) {

      FUN_00293960(param_1);

      uVar8 = _objc_retainAutoreleasedReturnValue();

      auVar14 = FUN_0029bae0(param_5);

      FUN_0029b480(uVar8,auVar14._8_8_,auVar14._0_8_);

      _objc_release(uVar8);

      local_70 = param_5;

      FUN_00291e00(&_OBJC_CLASS___NSArray,extraout_x1_02,&local_70,1);

      auVar14 = _objc_retainAutoreleasedReturnValue();

      FUN_002943a0(param_3,auVar14._8_8_,auVar14._0_8_,100);

      _objc_release(auVar14._0_8_);

    }

    _objc_release(uVar5);

    _objc_release(uVar7);

    _objc_release(auVar13._0_8_);

    _objc_release(uVar6);

  }

  lVar4 = FUN_002a4e60(param_3);

  if ((lVar4 == 0x3ef) && (lVar4 = FUN_0029c020(param_5), lVar4 == 4)) {

    FUN_00299060(param_1);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    auVar13 = FUN_0029bae0(param_5);

    FUN_00299500(uVar5,auVar13._8_8_,auVar13._0_8_);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar5);

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar13 = _objc_retainAutoreleasedReturnValue();

    uVar7 = auVar13._0_8_;

    FUN_002a45e0(uVar7,auVar13._8_8_,&cf_xzyNameplateImageNameLight);

    auVar13 = _objc_retainAutoreleasedReturnValue();

    iVar2 = FUN_00297820(uVar6,auVar13._8_8_,auVar13._0_8_);

    _objc_release(auVar13._0_8_);

    uVar5 = extraout_x1_03;

    if (iVar2 != 0) {

      FUN_0029b4a0(uVar7,extraout_x1_03,&cf_xzyNameplateImageNameLight);

      uVar5 = extraout_x1_04;

    }

    FUN_002a45e0(uVar7,uVar5,&cf_xzyNameplateImageNameDark);

    auVar13 = _objc_retainAutoreleasedReturnValue();

    iVar2 = FUN_00297820(uVar6,auVar13._8_8_,auVar13._0_8_);

    _objc_release(auVar13._0_8_);

    if (iVar2 != 0) {

      FUN_0029b4a0(uVar7,extraout_x1_05,&cf_xzyNameplateImageNameDark);

    }

    FUN_002a4a40(uVar7);

    FUN_00295a00(param_1);

    auVar13 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4460(auVar13._0_8_,auVar13._8_8_,uVar6);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_00294240(&_OBJC_CLASS___NSFileManager);

    auVar14 = _objc_retainAutoreleasedReturnValue();

    local_88 = 0;

    iVar2 = FUN_0029b3c0(auVar14._0_8_,auVar14._8_8_,uVar8,&local_88);

    uVar5 = local_88;

    _objc_retain(local_88);

    _objc_release(auVar14._0_8_);

    if (iVar2 != 0) {

      FUN_00299060(param_1);

      uVar9 = _objc_retainAutoreleasedReturnValue();

      auVar14 = FUN_0029bae0(param_5);

      FUN_0029b480(uVar9,auVar14._8_8_,auVar14._0_8_);

      _objc_release(uVar9);

      local_78 = param_5;

      FUN_00291e00(&_OBJC_CLASS___NSArray,extraout_x1_06,&local_78,1);

      auVar14 = _objc_retainAutoreleasedReturnValue();

      FUN_002943a0(param_3,auVar14._8_8_,auVar14._0_8_,100);

      _objc_release(auVar14._0_8_);

      FUN_0011acdc();

    }

    _objc_release(uVar5);

    _objc_release(uVar8);

    _objc_release(auVar13._0_8_);

    _objc_release(uVar7);

    _objc_release(uVar6);

  }

  lVar4 = FUN_002a4e60(param_3);

  if (((lVar4 == 0x3eb) && (lVar4 = FUN_0029c020(param_5), lVar4 == 2)) &&

     (lVar4 = FUN_0029bae0(param_5), 0 < lVar4)) {

    _objc_getAssociatedObject(param_1,"bubbleFolders");

    lVar4 = _objc_retainAutoreleasedReturnValue();

    lVar10 = FUN_0029bae0(param_5);

    if (lVar4 != 0) {

      uVar11 = FUN_00293860(lVar4);

      if (lVar10 - 1U < uVar11) {

        FUN_00299500(lVar4);

        auVar13 = _objc_retainAutoreleasedReturnValue();

        uVar5 = auVar13._0_8_;

        FUN_002a4680(&_OBJC_CLASS___NSString,auVar13._8_8_,&cf_nx_Rd_g0Wll0_);

        auVar13 = _objc_retainAutoreleasedReturnValue();

        FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar13._8_8_,&cf_Rd_g0Wll,auVar13._0_8_,1);

        uVar6 = _objc_retainAutoreleasedReturnValue();

        _objc_release(auVar13._0_8_);

        FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_07,&cf_Sm,1,0);

        auVar13 = _objc_retainAutoreleasedReturnValue();

        FUN_00290fe0(uVar6,auVar13._8_8_,auVar13._0_8_);

        _objc_release(auVar13._0_8_);

        local_c0 = PTR___NSConcreteStackBlock_003886f0;

        local_b8 = 0xc2000000;

        local_b0 = FUN_000328c4;

        puStack_a8 = &DAT_00388c90;

        _objc_retain(uVar5);

        local_a0 = uVar5;

        IStack_98 = param_1;

        _objc_retain(param_3);

        local_90 = param_3;

        FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_08,&cf_Rd,2,&local_c0);

        auVar13 = _objc_retainAutoreleasedReturnValue();

        FUN_00290fe0(uVar6,auVar13._8_8_,auVar13._0_8_);

        _objc_release(auVar13._0_8_);

        FUN_0029a500(param_1,extraout_x1_09,uVar6,1,0);

        _objc_release(local_90);

        _objc_release(local_a0);

        _objc_release(uVar6);

        _objc_release(uVar5);

      }

    }

    _objc_release(lVar4);

  }

  lVar4 = FUN_002a4e60(param_3);

  if ((lVar4 == 0x3f5) && (lVar4 = FUN_0029c020(param_5), lVar4 == 1)) {

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar13 = _objc_retainAutoreleasedReturnValue();

    FUN_00291d40(auVar13._0_8_,auVar13._8_8_,&cf_xzyHomeBottomBarPopupItems);

    ppuVar12 = (undefined **)_objc_retainAutoreleasedReturnValue();

    _objc_release(auVar13._0_8_);

    ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_003bdab0;

    if (ppuVar12 != (undefined **)0x0) {

      ppuVar1 = ppuVar12;

    }

    lVar4 = FUN_0029bae0(param_5);

    lVar10 = FUN_00293860(ppuVar1);

    if (lVar4 < lVar10) {

      uVar5 = FUN_00299020(ppuVar1);

      auVar13 = FUN_0029bae0(param_5);

      FUN_0029b480(uVar5,auVar13._8_8_,auVar13._0_8_);

      FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

      auVar13 = _objc_retainAutoreleasedReturnValue();

      FUN_002a0060(auVar13._0_8_,auVar13._8_8_,uVar5,&cf_xzyHomeBottomBarPopupItems);

      _objc_release(auVar13._0_8_);

      FUN_00296800(&_OBJC_CLASS___NSIndexSet,extraout_x1_10,1);

      auVar13 = _objc_retainAutoreleasedReturnValue();

      FUN_0029b1c0(param_3,auVar13._8_8_,auVar13._0_8_,100);

      _objc_release(auVar13._0_8_);

      FUN_00240480();

      _objc_release(uVar5);

    }

    _objc_release(ppuVar1);

  }

LAB_00032618:

  _objc_release(param_5);

  _objc_release(param_3);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_68) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




