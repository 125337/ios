// FUN_002095cc @0x2095cc


void FUN_002095cc(undefined8 param_1)



{

  undefined8 uVar1;

  

  (*DAT_003ead10)();

  if ((DAT_003eaa30 == '\x01') && ((DAT_003ead50 & 1) == 0)) {

    _os_unfair_lock_lock(&DAT_003eadf0);

    uVar1 = DAT_003eaa68;

    DAT_003eaa68 = 0;

    _objc_release(uVar1);

    DAT_003eadf8 = 0;

    _os_unfair_lock_unlock(&DAT_003eadf0);

    FUN_0021e588(param_1);

    return;

  }

  return;

}




