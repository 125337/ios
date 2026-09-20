// FUN_00934ba8 @ 00934ba8

void FUN_00934ba8(int param_1)

{
  ulong local_20;
  
  local_20 = 0;
  while( true ) {
    if (6 < local_20) {
      _signal(param_1);
      return;
    }
    if ((*(int *)(&DAT_023243a0 + local_20 * 4) == param_1) &&
       (*(int *)(&DAT_028e2448 + local_20 * 4) != 0)) break;
    local_20 = local_20 + 1;
  }
  _sigaction(param_1,(sigaction *)(local_20 * 0x10 + 0x28e23d8),(sigaction *)0x0);
  return;
}

