// FUN_00934918 @ 00934918

void FUN_00934918(uint param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  pthread_t p_Var5;
  ulong uVar6;
  ulong uVar7;
  uint local_304;
  undefined8 local_2f8;
  char *local_2f0;
  char acStack_2c8 [160];
  void *apvStack_228 [64];
  undefined8 local_28;
  
  local_28 = *(undefined8 *)PTR____stack_chk_guard_02578670;
  uVar4 = 0;
  _OSAtomicCompareAndSwap32(0,1,&DAT_028cf3b0);
  if ((uVar4 & 1) != 0) {
    iVar1 = _backtrace(apvStack_228,0x40);
    if (param_2 == 0) {
      local_2f8 = 0;
      local_304 = 0;
    }
    else {
      local_2f8 = *(undefined8 *)(param_2 + 0x18);
      local_304 = *(uint *)(param_2 + 8);
    }
    uVar2 = _getpid();
    uVar4 = (ulong)uVar2;
    uVar7 = (ulong)local_304;
    _snprintf(acStack_2c8,0xa0,"si_addr=%p si_code=%d pid=%d");
    local_2f0 = "bg";
    if (DAT_028d23c8 != (pthread_t)0x0) {
      p_Var5 = _pthread_self();
      iVar3 = _pthread_equal(p_Var5,DAT_028d23c8);
      if (iVar3 != 0) {
        local_2f0 = "main";
      }
    }
    uVar6 = (ulong)param_1;
    FUN_00935084(uVar6);
    FUN_00934c58("POSIXSignal",uVar6,acStack_2c8,local_2f0,apvStack_228,iVar1,2,1,local_2f8,uVar7,
                 uVar4);
    FUN_00934ba8(param_1);
    _raise(param_1);
                    /* WARNING: Subroutine does not return */
    __exit(param_1 + 0x80);
  }
  FUN_00934ba8(param_1);
  _raise(param_1);
                    /* WARNING: Subroutine does not return */
  __exit(param_1 + 0x80);
}

