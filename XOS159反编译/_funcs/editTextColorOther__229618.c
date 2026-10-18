// editTextColorOther @0x229618


/* Function Stack Size: 0x10 bytes */



void XZYMesReferRoundedSettingsViewController::editTextColorOther(ID param_1,SEL param_2)



{

  cfstringStruct *pcVar1;

  cfstringStruct *pcVar2;

  cfstringStruct *pcVar3;

  undefined8 extraout_x1;

  undefined1 auVar4 [16];

  undefined *local_70;

  undefined8 local_68;

  code *local_60;

  undefined *puStack_58;

  undefined1 auStack_50 [8];

  undefined1 auStack_48 [8];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002a45e0(auVar4._0_8_,auVar4._8_8_,&cf_xzyMesReferTextColorOtherLight);

  pcVar2 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar1 = &::cf___;

  if (pcVar2 != (cfstringStruct *)0x0) {

    pcVar1 = pcVar2;

  }

  _objc_retain(pcVar1);

  _objc_release(pcVar2);

  _objc_release(auVar4._0_8_);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002a45e0(auVar4._0_8_,auVar4._8_8_,&cf_xzyMesReferTextColorOtherDark);

  pcVar3 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar2 = &::cf___;

  if (pcVar3 != (cfstringStruct *)0x0) {

    pcVar2 = pcVar3;

  }

  _objc_retain(pcVar2);

  _objc_release(pcVar3);

  _objc_release(auVar4._0_8_);

  _objc_initWeak(auStack_48,param_1);

  local_70 = PTR___NSConcreteStackBlock_003886f0;

  local_68 = 0xc2000000;

  local_60 = FUN_002297d0;

  puStack_58 = &DAT_0038a1c0;

  _objc_copyWeak(auStack_50,auStack_48);

  FUN_0029a2a0(&objc::class_t::XZYColorPickerViewController,extraout_x1,param_1,&cf__e__ueW_r,pcVar1

               ,pcVar2,&local_70);

  _objc_release(pcVar2);

  _objc_destroyWeak(auStack_50);

  _objc_destroyWeak(auStack_48);

  _objc_release(pcVar1);

  return;

}




