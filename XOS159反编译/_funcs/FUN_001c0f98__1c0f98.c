// FUN_001c0f98 @0x1c0f98


bool FUN_001c0f98(void)



{

  bool bVar1;

  double dVar2;

  

  if ((DAT_003e97c3 & 1) == 0) {

    FUN_001bfa24();

  }

  if (DAT_003e97c2 == '\x01') {

    dVar2 = (double)_CACurrentMediaTime();

    bVar1 = dVar2 <= DAT_003e97c8;

  }

  else {

    bVar1 = false;

  }

  return bVar1;

}




