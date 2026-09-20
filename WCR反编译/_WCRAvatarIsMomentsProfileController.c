// _WCRAvatarIsMomentsProfileController @ 00938770

uint _WCRAvatarIsMomentsProfileController(undefined8 param_1)

{
  ulong uVar1;
  uint local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  _WCRAvatarViewControllerHierarchyContainsClassName(local_18,&cf_WCTimeLineViewController);
  local_1c = 1;
  if ((uVar1 & 1) == 0) {
    uVar1 = local_18;
    _WCRAvatarViewControllerHierarchyContainsClassName(local_18,&cf_WCListViewController);
    local_1c = (uint)uVar1;
  }
  _objc_storeStrong(&local_18,0);
  return local_1c & 1;
}

