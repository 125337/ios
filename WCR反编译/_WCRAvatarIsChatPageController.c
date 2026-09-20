// _WCRAvatarIsChatPageController @ 0093863c

ulong _WCRAvatarIsChatPageController(undefined8 param_1)

{
  ulong uVar1;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  _WCRAvatarViewControllerHierarchyContainsClassName(local_18,&cf_BaseMsgContentViewController);
  _objc_storeStrong(&local_18,0);
  return uVar1 & 0xffffffff;
}

