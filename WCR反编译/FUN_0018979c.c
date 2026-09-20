// FUN_0018979c @ 0018979c

byte FUN_0018979c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 *local_30;
  byte local_21;
  
  local_30 = (undefined8 *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  puVar1 = local_30;
  local_58 = param_6;
  local_50 = param_5;
  local_48 = param_4;
  local_40 = param_3;
  FUN_00189c3c(local_30,local_38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_60 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)puVar1 & 1) == 0) {
    local_21 = 0;
  }
  else {
    local_78 = 0;
    local_80 = 0;
    local_88 = 0;
    local_90 = 0;
    puVar3 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_getRed_green_blue_alpha__026ca660,&local_78,&local_80,&local_88,
               &local_90);
    puVar1 = local_60;
    if (((ulong)puVar3 & 1) == 0) {
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_CGColor_026ca470);
      if (puVar1 == (undefined8 *)0x0) {
        local_21 = 0;
      }
      else {
        puVar3 = puVar1;
        _CGColorGetNumberOfComponents();
        _CGColorGetComponents();
        if ((puVar1 == (undefined8 *)0x0) || (puVar3 == (undefined8 *)0x0)) {
          local_21 = 0;
        }
        else if (puVar3 < &MACH_HEADER.cputype) {
          if (puVar3 == (undefined8 *)((long)&MACH_HEADER.magic + 2)) {
            if (local_40 != (undefined8 *)0x0) {
              *local_40 = *puVar1;
            }
            if (local_48 != (undefined8 *)0x0) {
              *local_48 = *puVar1;
            }
            if (local_50 != (undefined8 *)0x0) {
              *local_50 = *puVar1;
            }
            if (local_58 != (undefined8 *)0x0) {
              *local_58 = puVar1[1];
            }
            local_21 = 1;
          }
          else {
            local_21 = 0;
          }
        }
        else {
          if (local_40 != (undefined8 *)0x0) {
            *local_40 = *puVar1;
          }
          if (local_48 != (undefined8 *)0x0) {
            *local_48 = puVar1[1];
          }
          if (local_50 != (undefined8 *)0x0) {
            *local_50 = puVar1[2];
          }
          if (local_58 != (undefined8 *)0x0) {
            *local_58 = puVar1[3];
          }
          local_21 = 1;
        }
      }
    }
    else {
      if (local_40 != (undefined8 *)0x0) {
        *local_40 = local_78;
      }
      if (local_48 != (undefined8 *)0x0) {
        *local_48 = local_80;
      }
      if (local_50 != (undefined8 *)0x0) {
        *local_50 = local_88;
      }
      if (local_58 != (undefined8 *)0x0) {
        *local_58 = local_90;
      }
      local_21 = 1;
    }
  }
  local_70 = 1;
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

