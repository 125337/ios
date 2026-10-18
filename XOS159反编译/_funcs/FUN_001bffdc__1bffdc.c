// FUN_001bffdc @0x1bffdc


void FUN_001bffdc(double param_1)



{

  float *pfVar1;

  double dVar2;

  double dVar3;

  float local_28;

  float local_24;

  

  if ((DAT_003e97c3 & 1) == 0) {

    FUN_001bfa24();

  }

  if (DAT_003e97c2 == '\x01') {

    dVar2 = (double)_CACurrentMediaTime();

    dVar3 = param_1 + dVar2;

    if (param_1 + dVar2 <= DAT_003e97c8) {

      dVar3 = DAT_003e97c8;

    }

    if (DAT_003e97d0 < 0.08) {

      DAT_003e97d0 = 0.08;

      local_24 = DAT_003e97d4;

      local_28 = 0.08;

      pfVar1 = &local_28;

      if (0.08 <= DAT_003e97d4) {

        pfVar1 = &local_24;

      }

      DAT_003e97d4 = *pfVar1;

    }

    DAT_003e97c8 = dVar3;

    FUN_001c11f8();

    return;

  }

  return;

}




