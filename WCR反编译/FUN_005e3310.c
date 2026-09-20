// FUN_005e3310 @ 005e3310

void FUN_005e3310(undefined8 param_1,undefined8 param_2,byte param_3,undefined8 param_4,
                 byte *param_5)

{
  ulong uVar1;
  undefined *puVar2;
  byte local_45 [5];
  byte *local_40;
  undefined8 local_38;
  byte local_29;
  undefined8 local_28;
  ulong local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_38 = 0;
  local_29 = param_3;
  local_28 = param_2;
  _objc_storeStrong(&local_38,param_4);
  local_40 = param_5;
  if ((local_29 & 1) == 0) {
    local_18 = (undefined *)0x0;
  }
  else {
    local_45[0] = 0;
    uVar1 = local_20;
    FUN_005e36bc(local_20,local_38,local_45);
    if ((uVar1 & 1) == 0) {
      local_18 = (undefined *)0x0;
    }
    else {
      if (local_40 != (byte *)0x0) {
        *local_40 = local_45[0] & 1;
      }
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithUTF8String__0269fd30,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_18 = puVar2;
    }
  }
  local_45[1] = 1;
  local_45[2] = 0;
  local_45[3] = 0;
  local_45[4] = 0;
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

