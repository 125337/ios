// FUN_00029d00 @0x29d00


void FUN_00029d00(long param_1,undefined8 param_2,undefined8 param_3)



{

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  

  _objc_retain(param_2);

  _objc_retain(param_3);

  FUN_002a0060(*(undefined8 *)(param_1 + 0x20),extraout_x1,param_2,

               &cf_xzyColorSchemeNicknameLightHex);

  FUN_002a0060(*(undefined8 *)(param_1 + 0x20),extraout_x1_00,param_3,

               &cf_xzyColorSchemeNicknameDarkHex);

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x20));

  FUN_0029b140(*(undefined8 *)(param_1 + 0x28));

  _objc_release(param_3);

  _objc_release(param_2);

  return;

}




