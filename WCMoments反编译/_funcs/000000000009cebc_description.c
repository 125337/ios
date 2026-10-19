// description @0x9cebc

/* Function Stack Size: 0x10 bytes */

ID _YYImageWeakProxy::description(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 local_38;
  
  uVar1 = _objc_loadWeakRetained(param_1 + (long)_target);
  _objc_msgSend_description(uVar1,local_38);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar1);
  IVar3 = _objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}

