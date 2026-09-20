// FUN_00552444 @ 00552444

byte FUN_00552444(undefined8 param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulong local_48;
  undefined4 local_40;
  undefined8 *local_30;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_30 = param_3;
  local_28 = param_2;
  if ((local_20 == 0) || (FUN_00552120(), (param_2 & 1) == 0)) {
    local_11 = 0;
    local_40 = 1;
  }
  else if ((local_28 == 0) &&
          (uVar2 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_likeFlag_026a4708)
          , (uVar2 & 1) != 0)) {
    local_11 = 0;
    local_40 = 1;
  }
  else {
    local_48 = 0;
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    uVar2 = local_20;
    FUN_005528d0(local_20,&local_58,&local_60);
    _objc_storeStrong(&local_48,local_58);
    _objc_storeStrong(&local_50,local_60);
    if ((uVar2 & 1) == 0) {
      local_11 = 0;
    }
    else {
      uVar2 = local_28;
      FUN_00552c4c();
      if (((uVar2 & 1) == 0) || (uVar2 = local_20, FUN_00552d34(), (uVar2 & 1) == 0)) {
        uVar3 = local_48;
        FUN_005530b4();
        uVar2 = local_48;
        if ((uVar3 & 1) == 0) {
          local_11 = 0;
        }
        else {
          uVar3 = local_28;
          FUN_0055348c();
          uVar4 = local_28;
          FUN_00553570();
          _objc_retainAutoreleasedReturnValue();
          FUN_00553350(uVar2,uVar3);
          (*(code *)PTR__objc_release_02578630)(uVar4);
          uVar1 = local_50;
          if ((uVar2 & 1) == 0) {
            local_11 = 0;
          }
          else {
            if (local_30 != (undefined8 *)0x0) {
              _objc_retainAutorelease();
              *local_30 = uVar1;
            }
            local_11 = 1;
          }
        }
      }
      else {
        local_11 = 0;
      }
    }
    local_40 = 1;
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

