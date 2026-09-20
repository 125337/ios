// FUN_008419cc @ 008419cc

void FUN_008419cc(ulong param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_00843e24();
  if ((uVar1 & 1) == 0) {
    FUN_00815824(param_1,0);
  }
  (*DAT_028cd310)(param_1,param_2,param_3 & 1);
  return;
}

