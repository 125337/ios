// FUN_002f4ff0 @ 002f4ff0

void FUN_002f4ff0(long param_1)

{
  long lVar1;
  long local_28;
  long local_20;
  long local_18;
  
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
    local_20 = param_1;
    local_18 = param_1;
    FUN_002f4a20();
    _objc_retainAutoreleasedReturnValue();
    local_28 = lVar1;
    if (((DAT_028c9a20 & 1) == 0) && (lVar1 != 0)) {
      if (lVar1 != *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28)) {
        *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
      }
      _objc_storeStrong(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28,lVar1);
    }
    _objc_storeStrong(&local_28,0);
  }
  return;
}

