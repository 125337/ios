// FUN_002c85b0 @ 002c85b0

void FUN_002c85b0(ulong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  double dVar4;
  double local_40;
  
  uVar2 = (undefined4)(param_1 >> 0x20);
  uVar1 = (undefined4)param_1;
  FUN_002c7638();
  lVar3 = CONCAT44(uVar2,uVar1);
  if ((param_1 & 1) == 0 && lVar3 != 0) {
    lVar3 = lVar3 + -1;
    local_40 = 24.0;
    if (lVar3 != 0) {
      local_40 = DAT_02323f70;
    }
  }
  else {
    local_40 = 22.0;
    if (lVar3 != 0) {
      local_40 = 26.0;
    }
  }
  dVar4 = local_40;
  FUN_002c8de8(lVar3);
  FUN_002adba4(local_40 + dVar4,0x4024000000000000,0x4048000000000000);
  return;
}

