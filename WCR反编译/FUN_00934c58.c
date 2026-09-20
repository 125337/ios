// FUN_00934c58 @ 00934c58

void FUN_00934c58(char *param_1,char *param_2,char *param_3,char *param_4,void **param_5,int param_6
                 ,undefined4 param_7,int param_8)

{
  char *pcVar1;
  int iVar2;
  void **ppvVar3;
  long lVar4;
  char *local_a8;
  char *local_98;
  char *local_88;
  char *local_78;
  int local_68;
  int local_64;
  timeval local_58;
  int local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  void **local_38;
  char *local_30;
  char *local_28;
  char *local_20;
  char *local_18;
  
  if (DAT_028e2464 < 8) {
    DAT_028e2464 = DAT_028e2464 + 1;
    local_44 = param_8;
    local_40 = param_7;
    local_3c = param_6;
    local_38 = param_5;
    local_30 = param_4;
    local_28 = param_3;
    local_20 = param_2;
    local_18 = param_1;
    FUN_0093518c();
    local_48 = (int)param_1;
    if (-1 < local_48) {
      FUN_00935218((ulong)param_1 & 0xffffffff,"===== [wcr] ");
      if (local_18 == (char *)0x0) {
        local_78 = "Crash";
      }
      else {
        local_78 = local_18;
      }
      FUN_00935218(local_48,local_78);
      FUN_00935218(local_48," =====\n");
      _gettimeofday(&local_58,(void *)0x0);
      FUN_00935218(local_48,"time_unix: ");
      FUN_009352e4(local_48,local_58.tv_sec);
      FUN_00935218(local_48,".");
      lVar4 = (long)(local_58.tv_usec / 1000);
      if (lVar4 < 10) {
        FUN_00935218(lVar4 + -10,local_48,"00");
      }
      else if (lVar4 < 100) {
        FUN_00935218(lVar4 + -100,local_48,"0");
      }
      FUN_009352e4(local_48,lVar4);
      FUN_00935218(local_48,"\n");
      FUN_00935218(local_48,"name   : ");
      if (local_20 == (char *)0x0) {
        local_88 = "(nil)";
      }
      else {
        local_88 = local_20;
      }
      FUN_00935218(local_48,local_88);
      FUN_00935218(local_48,"\n");
      FUN_00935218(local_48,"reason : ");
      if (local_28 == (char *)0x0) {
        local_98 = "(nil)";
      }
      else {
        local_98 = local_28;
      }
      FUN_00935218(local_48,local_98);
      FUN_00935218(local_48,"\n");
      FUN_00935218(local_48,"thread : ");
      if (local_30 == (char *)0x0) {
        local_a8 = "(unknown)";
      }
      else {
        local_a8 = local_30;
      }
      FUN_00935218(local_48,local_a8);
      FUN_00935218(local_48,"\n");
      FUN_00935218(local_48,"wcr_in_stack: ");
      iVar2 = local_48;
      ppvVar3 = local_38;
      FUN_00934600(local_38,local_3c,local_40);
      pcVar1 = "yes\n";
      if (((ulong)ppvVar3 & 1) == 0) {
        pcVar1 = "no\n";
      }
      FUN_00935218(iVar2,pcVar1);
      if (DAT_028e2468 != '\0') {
        FUN_00935218(local_48,&DAT_028e2468);
        FUN_00935218(local_48,"\n");
      }
      FUN_00935378(local_48);
      FUN_009354ac(local_48);
      FUN_00935218(local_48,"backtrace:\n");
      if ((local_44 == 0) || (local_3c < 1)) {
        for (local_68 = 0; iVar2 = local_68 - local_3c, local_68 < local_3c; local_68 = local_68 + 1
            ) {
          FUN_00935664(local_48,local_68,local_38[local_68]);
        }
      }
      else {
        _backtrace_symbols_fd(local_38,local_3c,local_48);
        FUN_00935218(local_48,"\nResolvedBacktrace:\n");
        for (local_64 = 0; iVar2 = local_64 - local_3c, local_64 < local_3c; local_64 = local_64 + 1
            ) {
          FUN_00935664(local_48,local_64,local_38[local_64]);
        }
      }
      FUN_00935218(iVar2,local_48,"========================================\n\n");
      FUN_009356e4();
    }
  }
  return;
}

