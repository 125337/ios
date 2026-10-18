// FUN_000b9f2c @0xb9f2c


void FUN_000b9f2c(long param_1)



{

  int iVar1;

  undefined8 uVar2;

  ulong uVar3;

  

  uVar2 = _objc_loadWeakRetained(param_1 + 0x20);

  uVar3 = FUN_000b9ffc();

  if ((uVar3 & 1) == 0) {

    FUN_000b6b34(uVar2);

    FUN_000b6d90(uVar2);

  }

  else {

    FUN_000ba114(uVar2);

    iVar1 = FUN_000a89d8();

    if (iVar1 == 0) {

      uVar3 = 1;

    }

    else {

      uVar3 = FUN_000ba260(uVar2);

    }

    FUN_0029ff40(uVar2);

    FUN_00297ee0(uVar2);

    FUN_000b7b78(uVar2);

    if ((uVar3 & 1) == 0) {

      FUN_000b6b34(uVar2);

    }

    else {

      FUN_000ba464(uVar2);

    }

    FUN_000b6d90(uVar2);

  }

  _objc_release(uVar2);

  return;

}




