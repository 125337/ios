// _WCRAvatarIsFriendProfileController @ 00938714

ulong _WCRAvatarIsFriendProfileController(undefined8 param_1)

{
  ulong uVar1;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  _WCRAvatarViewControllerHierarchyContainsClassName(local_18,&cf_ContactInfoViewController);
  _objc_storeStrong(&local_18,0);
  return uVar1 & 0xffffffff;
}

