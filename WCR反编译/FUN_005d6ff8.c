// FUN_005d6ff8 @ 005d6ff8

void FUN_005d6ff8(long param_1)

{
  if ((*(long *)(param_1 + 0x20) != 0) && (*(long *)(param_1 + 0x28) != 0)) {
    _WCRefineForwardMomentFromCellView
              (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),0);
  }
  return;
}

