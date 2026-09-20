// FUN_006b2d70 @ 006b2d70

ulong FUN_006b2d70(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong local_80;
  ulong local_50;
  long local_48;
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_38 = 0;
  local_30 = param_3;
  _objc_storeStrong(&local_38,param_4);
  if (DAT_028cc020 == (code *)0x0) {
    local_80 = 0;
  }
  else {
    local_80 = local_20;
    (*DAT_028cc020)(local_20,PTR_s_getSessionUserCountForQuery_task_026a67e8,local_28,local_38);
  }
  local_48 = 0;
  local_50 = 0;
  do {
    if (local_80 <= local_50) {
      local_18 = 0x7fffffffffffffff;
LAB_006b2eb0:
      _objc_storeStrong(&local_38);
      _objc_storeStrong(&local_28,0);
      _objc_storeStrong(&local_20,0);
      return local_18;
    }
    uVar1 = local_20;
    FUN_006b2ee8(local_50 - local_80,local_20,local_28,local_50,local_38);
    if ((uVar1 & 1) == 0) {
      if (local_48 == local_30) {
        local_18 = local_50;
        goto LAB_006b2eb0;
      }
      local_48 = local_48 + 1;
    }
    local_50 = local_50 + 1;
  } while( true );
}

