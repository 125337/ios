// FUN_001aa024 @0x1aa024


undefined8 FUN_001aa024(long param_1,long param_2)



{

  long lVar1;

  ulong uVar2;

  undefined8 uVar3;

  

  _objc_retain();

  _objc_retain(param_2);

  if (((param_1 == param_2) || (lVar1 = FUN_002a4e60(param_1), lVar1 - 0x1352577U < 3)) ||

     ((DAT_003e9640 != 0 && (uVar2 = _objc_opt_isKindOfClass(param_1), (uVar2 & 1) != 0)))) {

    uVar3 = 1;

  }

  else {

    uVar3 = 0;

  }

  _objc_release(param_2);

  _objc_release(param_1);

  return uVar3;

}




