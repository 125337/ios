// FUN_001cf594 @0x1cf594


void FUN_001cf594(long param_1,undefined8 param_2)



{

  undefined8 extraout_x1;

  

  _objc_retain(param_2);

  if (*(char *)(param_1 + 0x40) == '\x01') {

    FUN_001cf604(*(undefined8 *)(param_1 + 0x20));

  }

  FUN_001cf6c4(*(undefined8 *)(param_1 + 0x20),0);

  FUN_001cf7f4();

  FUN_0029a460(*(undefined8 *)(param_1 + 0x28),extraout_x1,*(undefined8 *)(param_1 + 0x30),

               *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x38));

  _objc_release(param_2);

  return;

}




