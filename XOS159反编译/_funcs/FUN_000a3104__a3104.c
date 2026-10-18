// FUN_000a3104 @0xa3104


void FUN_000a3104(long param_1,undefined8 param_2,undefined8 param_3)



{

  undefined8 extraout_x1;

  undefined8 uVar1;

  undefined1 auVar2 [16];

  undefined *local_80;

  undefined8 local_78;

  code *local_70;

  undefined *puStack_68;

  undefined8 local_60;

  undefined8 local_58;

  undefined8 local_50;

  undefined8 uStack_48;

  undefined8 local_40;

  undefined1 local_38;

  

  _objc_retain(param_2);

  _objc_retain(param_3);

  if (*(long *)(param_1 + 0x20) != 0) {

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar2 = _objc_retainAutoreleasedReturnValue();

    uVar1 = auVar2._0_8_;

    FUN_002a0060(uVar1,auVar2._8_8_,*(undefined8 *)(param_1 + 0x20),&cf_ttsSelectedVoice);

    if (*(long *)(param_1 + 0x28) != 0) {

      FUN_002a0060(uVar1,extraout_x1,*(long *)(param_1 + 0x28),&cf_ttsSelectedVoiceName);

    }

    _objc_release(uVar1);

  }

  local_80 = PTR___NSConcreteStackBlock_003886f0;

  local_78 = 0xc2000000;

  local_70 = FUN_000a325c;

  puStack_68 = &DAT_0038ac70;

  uVar1 = *(undefined8 *)(param_1 + 0x30);

  local_60 = param_3;

  local_58 = param_2;

  _objc_retain(uVar1);

  uStack_48 = *(undefined8 *)(param_1 + 0x38);

  local_40 = *(undefined8 *)(param_1 + 0x40);

  local_38 = *(undefined1 *)(param_1 + 0x48);

  local_50 = uVar1;

  _objc_retain(param_2);

  _objc_retain(param_3);

  _dispatch_async(PTR___dispatch_main_q_00388740,&local_80);

  _objc_release(local_50);

  _objc_release(local_58);

  _objc_release(local_60);

  _objc_release(param_2);

  _objc_release(param_3);

  return;

}




