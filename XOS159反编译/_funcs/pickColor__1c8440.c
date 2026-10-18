// pickColor @0x1c8440


/* Function Stack Size: 0x10 bytes */



void XZYDesktopLyricsSettingsViewController::pickColor(ID param_1,SEL param_2)



{

  cfstringStruct *pcVar1;

  int iVar2;

  long lVar3;

  cfstringStruct *pcVar4;

  cfstringStruct *pcVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 uVar6;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined *local_70;

  undefined8 local_68;

  code *local_60;

  undefined *puStack_58;

  undefined1 auStack_50 [8];

  undefined1 auStack_48 [8];

  

  lVar3 = FUN_00297fa0(PTR_cf__1A1A1A_003e70b8);

  pcVar5 = &cf__1A1A1A;

  if (lVar3 != 0) {

    pcVar5 = (cfstringStruct *)PTR_cf__1A1A1A_003e70b8;

  }

  _objc_retain(pcVar5);

  lVar3 = FUN_00297fa0(PTR_cf__F5F5F5_003e70c0);

  pcVar1 = &cf__F5F5F5;

  if (lVar3 != 0) {

    pcVar1 = (cfstringStruct *)PTR_cf__F5F5F5_003e70c0;

  }

  _objc_retain(pcVar1);

  iVar2 = FUN_00295f60(pcVar5,extraout_x1,&cf__);

  uVar6 = extraout_x1_00;

  pcVar4 = pcVar5;

  if (iVar2 != 0) {

    FUN_002a47c0(pcVar5,extraout_x1_00,1);

    pcVar4 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    _objc_release(pcVar5);

    uVar6 = extraout_x1_01;

  }

  iVar2 = FUN_00295f60(pcVar1,uVar6,&cf__);

  pcVar5 = pcVar1;

  if (iVar2 != 0) {

    FUN_002a47c0(pcVar1,extraout_x1_02,1);

    pcVar5 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    _objc_release(pcVar1);

  }

  _objc_initWeak(auStack_48,param_1);

  local_70 = PTR___NSConcreteStackBlock_003886f0;

  local_68 = 0xc2000000;

  local_60 = FUN_001c8600;

  puStack_58 = &DAT_0038a1c0;

  _objc_copyWeak(auStack_50,auStack_48);

  FUN_0029a2a0(&objc::class_t::XZYColorPickerViewController,extraout_x1_03,param_1,&cf_LkeW_r,pcVar4

               ,pcVar5,&local_70);

  _objc_destroyWeak(auStack_50);

  _objc_destroyWeak(auStack_48);

  _objc_release(pcVar5);

  _objc_release(pcVar4);

  return;

}




