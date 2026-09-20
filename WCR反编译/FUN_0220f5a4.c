// FUN_0220f5a4 @ 0220f5a4

void FUN_0220f5a4(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  ulong local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  long local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  local_30 = 0;
  local_38 = 0;
  local_50 = *(long *)(param_3 + -8);
  local_70 = *(long *)(local_50 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_68 = param_1;
  local_60 = param_2;
  local_58 = param_4;
  local_40 = param_3;
  local_28 = param_3;
  (*(code *)PTR____chkstk_darwin_02578668)();
  local_48 = (long)&local_70 - local_70;
  local_30 = param_2;
  __ss3maxyxx_xtSLRzlF();
  lVar1 = 0;
  __sSNMa(0,local_40,local_58);
  __ss3minyxx_xtSLRzlF(local_68,local_48,local_60 + *(int *)(lVar1 + 0x24),local_40,local_58);
  (**(code **)(local_50 + 8))(local_48,local_40);
  return;
}

