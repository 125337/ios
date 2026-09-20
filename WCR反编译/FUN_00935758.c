// FUN_00935758 @ 00935758

void FUN_00935758(void)

{
  uint uVar1;
  mach_msg_return_t mVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  char acStack_780 [64];
  char acStack_740 [192];
  undefined1 auStack_680 [512];
  mach_msg_header_t mStack_480;
  uint local_464;
  uint local_444;
  undefined8 local_430;
  undefined8 local_28;
  
  local_28 = *(undefined8 *)PTR____stack_chk_guard_02578670;
  _pthread_setname_np("wcr.crash.mach");
  DAT_028e2770 = _mach_thread_self();
  while( true ) {
    do {
      _bzero(&mStack_480,0x458);
      mVar2 = _mach_msg(&mStack_480,6,0,0x458,DAT_028e2768,0,0);
      uVar1 = local_464;
    } while (mVar2 != 0);
    if (local_464 - DAT_028e2770 == 0) break;
    uVar5 = 0;
    _OSAtomicCompareAndSwap32(local_464 - DAT_028e2770,0,1,&DAT_028cf3b0);
    if ((uVar5 & 1) != 0) {
      _bzero(auStack_680,0x200);
      uVar3 = uVar1;
      FUN_009359ac(uVar1,auStack_680,0x40);
      uVar8 = local_430;
      uVar4 = _getpid();
      uVar5 = (ulong)uVar4;
      _snprintf(acStack_740,0xc0,"code0=0x%llx code1=0x%llx pid=%d");
      uVar7 = (ulong)uVar1;
      _snprintf(acStack_780,0x40,"mach_thread=0x%x");
      uVar6 = (ulong)local_444;
      FUN_00935c4c(uVar6);
      FUN_00934c58("MachException",uVar6,acStack_740,acStack_780,auStack_680,uVar3,0,0,uVar7,uVar8,
                   uVar5);
    }
    FUN_00935908(&mStack_480);
  }
  FUN_00935908(&mStack_480);
                    /* WARNING: Subroutine does not return */
  __exit(6);
}

