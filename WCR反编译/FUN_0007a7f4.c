// FUN_0007a7f4 @ 0007a7f4

byte FUN_0007a7f4(undefined8 param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if (local_20 == 0) {
    local_11 = 0;
  }
  else {
    if ((param_3 & 1) != 0) {
      uVar1 = local_20;
      FUN_0007b5e0(local_20,local_28);
      if ((uVar1 & 1) == 0) {
        if (local_28 != 0) {
          uVar1 = local_28;
          FUN_0007ba68(DAT_02323cc0);
          if ((uVar1 & 1) != 0) {
            FUN_0007bc8c(local_28);
          }
        }
        local_11 = 0;
        goto LAB_0007a92c;
      }
    }
    local_11 = 1;
  }
LAB_0007a92c:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

