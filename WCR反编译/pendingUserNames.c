// pendingUserNames @ 00f751ec

/* Function Stack Size: 0x10 bytes */

ID WCRefineFriendRelationChecker::pendingUserNames(ID param_1,SEL param_2)

{
  undefined8 local_20;
  
  local_20 = *(ID *)(param_1 + 0x10);
  if (local_20 == 0) {
    local_20 = *(ID *)PTR____NSArray0___02578280;
  }
  _objc_retainAutoreleaseReturnValue();
  return local_20;
}

