// FUN_00085074 @0x85074


byte FUN_00085074(undefined8 param_1)



{

  byte bVar1;

  

  _objc_retain();

  FUN_000828e0();

  bVar1 = FUN_000bcd6c(param_1);

  if (((bVar1 | DAT_003e7bc0) & 1) == 0) {

    bVar1 = FUN_000bce54(param_1);

    bVar1 = bVar1 | DAT_003e7bc1;

  }

  else {

    bVar1 = 0;

  }

  _objc_release(param_1);

  return bVar1 & 1;

}




