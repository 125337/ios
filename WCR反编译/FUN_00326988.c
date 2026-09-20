// FUN_00326988 @ 00326988

void FUN_00326988(undefined8 param_1,undefined8 param_2,ulong *param_3,ulong *param_4)

{
  long lVar1;
  ulong uVar2;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  undefined8 local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_38 = 0x7fffffffffffffff;
  local_40 = 0x7fffffffffffffff;
  local_48 = 0;
  while( true ) {
    lVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_count_0269cfe0);
    if (lVar1 <= (long)local_48) break;
    uVar2 = local_48;
    FUN_00327118(local_48 - lVar1,local_48,local_20);
    if ((uVar2 & 1) == 0) {
      if (local_38 == 0x7fffffffffffffff) {
        local_38 = local_48;
      }
      local_40 = local_48;
    }
    local_48 = local_48 + 1;
  }
  if (param_3 != (ulong *)0x0) {
    *param_3 = local_38;
  }
  if (param_4 != (ulong *)0x0) {
    *param_4 = local_40;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

