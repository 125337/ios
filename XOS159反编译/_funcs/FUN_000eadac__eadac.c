// FUN_000eadac @0xeadac


void FUN_000eadac(undefined8 param_1)



{

  int iVar1;

  

  (*DAT_003e7e28)();

  if ((DAT_003e7d99 == '\x01') && (iVar1 = FUN_000eb7a0(param_1), iVar1 != 0)) {

    if (DAT_003e7d9e == '\x01') {

      FUN_00291b60();

    }

    else {

      FUN_0029b420(param_1);

    }

    FUN_00291aa0(param_1);

    if ((DAT_003e7d9f & 1) == 0) {

      FUN_0029b2c0(param_1);

      return;

    }

  }

  return;

}




