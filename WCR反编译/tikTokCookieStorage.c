// tikTokCookieStorage @ 0101811c

/* Function Stack Size: 0x10 bytes */

ID WCRefineLinkParser::tikTokCookieStorage(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e3198;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_025845b0);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  IVar1 = DAT_028e3190;
  _objc_retainAutoreleaseReturnValue();
  return IVar1;
}

