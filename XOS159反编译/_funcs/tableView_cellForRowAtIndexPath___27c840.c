// tableView:cellForRowAtIndexPath: @0x27c840


/* Function Stack Size: 0x20 bytes */



ID XZYHomeDockLiquidContainer::tableView_cellForRowAtIndexPath_

             (ID param_1,SEL param_2,ID param_3,ID param_4)



{

  bool bVar1;

  int iVar2;

  long lVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  long lVar6;

  long lVar7;

  ID IVar8;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar9 [16];

  undefined1 auVar10 [16];

  

  _objc_retain(param_4);

  FUN_002943e0(param_3,extraout_x1,&cf_xzy_liquid_song);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  if (lVar3 == 0) {

    auVar9 = _objc_alloc(&objc::class_t::XZYDockPlaylistCell);

    lVar3 = FUN_00296ec0(auVar9._0_8_,auVar9._8_8_,0,&cf_xzy_liquid_song);

    FUN_00292dc0(&_OBJC_CLASS___UIColor);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_0029cf60(lVar3,auVar9._8_8_,auVar9._0_8_);

    _objc_release(auVar9._0_8_);

    FUN_00292dc0(&_OBJC_CLASS___UIColor);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_00293640(lVar3);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_0029cf60(auVar9._0_8_,auVar9._8_8_,uVar4);

    _objc_release(auVar9._0_8_);

    _objc_release(uVar4);

    FUN_002a12c0(lVar3,extraout_x1_00,0);

    FUN_00293640(lVar3);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_00298860(param_1,auVar9._8_8_,"selectMenuButton:",auVar9._0_8_);

    auVar10 = _objc_retainAutoreleasedReturnValue();

    FUN_002a0e00(lVar3,auVar10._8_8_,auVar10._0_8_);

    _objc_release(auVar10._0_8_);

    _objc_release(auVar9._0_8_);

    FUN_0029bb00(lVar3);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_0029fb60(auVar9._0_8_,auVar9._8_8_,1);

    _objc_release(auVar9._0_8_);

    FUN_0029bb00(lVar3);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_00297e40();

    uVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_0029d820(0x402c000000000000);

    _objc_release(uVar5);

    _objc_release(uVar4);

  }

  FUN_0029bb00(lVar3);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  auVar9 = FUN_0029bae0(param_4);

  FUN_00293340(param_1,auVar9._8_8_,uVar4,auVar9._0_8_);

  _objc_release(uVar4);

  iVar2 = FUN_002a55e0(param_1);

  if (iVar2 == 0) {

    bVar1 = false;

  }

  else {

    lVar6 = FUN_00296180(param_1);

    lVar7 = FUN_0029bae0(param_4);

    bVar1 = lVar6 == lVar7;

  }

  FUN_0029bb00(lVar3);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e960(auVar9._0_8_,auVar9._8_8_,bVar1);

  _objc_release(auVar9._0_8_);

  _objc_release(param_4);

  IVar8 = _objc_autoreleaseReturnValue(lVar3);

  return IVar8;

}




