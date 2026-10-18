// FUN_002010e8 @0x2010e8


void FUN_002010e8(undefined8 param_1,undefined8 param_2)



{

  int iVar1;

  ulong uVar2;

  undefined1 auVar3 [16];

  

  FUN_00217b94();

  (*DAT_003eab60)(param_1,param_2);

  uVar2 = FUN_00217a98(param_1);

  if (((uVar2 & 1) == 0) && (iVar1 = FUN_00217d64(param_1), iVar1 != 0)) {

    FUN_00217f1c(param_1);

    FUN_0029b9c0(param_1);

    auVar3 = _objc_retainAutoreleasedReturnValue();

    iVar1 = FUN_00297820(auVar3._0_8_,auVar3._8_8_,&cf_XZYCLGDividerCell);

    _objc_release(auVar3._0_8_);

    if (iVar1 != 0) {

      FUN_002186e0(param_1);

      return;

    }

  }

  return;

}




