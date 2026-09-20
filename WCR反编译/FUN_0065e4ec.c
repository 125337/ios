// FUN_0065e4ec @ 0065e4ec

void FUN_0065e4ec(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = param_2;
  FUN_0064d8b4();
  if ((param_2 & 1) == 0) {
    local_30 = 1;
  }
  else {
    uVar1 = local_18;
    FUN_0064f9ac();
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
    if (uVar1 == 0) {
      local_30 = 1;
    }
    else {
      uVar1 = local_20;
      FUN_0065e928(local_20,local_38);
      if (uVar1 == 0) {
        uVar1 = local_20;
        FUN_0065ea04(0,local_20,local_38);
        local_40 = uVar1;
        if (uVar1 == 0) {
          local_30 = 1;
        }
        else {
          uVar1 = local_18;
          FUN_006555fc();
          _objc_retainAutoreleasedReturnValue();
          local_48 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_count_0269cfe0);
          if (uVar1 == 0) {
            local_30 = 1;
          }
          else {
            local_50 = 0;
            uVar1 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
            local_58 = uVar1;
            while (local_58 = local_58 - 1, -1 < (long)local_58 && local_50 < local_40) {
              uVar1 = local_48;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_48,PTR_s_objectAtIndexedSubscript__0269cc78,local_58);
              _objc_retainAutoreleasedReturnValue();
              local_60 = uVar1;
              FUN_00655814();
              _objc_retainAutoreleasedReturnValue();
              local_68 = uVar1;
              if (((uVar1 == 0) || (FUN_0065c0c8(uVar1,local_60,local_20), (uVar1 & 1) == 0)) ||
                 (uVar1 = local_68, FUN_0065c1d8(local_68,local_60), (uVar1 & 1) != 0)) {
                local_30 = 4;
              }
              else {
                uVar1 = local_68;
                FUN_00655b28();
                _objc_retainAutoreleasedReturnValue();
                local_70 = uVar1;
                if (uVar1 == 0) {
                  local_30 = 4;
                }
                else {
                  FUN_00651de8(local_20,local_38,local_68);
                  local_50 = local_50 + 1;
                  local_30 = 0;
                }
                _objc_storeStrong(&local_70,0);
              }
              _objc_storeStrong(&local_68);
              _objc_storeStrong(&local_60,0);
            }
            local_30 = 0;
          }
          _objc_storeStrong(&local_48,0);
        }
      }
      else {
        local_30 = 1;
      }
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

