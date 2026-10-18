// onSavePressed: @0x19e350


/* Function Stack Size: 0x18 bytes */



void AABDateTimeCustomEditorViewController::onSavePressed_(ID param_1,SEL param_2,ID param_3)



{

  cfstringStruct *pcVar1;

  cfstringStruct *pcVar2;

  cfstringStruct *pcVar3;

  cfstringStruct *pcVar4;

  cfstringStruct *pcVar5;

  undefined8 uVar6;

  long lVar7;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined1 auVar8 [16];

  

  FUN_002a6220();

  auVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_00294c20(auVar8._0_8_,auVar8._8_8_,1);

  _objc_release(auVar8._0_8_);

  FUN_002a5020(*(undefined8 *)(param_1 + (long)_selfLine1Field));

  pcVar2 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar1 = &::cf___;

  if (pcVar2 != (cfstringStruct *)0x0) {

    pcVar1 = pcVar2;

  }

  _objc_retain(pcVar1);

  _objc_release(pcVar2);

  FUN_002a5020(*(undefined8 *)(param_1 + (long)_selfLine2Field));

  pcVar3 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar2 = &::cf___;

  if (pcVar3 != (cfstringStruct *)0x0) {

    pcVar2 = pcVar3;

  }

  _objc_retain(pcVar2);

  _objc_release(pcVar3);

  FUN_002a5020(*(undefined8 *)(param_1 + (long)_otherLine1Field));

  pcVar4 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar3 = &::cf___;

  if (pcVar4 != (cfstringStruct *)0x0) {

    pcVar3 = pcVar4;

  }

  _objc_retain(pcVar3);

  _objc_release(pcVar4);

  FUN_002a5020(*(undefined8 *)(param_1 + (long)_otherLine2Field));

  pcVar5 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar4 = &::cf___;

  if (pcVar5 != (cfstringStruct *)0x0) {

    pcVar4 = pcVar5;

  }

  _objc_retain(pcVar4);

  _objc_release(pcVar5);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  uVar6 = auVar8._0_8_;

  FUN_002a0060(uVar6,auVar8._8_8_,pcVar1,&cf_aabDateTimeCustomLine1);

  FUN_002a0060(uVar6,extraout_x1,pcVar2,&cf_aabDateTimeCustomLine2);

  FUN_002a0060(uVar6,extraout_x1_00,pcVar3,&cf_aabDateTimeCustomLine1Other);

  FUN_002a0060(uVar6,extraout_x1_01,pcVar4,&cf_aabDateTimeCustomLine2Other);

  FUN_0029efa0(uVar6,extraout_x1_02,8,&cf_aabDateTimeDisplayMode);

  FUN_002a4a40(uVar6);

  FUN_0018dc7c();

  FUN_00299700(param_1);

  lVar7 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar7 != 0) {

    FUN_00299700(param_1);

    lVar7 = _objc_retainAutoreleasedReturnValue();

    (**(code **)(lVar7 + 0x10))();

    _objc_release(lVar7);

  }

  FUN_002990e0(param_1);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_0029a080(auVar8._0_8_,auVar8._8_8_,1);

  _objc_unsafeClaimAutoreleasedReturnValue();

  _objc_release(auVar8._0_8_);

  _objc_release(uVar6);

  _objc_release(pcVar4);

  _objc_release(pcVar3);

  _objc_release(pcVar2);

  _objc_release(pcVar1);

  return;

}




