// FUN_0007eb2c @ 0007eb2c

void FUN_0007eb2c(undefined8 param_1,undefined8 param_2,byte param_3,undefined8 param_4,
                 undefined1 *param_5)

{
  long lVar1;
  long lVar2;
  long local_70;
  long local_68 [3];
  long local_50;
  undefined4 local_44;
  undefined1 *local_40;
  undefined8 local_38;
  byte local_29;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_38 = 0;
  local_29 = param_3;
  _objc_storeStrong(&local_38,param_4);
  lVar2 = local_20;
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = 0;
  }
  local_40 = param_5;
  if (local_20 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = lVar2;
    local_44 = 1;
  }
  else {
    lVar1 = local_20;
    FUN_0007ee68();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_20;
    local_50 = lVar1;
    if ((lVar1 == 0) || (lVar1 == local_20)) {
      if ((local_29 & 1) == 0) {
        FUN_0007eef0(local_20,local_28,local_38);
        _objc_retainAutoreleasedReturnValue();
        local_68[0] = lVar2;
        if (lVar2 == 0) {
          lVar2 = local_20;
          FUN_00071900();
          _objc_retainAutoreleasedReturnValue();
          local_18 = local_20;
          local_70 = lVar2;
          if ((lVar2 == 0) || (lVar2 == local_20)) {
            (*(code *)PTR__objc_retain_02578638)();
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = lVar2;
          }
          local_44 = 1;
          _objc_storeStrong(&local_70,0);
        }
        else {
          if (local_40 != (undefined1 *)0x0) {
            *local_40 = 1;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_44 = 1;
          local_18 = lVar2;
        }
        _objc_storeStrong(local_68,0);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = lVar2;
        local_44 = 1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_44 = 1;
      local_18 = lVar1;
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

