// FUN_00261428 @ 00261428

void FUN_00261428(ulong param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  (*DAT_028c94a8)(param_1,param_2,param_3 & 1);
  FUN_00264438();
  if ((uVar1 & 1) != 0) {
    FUN_00266860(param_1,&cf_viewDidAppear);
  }
  return;
}

