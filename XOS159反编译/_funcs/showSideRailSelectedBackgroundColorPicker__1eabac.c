// showSideRailSelectedBackgroundColorPicker @0x1eabac


/* Function Stack Size: 0x10 bytes */



void XZYChatListGroupingSettingsViewController::showSideRailSelectedBackgroundColorPicker

               (ID param_1,SEL param_2)



{

  cfstringStruct *pcVar1;

  cfstringStruct *pcVar2;

  long lVar3;

  undefined8 extraout_x1;

  undefined *local_70;

  undefined8 local_68;

  code *local_60;

  undefined *puStack_58;

  undefined1 auStack_50 [8];

  undefined1 auStack_48 [8];

  

  lVar3 = FUN_00297fa0(DAT_003ea988);

  pcVar1 = &cf_E5E5EA;

  if (lVar3 != 0) {

    pcVar1 = DAT_003ea988;

  }

  _objc_retain(pcVar1);

  lVar3 = FUN_00297fa0(DAT_003ea990);

  pcVar2 = &cf_2C2C2E;

  if (lVar3 != 0) {

    pcVar2 = DAT_003ea990;

  }

  _objc_retain(pcVar2);

  _objc_initWeak(auStack_48,param_1);

  local_70 = PTR___NSConcreteStackBlock_003886f0;

  local_68 = 0xc2000000;

  local_60 = FUN_001eacf4;

  puStack_58 = &DAT_0038a1c0;

  _objc_copyWeak(auStack_50,auStack_48);

  FUN_0029a2a0(&objc::class_t::XZYColorPickerViewController,extraout_x1,param_1,&cf_Oh_Nofr,pcVar1,

               pcVar2,&local_70);

  _objc_release(pcVar2);

  _objc_destroyWeak(auStack_50);

  _objc_destroyWeak(auStack_48);

  _objc_release(pcVar1);

  return;

}




