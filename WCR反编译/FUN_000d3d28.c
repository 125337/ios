// FUN_000d3d28 @ 000d3d28

byte FUN_000d3d28(ulong param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined1 local_11;
  
  uVar2 = param_1;
  FUN_000d8808();
  bVar1 = false;
  if ((uVar2 & 1) != 0) {
    uVar2 = param_1;
    FUN_000d88a4();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = uVar2 != 0;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  if (bVar1) {
    local_11 = 1;
  }
  else {
    (*DAT_028c82a0)(param_1,param_2);
    local_11 = (byte)param_1 & 1;
  }
  return local_11;
}

