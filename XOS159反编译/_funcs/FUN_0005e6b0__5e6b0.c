// FUN_0005e6b0 @0x5e6b0


void FUN_0005e6b0(long param_1)



{

  cfstringStruct *pcVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  cfstringStruct *pcVar4;

  undefined1 auVar5 [16];

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x28));

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  auVar5 = _objc_retainAutoreleasedReturnValue();

  pcVar4 = auVar5._0_8_;

  pcVar1 = &cf___;

  if (pcVar4 != (cfstringStruct *)0x0) {

    pcVar1 = pcVar4;

  }

  FUN_0029dac0(*(undefined8 *)(param_1 + 0x20),auVar5._8_8_,pcVar1);

  _objc_release(pcVar4);

  _objc_release(uVar3);

  _objc_release(uVar2);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00293ea0(*(undefined8 *)(param_1 + 0x20));

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002a0060(uVar2,auVar5._8_8_,auVar5._0_8_,&cf_aiChatCustomApiUrl);

  _objc_release(auVar5._0_8_);

  FUN_002a4a40(uVar2);

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x20));

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar3);

  _objc_release(uVar2);

  return;

}




