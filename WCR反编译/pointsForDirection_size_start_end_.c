// pointsForDirection:size:start:end: @ 00f8e2c8

/* Function Stack Size: 0x38 bytes */

void __thiscall
WCRefineGradientPalette::pointsForDirection_size_start_end_
          (WCRefineGradientPalette *this,ID param_1,SEL param_2,long_long param_3,CGSize param_4,
          CGPoint *param_5,CGPoint *param_6)

{
  double *pdVar1;
  double *pdVar2;
  double in_d0;
  double dVar3;
  double in_d1;
  double dVar4;
  long_long local_168;
  long_long local_160;
  
  pdVar2 = (double *)param_4.field1_0x8;
  pdVar1 = (double *)param_4.field0_0x0;
  if ((pdVar1 != (double *)0x0) && (pdVar2 != (double *)0x0)) {
    local_160 = param_3;
    if (5 < (long)param_3) {
      local_160 = 5;
    }
    if ((long)local_160 < 1) {
      local_168 = 0;
    }
    else {
      local_168 = local_160;
    }
    if (local_168 == 1) {
      dVar3 = in_d1 / 2.0;
      FUN_00f8e29c();
      pdVar1[1] = dVar3;
      *pdVar1 = in_d0;
      dVar4 = in_d1 / 2.0;
      dVar3 = 0.0;
      FUN_00f8e29c();
      pdVar2[1] = dVar4;
      *pdVar2 = dVar3;
    }
    else if (local_168 == 2) {
      dVar3 = in_d0 / 2.0;
      dVar4 = 0.0;
      FUN_00f8e29c();
      pdVar1[1] = dVar4;
      *pdVar1 = dVar3;
      dVar3 = in_d0 / 2.0;
      FUN_00f8e29c();
      pdVar2[1] = in_d1;
      *pdVar2 = dVar3;
    }
    else if (local_168 == 3) {
      dVar3 = in_d0 / 2.0;
      FUN_00f8e29c();
      pdVar1[1] = in_d1;
      *pdVar1 = dVar3;
      dVar3 = in_d0 / 2.0;
      dVar4 = 0.0;
      FUN_00f8e29c();
      pdVar2[1] = dVar4;
      *pdVar2 = dVar3;
    }
    else if (local_168 == 4) {
      dVar4 = 0.0;
      dVar3 = 0.0;
      FUN_00f8e29c();
      pdVar1[1] = dVar4;
      *pdVar1 = dVar3;
      FUN_00f8e29c();
      pdVar2[1] = in_d1;
      *pdVar2 = in_d0;
    }
    else if (local_168 == 5) {
      dVar4 = 0.0;
      FUN_00f8e29c();
      dVar3 = 0.0;
      pdVar1[1] = dVar4;
      *pdVar1 = in_d0;
      FUN_00f8e29c();
      pdVar2[1] = in_d1;
      *pdVar2 = dVar3;
    }
    else {
      dVar4 = in_d1 / 2.0;
      dVar3 = 0.0;
      FUN_00f8e29c();
      pdVar1[1] = dVar4;
      *pdVar1 = dVar3;
      dVar3 = in_d1 / 2.0;
      FUN_00f8e29c();
      pdVar2[1] = dVar3;
      *pdVar2 = in_d0;
    }
  }
  return;
}

