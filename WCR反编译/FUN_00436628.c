// FUN_00436628 @ 00436628

void FUN_00436628(undefined8 param_1,undefined8 param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  pcVar1 = DAT_028ca960;
  uVar2 = (ulong)param_3;
  FUN_00437c38(uVar2);
  (*pcVar1)(param_1,param_2,uVar2);
  return;
}

