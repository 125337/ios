// FUN_000c70e0 @0xc70e0


void FUN_000c70e0(undefined8 param_1,undefined8 param_2,uint param_3)



{

  code *UNRECOVERED_JUMPTABLE;

  uint uVar1;

  

  UNRECOVERED_JUMPTABLE = DAT_003e7c88;

  uVar1 = FUN_000c7fe0(param_1);

                    /* WARNING: Could not recover jumptable at 0x000c7134. Too many branches */

                    /* WARNING: Treating indirect jump as call */

  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3 | uVar1);

  return;

}




