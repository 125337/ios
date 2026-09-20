// FUN_000f6e3c @ 000f6e3c

void FUN_000f6e3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,uint param_5
                 ,uint param_6)

{
  undefined8 uVar1;
  uint local_58;
  uint local_44;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_44 = 0;
  if ((param_6 & 1) != 0) {
    uVar1 = local_28;
    FUN_000f8ca4();
    local_44 = (uint)uVar1;
  }
  local_58 = 0;
  if ((local_44 & 1) != 0) {
    uVar1 = local_18;
    FUN_000f8dac();
    local_58 = (uint)uVar1;
  }
  if ((local_44 & 1) != 0) {
    FUN_000f8ec0(local_18,(byte)local_58 & 1);
  }
  if (((local_44 & 1) != 0) && ((local_58 & 1) == 0)) {
    FUN_000f902c(local_18);
  }
  (*DAT_028c83c0)(local_18,local_20,local_28,param_4 & 1,param_5 & 1,param_6 & 1);
  _objc_storeStrong(&local_28,0);
  return;
}

