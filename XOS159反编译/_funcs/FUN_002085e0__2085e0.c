// FUN_002085e0 @0x2085e0


void FUN_002085e0(undefined8 param_1,undefined8 param_2)



{

  if ((DAT_003eaa30 == '\x01') && ((DAT_003ead50 & 1) == 0)) {

    _objc_setAssociatedObject(param_1,&DAT_003ead5c,0,1);

  }

  (*DAT_003eac98)(param_1,param_2);

  if (DAT_003eaa30 == '\x01') {

    FUN_0020a174(param_1,0);

  }

  FUN_0020b734(param_1,1);

  return;

}




