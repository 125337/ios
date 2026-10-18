// FUN_002308e0 @0x2308e0


void FUN_002308e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)



{

  code *UNRECOVERED_JUMPTABLE;

  

  UNRECOVERED_JUMPTABLE = DAT_003eb110;

  if (DAT_003eb0e8 == '\x01') {

    param_3 = FUN_00230eb8();

  }

                    /* WARNING: Could not recover jumptable at 0x00230934. Too many branches */

                    /* WARNING: Treating indirect jump as call */

  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);

  return;

}




