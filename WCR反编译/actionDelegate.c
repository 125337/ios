// actionDelegate @ 01eb0f60

/* Function Stack Size: 0x10 bytes */

ID WCRefineToDoCell::actionDelegate(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1 + (long)_actionDelegate;
  _objc_loadWeakRetained();
  _objc_autoreleaseReturnValue();
  return IVar1;
}

