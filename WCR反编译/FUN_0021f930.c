// FUN_0021f930 @ 0021f930

byte FUN_0021f930(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar3;
  undefined8 local_28;
  ulong local_20;
  byte local_11;
  undefined8 *puVar2;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar2 = &local_28;
  local_28 = 0;
  _objc_storeStrong(puVar2,param_2);
  uVar1 = (uint)puVar2;
  FUN_001ebe84();
  if ((uVar1 & 1) == 0) {
    local_11 = 0;
  }
  else {
    uVar3 = local_20;
    FUN_0021fe38();
    if ((uVar3 & 1) == 0) {
      uVar3 = local_20;
      FUN_0021ff40(local_20,local_28);
      if ((uVar3 & 1) == 0) {
        uVar3 = local_20;
        FUN_002200dc();
        local_11 = (byte)uVar3 & 1;
      }
      else {
        local_11 = 0;
      }
    }
    else {
      local_11 = 0;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

