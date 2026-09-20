// FUN_000bfae8 @ 000bfae8

void FUN_000bfae8(ulong param_1,undefined8 param_2,byte param_3,byte param_4)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_000bfbf8();
  if ((uVar1 & 1) == 0) {
    (*DAT_028c80f0)(param_1,param_2,param_3 & 1,param_4 & 1);
  }
  else {
    (*DAT_028c80f0)(param_1,param_2,0,param_4 & 1);
    FUN_000bfc1c(param_1,&cf_setHighlighted);
  }
  return;
}

