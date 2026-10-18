// showCardImagePickerForMode: @0x1497d4


/* Function Stack Size: 0x14 bytes */



void CadisSettingsViewController::showCardImagePickerForMode_(ID param_1,SEL param_2,bool param_3)



{

  cfstringStruct *pcVar1;

  undefined *puVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar5 [16];

  undefined1 auVar6 [16];

  undefined *local_b0;

  undefined8 local_a8;

  code *local_a0;

  undefined *puStack_98;

  cfstringStruct *local_90;

  ID IStack_88;

  undefined *local_80;

  undefined8 local_78;

  code *local_70;

  undefined *puStack_68;

  cfstringStruct *local_60;

  ID IStack_58;

  

  FUN_0029b120();

  pcVar1 = &cf_CadisSelectedCardDark;

  if (param_3 == 0) {

    pcVar1 = &cf_CadisSelectedCardLight;

  }

  _objc_retain(pcVar1);

  auVar5 = _objc_alloc(&objc::class_t::CadisCardImagePickerViewController);

  auVar5 = FUN_00296ea0(auVar5._0_8_,auVar5._8_8_,2);

  uVar3 = auVar5._0_8_;

  FUN_0029f020(uVar3,auVar5._8_8_,param_3);

  FUN_00292a00(param_1);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  auVar5 = FUN_00299020();

  FUN_0029eca0(uVar3,auVar5._8_8_,auVar5._0_8_);

  _objc_release(auVar5._0_8_);

  _objc_release(uVar4);

  FUN_00136588();

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002a45e0(auVar5._0_8_,auVar5._8_8_,pcVar1);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_0029da20(uVar3,auVar6._8_8_,auVar6._0_8_);

  _objc_release(auVar6._0_8_);

  _objc_release(auVar5._0_8_);

  puVar2 = PTR___NSConcreteStackBlock_003886f0;

  local_80 = PTR___NSConcreteStackBlock_003886f0;

  local_78 = 0xc2000000;

  local_70 = FUN_00149a0c;

  puStack_68 = &DAT_0038d2b8;

  _objc_retain(pcVar1);

  local_60 = pcVar1;

  IStack_58 = param_1;

  FUN_002a02c0(uVar3,extraout_x1,&local_80);

  local_b0 = puVar2;

  local_a8 = 0xc2000000;

  local_a0 = FUN_00149b04;

  puStack_98 = &DAT_00388d50;

  _objc_retain(pcVar1);

  local_90 = pcVar1;

  IStack_88 = param_1;

  FUN_002a0180(uVar3,extraout_x1_00,&local_b0);

  FUN_002990e0(param_1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_0029aa80(auVar5._0_8_,auVar5._8_8_,uVar3,1);

  _objc_release(auVar5._0_8_);

  _objc_release(local_90);

  _objc_release(local_60);

  _objc_release(uVar3);

  _objc_release(pcVar1);

  return;

}




