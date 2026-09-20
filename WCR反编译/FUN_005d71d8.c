// FUN_005d71d8 @ 005d71d8

void FUN_005d71d8(long param_1)

{
  if ((*(long *)(param_1 + 0x20) != 0) && (*(long *)(param_1 + 0x28) != 0)) {
    _WCRefineForwardMomentToChatFromCellView
              (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  }
  return;
}

