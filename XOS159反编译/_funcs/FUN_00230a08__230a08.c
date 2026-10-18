// FUN_00230a08 @0x230a08


void FUN_00230a08(undefined8 param_1,undefined8 param_2,ulong param_3)



{

  undefined8 uVar1;

  

  (*DAT_003eb128)();

  if ((param_3 & 1) != 0) {

    return;

  }

  FUN_00297e40(param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00230e34();

  _objc_release(uVar1);

  return;

}




