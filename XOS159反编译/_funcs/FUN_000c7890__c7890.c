// FUN_000c7890 @0xc7890


void FUN_000c7890(undefined8 param_1)



{

  byte bVar1;

  int iVar2;

  

  (*DAT_003e7cd0)();

  if (DAT_003e7d10 == '\x01') {

    iVar2 = FUN_000c849c(param_1);

    bVar1 = DAT_003e7d17;

    if (iVar2 == 0) {

      iVar2 = FUN_000c93cc(param_1);

      if (iVar2 == 0) {

        return;

      }

      bVar1 = FUN_000c94e4(param_1);

    }

  }

  else {

    bVar1 = 0;

  }

  FUN_000c89a8(param_1,bVar1 & 1);

  return;

}




