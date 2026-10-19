// target @0x6ccc

/* Function Stack Size: 0x10 bytes */

ID WCMWeakHandler::target(ID param_1,SEL param_2)

{
  ID IVar1;
  
  _objc_loadWeakRetained(param_1 + 8);
  IVar1 = _objc_autoreleaseReturnValue();
  return IVar1;
}

