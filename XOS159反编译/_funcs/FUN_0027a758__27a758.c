// FUN_0027a758 @0x27a758


void FUN_0027a758(undefined8 param_1,undefined8 param_2,undefined8 param_3)



{

  undefined8 uVar1;

  undefined8 uVar2;

  

  _objc_retain(param_3);

  FUN_00297e40(param_2);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002773d0(param_1,uVar1,param_3);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(param_3);

  _objc_release(uVar1);

  _objc_autoreleaseReturnValue(uVar2);

  return;

}




