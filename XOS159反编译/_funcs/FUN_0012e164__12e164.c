// FUN_0012e164 @0x12e164


void FUN_0012e164(undefined8 param_1,undefined8 param_2)



{

  int iVar1;

  ulong uVar2;

  

  uVar2 = FUN_0012ec24();

  if (((uVar2 & 1) != 0) && (iVar1 = FUN_0012ec80(param_1), iVar1 != 0)) {

    FUN_0012ef0c(param_1);

    (*DAT_003e8568)(param_1,param_2);

    uVar2 = FUN_0012ec24();

    if ((uVar2 & 1) != 0) {

      iVar1 = FUN_0012ef88(param_1);

      if (iVar1 != 0) {

        FUN_0012f0a0(param_1,0);

      }

      FUN_0012ff80(param_1);

      return;

    }

    return;

  }

                    /* WARNING: Could not recover jumptable at 0x0012e1f0. Too many branches */

                    /* WARNING: Treating indirect jump as call */

  (*DAT_003e8568)(param_1,param_2);

  return;

}




