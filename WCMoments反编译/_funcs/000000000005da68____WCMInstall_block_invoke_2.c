// ___WCMInstall_block_invoke_2 @0x5da68

void ___WCMInstall_block_invoke_2(long param_1)

{
  ulong uVar1;
  byte bVar2;
  undefined1 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 local_38;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) & 1) == 0) {
    uVar3 = _Install();
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = uVar3;
  }
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) & 1) == 0) {
    uVar3 = _RegisterPlugin();
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar3;
  }
  if (((*(byte *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) & 1) == 0) ||
     (bVar2 = *(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18), uVar4 = (ulong)bVar2,
     (bVar2 & 1) == 0)) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    lVar5 = *(long *)(lVar6 + 0x18);
    uVar1 = lVar5 + 1;
    *(ulong *)(lVar6 + 0x18) = uVar1;
    uVar4 = lVar5 - 0x1d;
    if (uVar1 < 0x1e) goto LAB_0005db54;
  }
  _objc_msgSend_invalidate(uVar4,local_20,local_38);
LAB_0005db54:
  _objc_storeStrong(&local_20,0);
  return;
}

