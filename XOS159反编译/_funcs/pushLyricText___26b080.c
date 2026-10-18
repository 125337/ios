// pushLyricText: @0x26b080


/* Function Stack Size: 0x18 bytes */



void XZYDockPlayerEngine::pushLyricText_(ID param_1,SEL param_2,ID param_3)



{

  int iVar1;

  undefined8 uVar2;

  

  _objc_retain(param_3);

  uVar2 = *(undefined8 *)(param_1 + 0x28);

  *(undefined8 *)(param_1 + 0x28) = 0;

  _objc_release(uVar2);

  iVar1 = FUN_001c4780();

  if (iVar1 != 0) {

    FUN_001c3d54(param_3);

  }

  _objc_release(param_3);

  return;

}




