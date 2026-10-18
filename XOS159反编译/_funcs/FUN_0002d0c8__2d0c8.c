// FUN_0002d0c8 @0x2d0c8


void FUN_0002d0c8(long param_1,undefined8 param_2)



{

  cfstringStruct *pcVar1;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  

  _objc_retain(param_2);

  pcVar1 = &cf___;

  if (*(cfstringStruct **)(param_1 + 0x20) != (cfstringStruct *)0x0) {

    pcVar1 = *(cfstringStruct **)(param_1 + 0x20);

  }

  FUN_002a1d60(param_2,extraout_x1,pcVar1);

  FUN_002a06e0(param_2,extraout_x1_00,*(undefined8 *)(param_1 + 0x28));

  _objc_release(param_2);

  return;

}




