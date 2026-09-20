// toggleSwitchForKey:storage: @ 017918a4

/* Function Stack Size: 0x20 bytes */

bool WCRefinePluginHubManager::toggleSwitchForKey_storage_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  uVar2 = local_28;
  FUN_017892e0(local_28,local_30);
  bVar1 = ((byte)uVar2 ^ 1) & 1;
  FUN_017888a0(local_28,local_30,bVar1);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return (uint)bVar1;
}

