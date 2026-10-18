// FUN_00187a70 @0x187a70


ulong FUN_00187a70(undefined8 param_1,undefined8 param_2)



{

  ulong uVar1;

  

  FUN_00187694();

  if ((DAT_003e8d31 & 1) != 0) {

    return (ulong)DAT_003e6e10;

  }

                    /* WARNING: Could not recover jumptable at 0x00187ac0. Too many branches */

                    /* WARNING: Treating indirect jump as call */

  uVar1 = (*DAT_003e8cd8)(param_1,param_2);

  return uVar1;

}




