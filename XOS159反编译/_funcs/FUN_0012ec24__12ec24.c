// FUN_0012ec24 @0x12ec24


byte FUN_0012ec24(void)



{

  byte bVar1;

  

  FUN_0012da64();

  bVar1 = 1;

  if ((((DAT_003e8561 & 1) == 0) && ((DAT_003e85d8 & 1) == 0)) && ((DAT_003e85d9 & 1) == 0)) {

    bVar1 = (DAT_003e85da ^ 1) & DAT_003eb410;

  }

  return bVar1 & 1;

}




