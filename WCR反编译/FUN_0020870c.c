// FUN_0020870c @ 0020870c

byte FUN_0020870c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  uint uVar1;
  ulong uVar3;
  ulong uVar4;
  uint local_124;
  uint local_d4;
  ulong local_88;
  byte local_79;
  ulong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  ulong local_30;
  byte local_21;
  ulong *puVar2;
  
  puVar2 = &local_30;
  local_30 = 0;
  _objc_storeStrong(puVar2,param_5);
  uVar1 = (uint)puVar2;
  FUN_00208ae0();
  if ((uVar1 & 1) == 0) {
    if (local_30 == 0) {
      local_21 = 0;
      local_40 = 1;
    }
    else {
      local_79 = 0;
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      local_d4 = 0;
      if (uVar3 != 0) {
        uVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_window_026cabf0);
        _objc_retainAutoreleasedReturnValue();
        local_79 = 1;
        local_78 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_d4 = (uint)uVar4;
        local_70 = param_1;
        local_68 = param_2;
        local_60 = param_3;
        uStack_58 = param_4;
        local_50 = param_3;
        uStack_48 = param_4;
        FUN_00208b04();
        param_3 = param_2;
        param_4 = param_1;
      }
      if ((local_79 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_78);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if ((local_d4 & 1) == 0) {
        uVar3 = local_30;
        FUN_00207ce4();
        if ((uVar3 & 1) == 0) {
          uVar3 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          local_124 = 0;
          local_88 = uVar3;
          if (uVar3 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_bounds_026ca548);
            local_124 = (uint)uVar3;
            FUN_00208b04(param_3,param_4);
          }
          local_21 = (local_124 & 1) != 0;
          local_40 = 1;
          _objc_storeStrong(&local_88,0);
        }
        else {
          local_21 = 0;
          local_40 = 1;
        }
      }
      else {
        local_21 = 1;
        local_40 = 1;
      }
    }
  }
  else {
    local_21 = 1;
    local_40 = 1;
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

