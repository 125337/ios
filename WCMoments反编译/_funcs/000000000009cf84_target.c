// target @0x9cf84

/* Function Stack Size: 0x10 bytes */

ID _YYImageWeakProxy::target(ID param_1,SEL param_2)

{
  ID IVar1;
  
  _objc_loadWeakRetained(param_1 + (long)_target);
  IVar1 = _objc_autoreleaseReturnValue();
  return IVar1;
}

