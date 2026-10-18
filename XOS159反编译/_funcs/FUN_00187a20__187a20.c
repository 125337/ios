// FUN_00187a20 @0x187a20


undefined8 FUN_00187a20(undefined8 param_1,undefined8 param_2)



{

  undefined8 uVar1;

  

  FUN_00187694();

  if ((DAT_003e8d31 & 1) != 0) {

    return 1;

  }

                    /* WARNING: Could not recover jumptable at 0x00187a6c. Too many branches */

                    /* WARNING: Treating indirect jump as call */

  uVar1 = (*DAT_003e8cd0)(param_1,param_2);

  return uVar1;

}




