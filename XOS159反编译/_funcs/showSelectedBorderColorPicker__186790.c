// showSelectedBorderColorPicker @0x186790


/* Function Stack Size: 0x10 bytes */



void GrayTestSettingViewController::showSelectedBorderColorPicker(ID param_1,SEL param_2)



{

  cfstringStruct *pcVar1;

  undefined8 uVar2;

  cfstringStruct *pcVar3;

  cfstringStruct *pcVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar5 [16];

  undefined *local_70;

  undefined8 local_68;

  code *local_60;

  undefined *puStack_58;

  undefined8 local_50;

  ID IStack_48;

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  uVar2 = auVar5._0_8_;

  FUN_002a45e0(uVar2,auVar5._8_8_,&cf_grayTestBorderSelectedLight);

  pcVar3 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar1 = &cf_33CC4D;

  if (pcVar3 != (cfstringStruct *)0x0) {

    pcVar1 = pcVar3;

  }

  _objc_retain(pcVar1);

  _objc_release(pcVar3);

  FUN_002a45e0(uVar2,extraout_x1,&cf_grayTestBorderSelectedDark);

  pcVar4 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar3 = &cf_33CC4D;

  if (pcVar4 != (cfstringStruct *)0x0) {

    pcVar3 = pcVar4;

  }

  _objc_retain(pcVar3);

  _objc_release(pcVar4);

  local_70 = PTR___NSConcreteStackBlock_003886f0;

  local_68 = 0xc2000000;

  local_60 = FUN_00186904;

  puStack_58 = &DAT_00388fd0;

  _objc_retain(uVar2);

  local_50 = uVar2;

  IStack_48 = param_1;

  FUN_0029a2a0(&objc::class_t::XZYColorPickerViewController,extraout_x1_00,param_1,&cf__NaSGrFhr,

               pcVar1,pcVar3,&local_70);

  _objc_release(pcVar3);

  _objc_release(local_50);

  _objc_release(pcVar1);

  _objc_release(uVar2);

  return;

}




