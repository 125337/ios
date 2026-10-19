// forwardingTargetForSelector: @0x9ca68

/* Function Stack Size: 0x18 bytes */

ID _YYImageWeakProxy::forwardingTargetForSelector_(ID param_1,SEL param_2,SEL param_3)

{
  ID IVar1;
  
  _objc_loadWeakRetained(param_1 + (long)_target);
  IVar1 = _objc_autoreleaseReturnValue();
  return IVar1;
}

