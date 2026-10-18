// FUN_000c7138 @0xc7138


void FUN_000c7138(undefined8 param_1,undefined8 param_2,undefined8 param_3)



{

  code *UNRECOVERED_JUMPTABLE;

  int iVar1;

  undefined8 uVar2;

  

  UNRECOVERED_JUMPTABLE = DAT_003e7c90;

  iVar1 = FUN_000c7fe0(param_2);

  uVar2 = 0;

  if (iVar1 == 0) {

    uVar2 = param_1;

  }

                    /* WARNING: Could not recover jumptable at 0x000c7194. Too many branches */

                    /* WARNING: Treating indirect jump as call */

  (*UNRECOVERED_JUMPTABLE)(uVar2,param_2,param_3);

  return;

}




