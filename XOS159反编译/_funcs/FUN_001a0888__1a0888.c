// FUN_001a0888 @0x1a0888


void FUN_001a0888(long param_1,uint param_2)



{

  undefined *puVar1;

  

  _objc_retain();

  if (param_1 != 0) {

    puVar1 = PTR____kCFBooleanTrue_00388320;

    if (param_2 == 0) {

      puVar1 = (undefined *)0x0;

    }

    _objc_setAssociatedObject(param_1,PTR_LOOP_003e6ee0,puVar1,1);

    if ((param_2 & 1) == 0) {

      FUN_001a08f8(param_1);

    }

  }

  _objc_release(param_1);

  return;

}




