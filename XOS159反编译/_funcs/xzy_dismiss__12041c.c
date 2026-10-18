// xzy_dismiss @0x12041c


/* Function Stack Size: 0x10 bytes */



void XZYHomeNPPickerVC::xzy_dismiss(ID param_1,SEL param_2)



{

  long lVar1;

  undefined8 uVar2;

  

  FUN_00294700(param_1,param_2,1,0);

  FUN_00298820(param_1);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar1 != 0) {

    FUN_00298820(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b140();

    _objc_release(uVar2);

    return;

  }

  return;

}




