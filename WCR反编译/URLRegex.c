// URLRegex @ 01016580

/* Function Stack Size: 0x10 bytes */

ID WCRefineLinkParser::URLRegex(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e3168;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02584550);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  IVar1 = DAT_028e3160;
  _objc_retainAutoreleaseReturnValue();
  return IVar1;
}

