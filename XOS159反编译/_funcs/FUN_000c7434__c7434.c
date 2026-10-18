// FUN_000c7434 @0xc7434


void FUN_000c7434(undefined8 param_1,undefined8 param_2,undefined8 param_3)



{

  int iVar1;

  

  _objc_retain(param_3);

  (*DAT_003e7cb0)(param_1,param_2,param_3);

  if (((DAT_003e7d10 == '\x01') && ((DAT_003e7d17 & 1) != 0)) &&

     (iVar1 = FUN_000c849c(param_1), iVar1 != 0)) {

    _objc_setAssociatedObject(param_1,PTR_LOOP_003e66b0,PTR____kCFBooleanTrue_00388320,1);

    FUN_000c8770(param_3);

    FUN_000c88c0(param_3);

  }

  _objc_release(param_3);

  return;

}




