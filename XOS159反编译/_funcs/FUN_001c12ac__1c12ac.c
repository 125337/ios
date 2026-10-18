// FUN_001c12ac @0x1c12ac


void FUN_001c12ac(void)



{

  undefined8 uVar1;

  int iVar2;

  undefined8 extraout_x1;

  long local_28;

  

  uVar1 = DAT_003e97a0;

  DAT_003e97c0 = 0;

  DAT_003e97a0 = 0;

  _objc_release(uVar1);

  iVar2 = FUN_001c0f98();

  if (iVar2 != 0) {

    local_28 = 0;

    FUN_002a4140(DAT_003e9798,extraout_x1,&local_28);

    DAT_003e97c0 = local_28 == 0;

  }

  return;

}




