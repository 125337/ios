// FUN_001ce0c8 @0x1ce0c8


void FUN_001ce0c8(long param_1,undefined8 param_2)



{

  undefined8 extraout_x1;

  

  _objc_retain(param_2);

  if (*(char *)(param_1 + 0x40) == '\x01') {

    FUN_001ce138(*(undefined8 *)(param_1 + 0x20));

  }

  FUN_001ce1f8(*(undefined8 *)(param_1 + 0x20),0);

  FUN_001ce328();

  FUN_0029a2e0(*(undefined8 *)(param_1 + 0x28),extraout_x1,*(undefined8 *)(param_1 + 0x30),

               *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x38));

  _objc_release(param_2);

  return;

}




