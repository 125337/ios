// FUN_00616084 @ 00616084

ulong FUN_00616084(undefined8 param_1)

{
  objc_object *poVar1;
  objc_object *local_18;
  
  local_18 = (objc_object *)0x0;
  _objc_storeStrong(&local_18,param_1);
  poVar1 = local_18;
  WCRefineNavApplyOpenSmallTailPruneIfNeeded(local_18);
  _objc_storeStrong(&local_18,0);
  return (ulong)poVar1 & 0xffffffff;
}

