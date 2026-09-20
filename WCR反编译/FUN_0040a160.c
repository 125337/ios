// FUN_0040a160 @ 0040a160

byte FUN_0040a160(undefined8 param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  undefined4 local_38;
  uint local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  FUN_0040bb14(local_20,&cf_messageType);
  local_24 = (uint)uVar2;
  uVar1 = local_24;
  FUN_0040bce0();
  if ((uVar1 & 1) == 0) {
    uVar1 = local_24;
    FUN_0040bcfc();
    if ((uVar1 & 1) == 0) {
      uVar1 = local_24;
      FUN_0040bd18();
      if ((uVar1 & 1) == 0) {
        uVar1 = local_24;
        FUN_0040bd34();
        if ((uVar1 & 1) == 0) {
          uVar2 = local_20;
          FUN_004055cc(local_20,&cf_content);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_20;
          local_40 = uVar2;
          FUN_004055cc(local_20,&cf_pushContent);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_20;
          local_48 = uVar3;
          FUN_004055cc(local_20,&cf_displayContent);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_40;
          local_50 = uVar2;
          FUN_0040bd80();
          if ((((uVar3 & 1) == 0) && (uVar2 = local_48, FUN_0040bd80(), (uVar2 & 1) == 0)) &&
             (uVar2 = local_50, FUN_0040bd80(), (uVar2 & 1) == 0)) {
            local_11 = 0;
          }
          else {
            local_11 = 1;
          }
          local_38 = 1;
          _objc_storeStrong(&local_50);
          _objc_storeStrong(&local_48,0);
          _objc_storeStrong(&local_40,0);
        }
        else {
          local_11 = 1;
          local_38 = 1;
        }
      }
      else {
        local_11 = 1;
        local_38 = 1;
      }
    }
    else {
      local_11 = 1;
      local_38 = 1;
    }
  }
  else {
    local_11 = 1;
    local_38 = 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

