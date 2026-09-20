// FUN_010de0dc @ 010de0dc

void FUN_010de0dc(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                 undefined8 param_6,undefined1 *param_7)

{
  long lVar1;
  long lVar2;
  undefined8 local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_50 = 0;
  local_48 = param_1;
  local_40 = param_5;
  local_38 = param_6;
  local_30 = param_3;
  local_28 = param_4;
  _objc_storeStrong(&local_50);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + 1;
  local_20 = local_30;
  local_18 = local_28;
  *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = local_30 + local_28;
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18);
  lVar2 = lVar1 + -2;
  if (1 < lVar1) {
    lVar2 = 1;
    *param_7 = 1;
  }
  _objc_storeStrong(lVar2,&local_50,0);
  return;
}

