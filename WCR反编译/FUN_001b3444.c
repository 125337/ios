// FUN_001b3444 @ 001b3444

void FUN_001b3444(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_58 [3];
  ulong local_40;
  int local_34;
  undefined8 local_30;
  long local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  if ((local_28 == 0x4e22) || (local_28 == 0x4e23)) {
    local_34 = 1;
  }
  else {
    if (local_28 == 0x4e21) {
      uVar1 = local_18;
      FUN_001b53c8(0);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_18;
      local_40 = uVar1;
      FUN_001b5998();
      _objc_retainAutoreleasedReturnValue();
      local_58[0] = uVar2;
      if (((local_40 == 0) ||
          (uVar1 = local_40, FUN_001b4a3c(local_40,PTR_s_isWeClawBot_0269ff48), (uVar1 & 1) != 0))
         || (uVar1 = local_40, FUN_001b86c8(local_40,local_58[0]), (uVar1 & 1) == 0)) {
        local_34 = 0;
      }
      else {
        FUN_001b5680(local_18);
        local_34 = 1;
      }
      _objc_storeStrong(local_58);
      _objc_storeStrong(&local_40,0);
      if (local_34 != 0) goto LAB_001b3608;
    }
    (*DAT_028c8ab0)(local_18,local_20,local_28,local_30);
    local_34 = 0;
  }
LAB_001b3608:
  _objc_storeStrong(&local_30,0);
  return;
}

