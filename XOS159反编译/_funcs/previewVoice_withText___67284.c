// previewVoice:withText: @0x67284


/* Function Stack Size: 0x20 bytes */



void _0x00bdda58::previewVoice_withText_(ID param_1,SEL param_2,ID param_3,ID param_4)



{

  undefined1 uVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined1 auVar4 [16];

  undefined *local_88;

  undefined8 local_80;

  code *local_78;

  undefined *puStack_70;

  ID local_68;

  ID local_60;

  undefined8 local_58;

  ID local_50;

  undefined1 local_48;

  

  _objc_retain(param_3);

  _objc_retain(param_4);

  if ((((param_3 != 0) && (lVar2 = FUN_00297fa0(param_3), param_4 != 0)) && (lVar2 != 0)) &&

     (lVar2 = FUN_00297fa0(param_4), lVar2 != 0)) {

    FUN_002a4380(param_1);

    FUN_002a0ae0(param_1,extraout_x1,param_3);

    FUN_002a4dc0(param_1);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b140();

    _objc_release(uVar3);

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar4 = _objc_retainAutoreleasedReturnValue();

    uVar1 = FUN_002924c0(auVar4._0_8_,auVar4._8_8_,&cf_ttsLocalMode);

    FUN_00067458(param_3);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    local_88 = PTR___NSConcreteStackBlock_003886f0;

    local_80 = 0xc2000000;

    local_78 = FUN_00068114;

    puStack_70 = &DAT_0038a0c0;

    local_68 = param_1;

    _objc_retain(param_3);

    local_60 = param_3;

    local_58 = uVar3;

    local_48 = uVar1;

    _objc_retain(param_4);

    local_50 = param_4;

    _objc_retain(uVar3);

    FUN_00067aa8(param_3,&local_88);

    _objc_release(local_50);

    _objc_release(local_58);

    _objc_release(local_60);

    _objc_release(uVar3);

    _objc_release(auVar4._0_8_);

  }

  _objc_release(param_4);

  _objc_release(param_3);

  return;

}




