// FUN_016a8290 @ 016a8290

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016a8290(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong local_108;
  int local_cc;
  undefined8 local_b8;
  ulong local_b0;
  ulong local_a8;
  undefined8 local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  undefined8 *local_68;
  ulong local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulong local_40;
  long local_38;
  long local_30;
  ulong local_28;
  
  local_48 = 0;
  _objc_storeStrong(&local_48,param_1);
  puVar1 = &local_50;
  local_50 = 0;
  _objc_storeStrong(puVar1,param_2);
  local_60 = param_4;
  local_58 = param_3;
  FUN_016a8968();
  _objc_retainAutoreleasedReturnValue();
  local_80 = 0;
  local_68 = puVar1;
  do {
    if (local_60 <= local_80) {
      _objc_storeStrong(local_80 - local_60,&local_68);
      _objc_storeStrong(&local_50,0);
      _objc_storeStrong(&local_48,0);
      return;
    }
    local_a8 = local_60 - local_80;
    local_90 = 1;
    local_a0 = 4;
    local_108 = local_a8;
    if (4 < local_a8) {
      local_108 = 4;
    }
    local_b0 = local_108;
    local_98 = local_108;
    local_88 = local_a8;
    do {
      if (local_98 < 2) break;
      local_38 = local_58 + local_80;
      local_40 = local_98;
      local_28 = local_98;
      uVar2 = local_50;
      local_30 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_substringWithRange__0269d138,local_38,local_98);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_68;
      local_b8 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_containsObject__0269cbb8,uVar2);
      if (((ulong)puVar1 & 1) == 0) {
        local_98 = local_98 - 1;
        local_cc = 0;
      }
      else {
        local_90 = local_98;
        local_cc = 5;
      }
      _objc_storeStrong(&local_b8,0);
    } while (local_cc == 0);
    FUN_016a8588(local_48,local_50,local_58 + local_80,local_90);
    local_80 = local_80 + local_90;
  } while( true );
}

