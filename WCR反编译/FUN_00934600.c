// FUN_00934600 @ 00934600

undefined1 FUN_00934600(long param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [8];
  long local_68;
  int local_4c;
  undefined1 auStack_48 [8];
  long local_40;
  int local_28;
  int local_24;
  long local_20;
  
  iVar1 = 0x92d880;
  local_28 = param_3;
  local_24 = param_2;
  local_20 = param_1;
  _dladdr(_WCRefineCrashReporterLogDirectory,auStack_48);
  if ((iVar1 != 0) && (local_40 != 0)) {
    for (local_4c = local_28; local_4c < local_24; local_4c = local_4c + 1) {
      if (*(long *)(local_20 + (long)local_4c * 8) != 0) {
        uVar2 = *(undefined8 *)(local_20 + (long)local_4c * 8);
        _dladdr(uVar2,auStack_70);
        if (((int)uVar2 != 0) && (local_68 == local_40)) {
          return 1;
        }
      }
    }
  }
  return 0;
}

