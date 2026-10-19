// ___36-[WCMFeedController_saveHeaderText:]_block_invoke @0x5094c

void ___36__WCMFeedController_saveHeaderText___block_invoke
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined1 *param_7)

{
  ulong uVar1;
  long lVar2;
  undefined8 local_70;
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
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(ulong *)(lVar2 + 0x18);
  *(ulong *)(lVar2 + 0x18) = uVar1 + 1;
  if (uVar1 < 0xc) {
    _objc_msgSend_appendString_(*(undefined8 *)(param_1 + 0x20),local_70,local_40);
  }
  else {
    *param_7 = 1;
  }
  _objc_storeStrong(&local_40,0);
  return;
}

