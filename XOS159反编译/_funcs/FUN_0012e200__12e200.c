// FUN_0012e200 @0x12e200


void FUN_0012e200(undefined8 param_1,undefined8 param_2)



{

  int iVar1;

  int iVar2;

  

  iVar1 = FUN_0012ec80();

  FUN_0012ef0c(param_1);

  (*DAT_003e8570)(param_1,param_2);

  iVar2 = FUN_0012ec24();

  if (iVar2 == 0) {

    return;

  }

  if (iVar1 != 0) {

    iVar1 = FUN_0012ef88(param_1);

    if (iVar1 != 0) {

      FUN_0012f0a0(param_1,0);

    }

    FUN_0012ff80(param_1);

    return;

  }

  FUN_0012f0a0(param_1,0);

  return;

}




