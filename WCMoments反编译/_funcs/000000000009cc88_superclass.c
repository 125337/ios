// superclass @0x9cc88

/* Function Stack Size: 0x10 bytes */

CLASS _YYImageWeakProxy::superclass(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  CLASS CVar3;
  undefined8 local_38;
  
  uVar1 = _objc_loadWeakRetained(param_1 + (long)_target);
  _objc_msgSend_superclass(uVar1,local_38);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar1);
  CVar3 = _objc_autoreleaseReturnValue(uVar2);
  return CVar3;
}

