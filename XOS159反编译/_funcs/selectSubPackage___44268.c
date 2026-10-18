// selectSubPackage: @0x44268


/* Function Stack Size: 0x18 bytes */



void _0x2f19de29::selectSubPackage_(ID param_1,SEL param_2,ID param_3)



{

  undefined *puVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  long lVar11;

  long lVar12;

  long lVar13;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined1 auVar14 [16];

  undefined *local_d0;

  undefined8 local_c8;

  code *local_c0;

  undefined *puStack_b8;

  undefined8 local_b0;

  undefined *local_a8;

  undefined8 local_a0;

  code *local_98;

  undefined *puStack_90;

  undefined8 local_88;

  undefined8 local_80;

  

  _objc_retain(param_3);

  _objc_getAssociatedObject(param_3,"bubbleName");

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_getAssociatedObject(param_3,"subPackageName");

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_getAssociatedObject(param_3,"presenterVC");

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar14 = _objc_retainAutoreleasedReturnValue();

  uVar5 = auVar14._0_8_;

  FUN_002a0060(uVar5,auVar14._8_8_,uVar2,&cf_mesMsgMergeSelectedBubble);

  FUN_002a0060(uVar5,extraout_x1,uVar3,&cf_mesMsgMergeSelectedSubPackage);

  FUN_002a4a40(uVar5);

  auVar14 = FUN_00297fa0(uVar3);

  if (auVar14._0_8_ == 0) {

    _objc_retain(uVar2);

    uVar6 = uVar2;

  }

  else {

    FUN_00295260(param_1,auVar14._8_8_,uVar3);

    uVar6 = _objc_retainAutoreleasedReturnValue();

  }

  FUN_0002a854(0x400199999999999a,&cf_ll_fbc,uVar6,1);

  FUN_002a6220(uVar4);

  auVar14 = _objc_retainAutoreleasedReturnValue();

  FUN_002a62a0(auVar14._0_8_,auVar14._8_8_,&DAT_0000270f);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar14._0_8_);

  FUN_002a62a0(uVar7,extraout_x1_00,&DAT_0000270e);

  uVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220(uVar4);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_002925a0();

  _objc_release(uVar9);

  puVar1 = PTR___NSConcreteStackBlock_003886f0;

  local_a8 = PTR___NSConcreteStackBlock_003886f0;

  local_a0 = 0xc2000000;

  local_98 = FUN_00044748;

  puStack_90 = &DAT_00389800;

  _objc_retain(uVar7);

  local_88 = uVar7;

  _objc_retain(uVar8);

  local_d0 = puVar1;

  local_c8 = 0xc2000000;

  local_c0 = FUN_00044808;

  puStack_b8 = &DAT_00389830;

  local_80 = uVar8;

  _objc_retain(uVar7);

  local_b0 = uVar7;

  FUN_002917c0(0x3fd0000000000000,&_OBJC_CLASS___UIView,extraout_x1_01,&local_a8,&local_d0);

  FUN_002990e0(param_1);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5520();

  uVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220();

  auVar14 = _objc_retainAutoreleasedReturnValue();

  FUN_002a62a0(auVar14._0_8_,auVar14._8_8_,0x3eb);

  lVar11 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar14._0_8_);

  _objc_release(uVar10);

  _objc_release(uVar9);

  if (lVar11 != 0) goto LAB_00044584;

  _objc_getAssociatedObject(param_1,"bubbleNavController");

  lVar12 = _objc_retainAutoreleasedReturnValue();

  if (lVar12 == 0) {

LAB_00044578:

    lVar11 = 0;

  }

  else {

    FUN_00299260(lVar12);

    lVar13 = _objc_retainAutoreleasedReturnValue();

    if (lVar13 == 0) goto LAB_00044578;

    FUN_002a5520(lVar13);

    uVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_002a6220();

    auVar14 = _objc_retainAutoreleasedReturnValue();

    FUN_002a62a0(auVar14._0_8_,auVar14._8_8_,0x3eb);

    lVar11 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar14._0_8_);

    _objc_release(uVar9);

    _objc_release(lVar13);

  }

  _objc_release(lVar12);

LAB_00044584:

  FUN_0029b140(lVar11);

  _objc_release(lVar11);

  _objc_release(local_b0);

  _objc_release(local_80);

  _objc_release(local_88);

  _objc_release(uVar8);

  _objc_release(uVar7);

  _objc_release(uVar6);

  _objc_release(uVar5);

  _objc_release(uVar4);

  _objc_release(uVar3);

  _objc_release(uVar2);

  _objc_release(param_3);

  return;

}




