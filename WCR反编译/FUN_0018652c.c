// FUN_0018652c @ 0018652c

ulong FUN_0018652c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 local_30;
  undefined8 local_28;
  ulong local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar2 = local_20;
  (*DAT_028c8930)(local_20,local_28,local_30,param_4);
  uVar3 = local_20;
  FUN_0018ad9c();
  local_18 = uVar2;
  if ((uVar3 & 1) == 0) {
    uVar3 = local_20;
    FUN_0018ae70(local_20,param_4,uVar2);
    uVar1 = (uint)uVar3;
    FUN_0018b0b8();
    if ((uVar1 & 1) != 0) {
      FUN_0018b268(local_20,param_4,uVar2);
      FUN_0018b3a0(local_20,local_30,param_4,uVar2,PTR_s_tableView_cellForRowAtIndexPath__0269e790);
    }
    uVar3 = local_20;
    FUN_0018b978(local_20,local_30,param_4,uVar2);
    FUN_0018b268(local_20,param_4,uVar2);
    uVar2 = local_20;
    FUN_0018be00(local_20,param_4,uVar3);
    local_18 = uVar2;
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}

