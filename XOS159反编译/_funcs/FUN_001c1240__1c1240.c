// FUN_001c1240 @0x1c1240


void FUN_001c1240(void)



{

  double dVar1;

  

  DAT_003e97f8 = 0;

  if ((DAT_003e97c3 & 1) == 0) {

    FUN_001bfa24();

  }

  if ((DAT_003e97c2 == '\x01') && (dVar1 = (double)_CACurrentMediaTime(), dVar1 <= DAT_003e97c8)) {

    FUN_001c11f8();

    return;

  }

  FUN_001bfa90();

  return;

}




