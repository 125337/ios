// FUN_001d2164 @ 001d2164

byte FUN_001d2164(double param_1,undefined8 param_2,double param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar3;
  ulong uVar4;
  byte local_c4;
  ulong local_30;
  byte local_21;
  ulong *puVar2;
  
  puVar2 = &local_30;
  local_30 = 0;
  _objc_storeStrong(puVar2,param_4);
  uVar1 = (uint)puVar2;
  FUN_001cf94c();
  if (((uVar1 & 1) == 0) || (local_30 == 0)) {
    local_21 = 0;
  }
  else {
    uVar3 = local_30;
    FUN_001d24ac();
    if ((uVar3 & 1) == 0) {
      uVar3 = local_30;
      FUN_001d2ddc();
      if ((uVar3 & 1) == 0) {
        uVar3 = local_30;
        FUN_001d2fb0();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (uVar3 == 0) {
          uVar3 = local_30;
          FUN_001d31ec();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          if (uVar3 == 0) {
            FUN_001d1c14();
            if ((uVar3 == 0) ||
               (uVar4 = local_30,
               (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isKindOfClass__0269cd68,uVar3),
               (uVar4 & 1) == 0)) {
              local_21 = 0;
            }
            else {
              uVar3 = local_30;
              FUN_001d3428();
              local_c4 = 0;
              if ((uVar3 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
                local_c4 = 0;
                if (24.0 <= param_3) {
                  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
                  local_c4 = 0;
                  if (24.0 <= param_1) {
                    uVar3 = local_30;
                    FUN_001d2ddc();
                    local_c4 = (byte)uVar3 ^ 1;
                  }
                }
              }
              local_21 = local_c4 & 1;
            }
          }
          else {
            local_21 = 1;
          }
        }
        else {
          local_21 = 1;
        }
      }
      else {
        local_21 = 0;
      }
    }
    else {
      local_21 = 0;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

