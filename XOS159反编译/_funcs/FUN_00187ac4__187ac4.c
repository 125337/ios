// FUN_00187ac4 @0x187ac4


undefined8 FUN_00187ac4(undefined8 param_1,undefined8 param_2)



{

  undefined8 uVar1;

  

  FUN_00187694();

  if ((DAT_003e8d31 == '\x01') && ((DAT_003e8d32 & 1) != 0)) {

    return 0;

  }

                    /* WARNING: Could not recover jumptable at 0x00187b20. Too many branches */

                    /* WARNING: Treating indirect jump as call */

  uVar1 = (*DAT_003e8ce0)(param_1,param_2);

  return uVar1;

}




