// FUN_0018b268 @ 0018b268

void FUN_0018b268(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar3;
  long local_40;
  undefined4 local_38;
  long local_28;
  long local_20;
  long local_18;
  long *plVar2;
  
  plVar2 = &local_18;
  local_18 = 0;
  _objc_storeStrong(plVar2,param_1);
  uVar1 = (uint)plVar2;
  local_28 = param_3;
  local_20 = param_2;
  if ((((local_18 == 0) || (param_2 < 0)) || (param_3 < 1)) ||
     (FUN_0018b0b8(param_3), (uVar1 & 1) == 0)) {
    local_38 = 1;
  }
  else {
    lVar3 = local_18;
    FUN_0018a9d0(local_18,1);
    _objc_retainAutoreleasedReturnValue();
    local_40 = lVar3;
    FUN_0018c110(local_18,local_20,local_28,lVar3);
    _objc_storeStrong(&local_40,0);
    local_38 = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

