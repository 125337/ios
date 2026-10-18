// FUN_001c0908 @0x1c0908


void FUN_001c0908(float param_1,float param_2,float param_3,float param_4)



{

  if ((DAT_003e97c3 & 1) == 0) {

    FUN_001bfa24();

  }

  if (DAT_003e97c2 == '\x01') {

    if (0x7f7fffff < (uint)ABS(param_1)) {

      param_1 = 0.35;

    }

    if (((0x7fffffff < (uint)param_2 || 0x7e < (int)ABS(param_2) - 0x800000U >> 0x18) &&

        0x7ffffe < (int)param_2 - 1U) && ABS(param_2) != 0.0) {

      param_2 = param_1;

    }

    if (((0x7fffffff < (uint)param_3 || 0x7e < (int)ABS(param_3) - 0x800000U >> 0x18) &&

        0x7ffffe < (int)param_3 - 1U) && ABS(param_3) != 0.0) {

      param_3 = param_1 * 0.55;

    }

    if (((0x7fffffff < (uint)param_4 || 0x7e < (int)ABS(param_4) - 0x800000U >> 0x18) &&

        0x7ffffe < (int)param_4 - 1U) && ABS(param_4) != 0.0) {

      param_4 = param_1 * 0.25;

    }

    FUN_001bfb40(param_1,param_2,param_3,param_4);

    return;

  }

  return;

}




