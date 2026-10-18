// FUN_00230938 @0x230938


void FUN_00230938(undefined8 param_1,undefined8 param_2)



{

  ulong uVar1;

  code *UNRECOVERED_JUMPTABLE;

  float fVar2;

  

  UNRECOVERED_JUMPTABLE = DAT_003eb118;

  if (DAT_003eb0e8 == '\x01') {

    uVar1 = FUN_00230eb8();

    UNRECOVERED_JUMPTABLE = DAT_003eb118;

    fVar2 = (float)uVar1;

    _CAFrameRateRangeMake(fVar2,fVar2,fVar2);

  }

                    /* WARNING: Could not recover jumptable at 0x002309ac. Too many branches */

                    /* WARNING: Treating indirect jump as call */

  (*UNRECOVERED_JUMPTABLE)(param_1,param_2);

  return;

}




