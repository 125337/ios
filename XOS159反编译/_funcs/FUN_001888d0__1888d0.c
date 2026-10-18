// FUN_001888d0 @0x1888d0


void FUN_001888d0(double param_1,undefined8 param_2,undefined8 param_3)



{

  int iVar1;

  double dVar2;

  

  iVar1 = FUN_00188834();

  dVar2 = param_1 * 0.75;

  if (iVar1 == 0) {

    dVar2 = param_1;

  }

                    /* WARNING: Could not recover jumptable at 0x0018891c. Too many branches */

                    /* WARNING: Treating indirect jump as call */

  (*DAT_003e8d38)(dVar2,param_2,param_3);

  return;

}




