// onMasterSwitchChanged: @0x1c72a4


/* Function Stack Size: 0x18 bytes */



void XZYDesktopLyricsSettingsViewController::onMasterSwitchChanged_

               (ID param_1,SEL param_2,ID param_3)



{

  cfstringStruct *pcVar1;

  int iVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined1 auVar5 [16];

  

  _objc_retain(param_3);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  auVar5 = FUN_002979c0(param_3);

  FUN_0029d080(uVar3,auVar5._8_8_,auVar5._0_8_,&cf_xzyDesktopLyricsEnabled);

  FUN_002a4a40(uVar3);

  FUN_001c478c();

  FUN_002a4dc0(param_1);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar4);

  iVar2 = FUN_002979c0(param_3);

  pcVar1 = &cf_j_;

  if (iVar2 == 0) {

    pcVar1 = &::cf___;

  }

  FUN_001c3d54(pcVar1);

  _objc_release(uVar3);

  _objc_release(param_3);

  return;

}




