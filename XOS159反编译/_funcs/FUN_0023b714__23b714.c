// FUN_0023b714 @0x23b714


void FUN_0023b714(long param_1,int param_2)



{

  undefined **ppuVar1;

  undefined8 uVar2;

  undefined1 auVar3 [12];

  

  ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_003beef0;

  if (param_2 == 0) {

    ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_003beed8;

  }

  if ((param_1 < 0) || (auVar3 = FUN_00293860(ppuVar1), auVar3._0_8_ <= param_1)) {

    uVar2 = 0;

  }

  else {

    FUN_00299500(ppuVar1,auVar3._8_4_,param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

  }

  _objc_autoreleaseReturnValue(uVar2);

  return;

}




