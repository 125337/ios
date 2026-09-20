// FUN_0092fe18 @ 0092fe18

void FUN_0092fe18(void)

{
  int iVar1;
  __sigaction_u local_60;
  undefined8 local_58;
  int local_4c;
  ulong local_48;
  byte local_39;
  sigaction local_38;
  stack_t local_28;
  
  local_28.ss_sp = &DAT_028d23d4;
  local_28.ss_size = 0x10000;
  local_28.ss_flags = 0;
  local_28._20_4_ = 0;
  iVar1 = _sigaltstack(&local_28,(stack_t *)0x0);
  local_39 = (byte)iVar1;
  local_38.__sigaction_u.__sa_handler = FUN_00934918;
  local_38.sa_mask = 0xffffffff;
  local_38.sa_flags = 0x41;
  FUN_00934ab4();
  for (local_48 = 0; local_48 < 7; local_48 = local_48 + 1) {
    local_4c = *(int *)(&DAT_023243a0 + local_48 * 4);
    if (((local_39 & 1) == 0) || (local_4c != 5)) {
      local_60.__sa_handler = (_func_333 *)0x0;
      local_58 = 0;
      _sigaction(local_4c,(sigaction *)0x0,(sigaction *)&local_60);
      if (local_60.__sa_handler != FUN_00934918) {
        _sigaction(local_4c,&local_38,(sigaction *)(local_48 * 0x10 + 0x28e23d8));
        *(undefined4 *)(&DAT_028e2448 + local_48 * 4) = 1;
      }
    }
  }
  return;
}

