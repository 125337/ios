// FUN_00186e58 @ 00186e58

ulong FUN_00186e58(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  undefined8 local_30;
  undefined8 local_28;
  ulong local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar3 = local_20;
  (*DAT_028c8950)(local_20,local_28,local_30,param_4);
  uVar4 = local_20;
  FUN_0018ad9c();
  local_18 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar4 = local_20;
    FUN_0018ae70(local_20,param_4,uVar3);
    uVar2 = (uint)uVar4;
    FUN_0018b0b8();
    if ((uVar2 & 1) != 0) {
      FUN_0018b268(local_20,param_4,uVar3);
      uVar4 = local_20;
      uVar1 = local_30;
      pcVar5 = &cf_mmtableView_cellForRowAtIndexPath_;
      _NSSelectorFromString();
      FUN_0018b3a0(uVar4,uVar1,param_4,uVar3,pcVar5);
    }
    uVar4 = local_20;
    FUN_0018b978(local_20,local_30,param_4,uVar3);
    FUN_0018b268(local_20,param_4,uVar3);
    uVar3 = local_20;
    FUN_0018be00(local_20,param_4,uVar4);
    local_18 = uVar3;
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}

