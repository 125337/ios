// FUN_00872ef4 @ 00872ef4

void FUN_00872ef4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_58;
  ulong local_50;
  undefined1 local_42;
  byte local_41;
  ulong local_40 [3];
  undefined4 local_24;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar1 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar1,param_2);
  if (local_18 == 0) {
    local_24 = 1;
  }
  else {
    FUN_00871048();
    if (((ulong)puVar1 & 1) == 0) {
      local_24 = 1;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSThread_026ce0a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
      if (((ulong)puVar2 & 1) == 0) {
        local_24 = 1;
      }
      else {
        uVar3 = local_18;
        FUN_00873154();
        _objc_retainAutoreleasedReturnValue();
        local_40[0] = uVar3;
        FUN_008732dc();
        local_41 = (byte)uVar3;
        uVar3 = local_40[0];
        FUN_00873420();
        local_42 = (undefined1)uVar3;
        if (((local_41 & 1) == 0) && ((uVar3 & 1) == 0)) {
          local_24 = 1;
        }
        else {
          uVar3 = local_18;
          FUN_008735dc();
          local_50 = uVar3;
          if (uVar3 == 0) {
            local_24 = 1;
          }
          else {
            uVar3 = local_18;
            FUN_00873ab4();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = local_18;
            local_58 = uVar3;
            FUN_008748a4(local_18,local_40[0],uVar3,local_50);
            FUN_00875860(local_18,(uint)uVar4 & 1);
            _objc_storeStrong(&local_58,0);
            local_24 = 0;
          }
        }
        _objc_storeStrong(local_40,0);
      }
    }
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

