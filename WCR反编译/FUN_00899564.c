// FUN_00899564 @ 00899564

void FUN_00899564(double param_1,undefined8 param_2,undefined8 param_3,byte param_4,
                 undefined8 param_5)

{
  uint uVar1;
  double local_40;
  undefined8 local_38;
  byte local_29;
  double local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 *puVar2;
  
  puVar2 = &local_38;
  local_38 = 0;
  local_29 = param_4;
  local_28 = param_1;
  local_20 = param_3;
  local_18 = param_2;
  _objc_storeStrong(puVar2,param_5);
  uVar1 = (uint)puVar2;
  local_40 = local_28;
  if ((local_28 < 1.0) && (FUN_008a3b18(), (uVar1 & 1) != 0)) {
    local_40 = 1.0;
  }
  (*DAT_028cdc30)(local_40,local_18,local_20,local_29 & 1,local_38);
  _objc_storeStrong(&local_38,0);
  return;
}

