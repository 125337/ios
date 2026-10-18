// FUN_0007738c @0x7738c


void FUN_0007738c(long param_1,undefined8 param_2)



{

  undefined8 uVar1;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  

  FUN_0029b4a0(*(undefined8 *)(param_1 + 0x20),param_2,&cf_ttsCustomFvToken);

  FUN_0029d080(*(undefined8 *)(param_1 + 0x20),extraout_x1,0,&cf_ttsFvAutoCheckinEnabled);

  FUN_0029b4a0(*(undefined8 *)(param_1 + 0x20),extraout_x1_00,&cf_ttsFvLastAutoCheckinDateAtNine);

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x20));

  FUN_00077430();

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x28));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar1);

  FUN_002a3540(*(undefined8 *)(param_1 + 0x28),extraout_x1_01,&cf_FineVoiceToken,&cf__nd);

  return;

}




