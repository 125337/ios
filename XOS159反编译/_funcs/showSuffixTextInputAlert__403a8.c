// showSuffixTextInputAlert @0x403a8


/* Function Stack Size: 0x10 bytes */



void _0x2f19de29::showSuffixTextInputAlert(ID param_1,SEL param_2)



{

  cfstringStruct *pcVar1;

  undefined *puVar2;

  undefined8 uVar3;

  cfstringStruct *pcVar4;

  undefined8 uVar5;

  long lVar6;

  long lVar7;

  long lVar8;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined1 auVar9 [16];

  undefined *local_c0;

  undefined8 local_b8;

  code *local_b0;

  undefined *puStack_a8;

  undefined8 local_a0;

  undefined8 local_98;

  ID IStack_90;

  undefined *local_88;

  undefined8 local_80;

  code *local_78;

  undefined *puStack_70;

  cfstringStruct *local_68;

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  uVar3 = auVar9._0_8_;

  FUN_002a45e0(uVar3,auVar9._8_8_,&cf_xzyTimeLabelSuffixText);

  pcVar4 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar1 = &::cf___;

  if (pcVar4 != (cfstringStruct *)0x0) {

    pcVar1 = pcVar4;

  }

  _objc_retain(pcVar1);

  _objc_release(pcVar4);

  FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1,&cf_O__eW_,&cf_eQ>f_y_WeTbveW_,1);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  puVar2 = PTR___NSConcreteStackBlock_003886f0;

  local_88 = PTR___NSConcreteStackBlock_003886f0;

  local_80 = 0xc2000000;

  local_78 = FUN_000406e4;

  puStack_70 = &DAT_00388f20;

  _objc_retain(pcVar1);

  local_68 = pcVar1;

  FUN_00291400(uVar5,extraout_x1_00,&local_88);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_Sm,1,0);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar5,auVar9._8_8_,auVar9._0_8_);

  _objc_release(auVar9._0_8_);

  local_c0 = puVar2;

  local_b8 = 0xc2000000;

  local_b0 = FUN_0004074c;

  puStack_a8 = &DAT_00388c90;

  _objc_retain(uVar5);

  local_a0 = uVar5;

  _objc_retain(uVar3);

  local_98 = uVar3;

  IStack_90 = param_1;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_02,&cf_nx_,0,&local_c0);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar5,auVar9._8_8_,auVar9._0_8_);

  _objc_release(auVar9._0_8_);

  FUN_002990e0(param_1);

  lVar6 = _objc_retainAutoreleasedReturnValue();

  _objc_getAssociatedObject(param_1,"bubbleNavController");

  lVar7 = _objc_retainAutoreleasedReturnValue();

  if (lVar7 == 0) {

    lVar8 = 0;

  }

  else {

    FUN_00299260(lVar7);

    lVar8 = _objc_retainAutoreleasedReturnValue();

    if (lVar8 != 0) {

      _objc_retain(lVar8);

      _objc_release(lVar6);

      lVar6 = lVar8;

    }

  }

  FUN_002a5520(lVar6);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_0029a500(auVar9._0_8_,auVar9._8_8_,uVar5,1,0);

  _objc_release(auVar9._0_8_);

  _objc_release(lVar8);

  _objc_release(lVar7);

  _objc_release(lVar6);

  _objc_release(local_98);

  _objc_release(local_a0);

  _objc_release(local_68);

  _objc_release(uVar5);

  _objc_release(pcVar1);

  _objc_release(uVar3);

  return;

}




