// FUN_00188920 @0x188920


void FUN_00188920(double param_1,double param_2,undefined8 param_3,undefined8 param_4)



{

  int iVar1;

  

  iVar1 = FUN_00188834();

  if ((iVar1 != 0) && (param_2 = param_2 * 0.75, param_2 <= param_1)) {

    param_1 = param_2;

  }

                    /* WARNING: Could not recover jumptable at 0x00188990. Too many branches */

                    /* WARNING: Treating indirect jump as call */

  (*DAT_003e8d40)(param_1,param_2,param_3,param_4);

  return;

}




