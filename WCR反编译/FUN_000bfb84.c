// FUN_000bfb84 @ 000bfb84

void FUN_000bfb84(ulong param_1,undefined8 param_2,byte param_3,byte param_4)

{
  ulong uVar1;
  
  uVar1 = param_1;
  (*DAT_028c80f8)(param_1,param_2,param_3 & 1,param_4 & 1);
  FUN_000bfbf8();
  if ((uVar1 & 1) != 0) {
    FUN_000bfc1c(param_1,&cf_setSelected);
  }
  return;
}

