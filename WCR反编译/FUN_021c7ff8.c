// FUN_021c7ff8 @ 021c7ff8

void FUN_021c7ff8(undefined8 *param_1)

{
  if ((*(uint *)(*(long *)(param_1[3] + -8) + 0x50) >> 0x11 & 1) == 0) {
    (**(code **)(*(long *)(param_1[3] + -8) + 8))(param_1);
    return;
  }
  _swift_release(*param_1);
  return;
}

