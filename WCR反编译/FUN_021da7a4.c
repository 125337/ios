// FUN_021da7a4 @ 021da7a4

void FUN_021da7a4(ulong param_1,undefined8 param_2,long param_3)

{
  undefined8 local_b8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  FUN_021cf8f4();
  if ((param_1 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)(param_3);
    if (param_3 != 0) {
      local_68 = 0x3ff0000000000000;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0x3ff0000000000000;
      local_48 = 0;
      local_40 = 0;
      FUN_02223680(param_3,local_b8,&local_68);
      (*(code *)PTR__objc_release_02578630)(param_3);
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)(param_2);
    local_98 = 0x3ff0000000000000;
    local_90 = 0;
    local_88 = 0;
    local_80 = 0x3ff0000000000000;
    local_78 = 0;
    local_70 = 0;
    FUN_02223680(param_2,local_b8,&local_98);
    (*(code *)PTR__objc_release_02578630)(param_2);
  }
  FUN_021da8d4(param_2);
  return;
}

