// FUN_00649edc @ 00649edc

float FUN_00649edc(float param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  double dVar3;
  double local_118;
  ulong local_80;
  cfstringStruct *local_78;
  ulong local_70;
  ulong local_68;
  byte local_59;
  undefined4 local_58;
  ulong local_48;
  byte local_3f;
  byte local_3e;
  byte local_3d;
  float local_3c;
  undefined8 local_38;
  ulong local_30;
  float local_24;
  
  local_38 = param_3;
  local_30 = param_2;
  FUN_006620a0();
  if ((param_2 & 1) == 0) {
    (*DAT_028cbb58)(local_30,local_38);
    local_24 = param_1;
  }
  else {
    (*DAT_028cbb58)(local_30,local_38);
    uVar1 = local_30;
    local_3c = param_1;
    FUN_00662c28();
    local_3d = (byte)uVar1;
    uVar1 = local_30;
    FUN_00662c98();
    local_3e = (byte)uVar1;
    local_3f = 1;
    if ((local_3d & 1) == 0) {
      local_3f = local_3e;
    }
    local_3f = local_3f & 1;
    uVar1 = local_30;
    FUN_00662d08();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    FUN_00663124();
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_48;
    FUN_00663740();
    if ((uVar1 & 1) == 0) {
      local_24 = local_3c;
      local_58 = 1;
    }
    else {
      uVar1 = local_48;
      FUN_00663614();
      local_59 = (byte)uVar1;
      uVar1 = local_30;
      FUN_0066af54();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_30;
      local_68 = uVar1;
      FUN_00664010();
      _objc_retainAutoreleasedReturnValue();
      local_70 = uVar2;
      if (((local_59 & 1) == 0) || (uVar1 = local_68, FUN_006638c8(), (uVar1 & 1) == 0)) {
        (*(code *)PTR__objc_retain_02578638)();
        local_78 = &cf___;
        if ((local_3f & 1) == 0) {
          uVar1 = local_68;
          FUN_00664200();
          if ((uVar1 & 1) == 0) {
            uVar1 = local_70;
            FUN_006620c0();
            if ((uVar1 & 1) == 0) {
              uVar1 = local_48;
              FUN_00664f50();
              if (((uVar1 & 1) != 0) && (uVar1 = local_68, FUN_006638c8(), (uVar1 & 1) != 0)) {
                _objc_storeStrong(&local_78,local_68);
              }
            }
            else {
              _objc_storeStrong(&local_78,local_70);
            }
          }
          else {
            _objc_storeStrong(&local_78,local_68);
          }
        }
        else {
          uVar1 = local_70;
          FUN_00664200();
          if ((uVar1 & 1) == 0) {
            uVar1 = local_68;
            FUN_00664200();
            if ((uVar1 & 1) != 0) {
              _objc_storeStrong(&local_78,local_68);
            }
          }
          else {
            _objc_storeStrong(&local_78,local_70);
          }
        }
        uVar1 = local_30;
        FUN_006651b4(local_30,local_78,0,0);
        _objc_retainAutoreleasedReturnValue();
        local_80 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
        if (uVar1 == 0) {
          local_24 = local_3c;
        }
        else {
          local_118 = (double)local_3c;
          dVar3 = local_118;
          FUN_0066b094(uVar1,local_80);
          if (local_118 < dVar3) {
            local_118 = dVar3;
          }
          FUN_006653a8(&cf_g);
          local_24 = (float)local_118;
        }
        local_58 = 1;
        _objc_storeStrong(&local_80);
        _objc_storeStrong(&local_78,0);
      }
      else {
        local_24 = 0.0;
        local_58 = 1;
      }
      _objc_storeStrong(&local_70);
      _objc_storeStrong(&local_68,0);
    }
    _objc_storeStrong(&local_48,0);
  }
  return local_24;
}

