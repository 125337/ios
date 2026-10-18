// FUN_00192218 @0x192218


bool FUN_00192218(int param_1)



{

  long *plVar1;

  

  FUN_0018da3c();

  plVar1 = &DAT_003e95b0;

  if (param_1 == 0) {

    plVar1 = &DAT_003e95b8;

  }

  return *plVar1 == 2;

}




