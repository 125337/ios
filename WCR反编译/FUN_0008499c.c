// FUN_0008499c @ 0008499c

void FUN_0008499c(byte param_1,undefined1 param_2,byte param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined4 *param_7,undefined8 *param_8,
                 undefined8 *param_9,undefined8 *param_10)

{
  undefined8 uVar1;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined4 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  byte local_13;
  undefined1 local_12;
  byte local_11;
  
  local_48 = param_9;
  local_50 = param_10;
  local_58 = 0;
  local_60 = 0;
  local_40 = param_8;
  local_38 = param_7;
  local_30 = param_6;
  local_28 = param_5;
  local_20 = param_4;
  local_13 = param_3;
  local_12 = param_2;
  local_11 = param_1;
  if ((param_1 & 1) == 0) {
    _objc_storeStrong(&local_58,DAT_028c7d08);
    _objc_storeStrong(&local_60,DAT_028c7d10);
    local_68 = DAT_028c7e80;
    local_6c = DAT_028c7e98;
    local_78 = DAT_028c7ea8;
    local_80 = DAT_028c7eb0;
    local_88 = DAT_028c7eb8;
  }
  else if ((DAT_028c7e7b & 1) == 0) {
    _objc_storeStrong(&local_58,DAT_028c7d18);
    _objc_storeStrong(&local_60,DAT_028c7d20);
    local_68 = DAT_028c7e88;
    local_6c = DAT_028c7e9c;
    local_78 = DAT_028c7ec0;
    local_80 = DAT_028c7ec8;
    local_88 = DAT_028c7ed0;
  }
  else {
    if ((param_3 & 1) == 0) {
      local_90 = &DAT_028c7d18;
    }
    else {
      local_90 = &DAT_028c7d28;
    }
    _objc_storeStrong(&local_58,*local_90);
    if ((local_13 & 1) == 0) {
      local_98 = &DAT_028c7d20;
    }
    else {
      local_98 = &DAT_028c7d30;
    }
    _objc_storeStrong(&local_60,*local_98);
    if ((local_13 & 1) == 0) {
      local_a0 = DAT_028c7e88;
    }
    else {
      local_a0 = DAT_028c7e90;
    }
    local_68 = local_a0;
    if ((local_13 & 1) == 0) {
      local_a4 = DAT_028c7e9c;
    }
    else {
      local_a4 = DAT_028c7ea0;
    }
    local_6c = local_a4;
    if ((local_13 & 1) == 0) {
      local_b0 = DAT_028c7ec0;
    }
    else {
      local_b0 = DAT_028c7ed8;
    }
    local_78 = local_b0;
    if ((local_13 & 1) == 0) {
      local_b8 = DAT_028c7ec8;
    }
    else {
      local_b8 = DAT_028c7ee0;
    }
    local_80 = local_b8;
    if ((local_13 & 1) == 0) {
      local_c0 = DAT_028c7ed0;
    }
    else {
      local_c0 = DAT_028c7ee8;
    }
    local_88 = local_c0;
  }
  uVar1 = local_58;
  if (local_20 != (undefined8 *)0x0) {
    _objc_retainAutorelease();
    *local_20 = uVar1;
  }
  uVar1 = local_60;
  if (local_28 != (undefined8 *)0x0) {
    _objc_retainAutorelease();
    *local_28 = uVar1;
  }
  if (local_30 != (undefined8 *)0x0) {
    *local_30 = local_68;
  }
  if (local_38 != (undefined4 *)0x0) {
    *local_38 = local_6c;
  }
  if (local_40 != (undefined8 *)0x0) {
    *local_40 = local_78;
  }
  if (local_48 != (undefined8 *)0x0) {
    *local_48 = local_80;
  }
  if (local_50 != (undefined8 *)0x0) {
    *local_50 = local_88;
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  return;
}

