// FUN_00752ec4 @ 00752ec4

void FUN_00752ec4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined1 *param_7)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_40 = 0;
  local_38 = param_1;
  local_30 = param_5;
  local_28 = param_6;
  local_20 = param_3;
  local_18 = param_4;
  _objc_storeStrong(&local_40);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + 1;
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) -
          (*(long *)(param_1 + 0x30) + 1);
  if (lVar1 == 0) {
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = local_20;
    lVar1 = 1;
    *param_7 = 1;
  }
  _objc_storeStrong(lVar1,&local_40,0);
  return;
}

