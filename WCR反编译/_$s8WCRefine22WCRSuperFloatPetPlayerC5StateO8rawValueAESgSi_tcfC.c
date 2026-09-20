// _$s8WCRefine22WCRSuperFloatPetPlayerC5StateO8rawValueAESgSi_tcfC @ 021fd1c8

undefined1  [16] __s8WCRefine22WCRSuperFloatPetPlayerC5StateO8rawValueAESgSi_tcfC(long param_1)

{
  undefined1 auVar1 [16];
  undefined8 local_30;
  undefined4 local_24;
  undefined8 local_20;
  
  if (param_1 == 0) {
    local_20 = 0;
  }
  else if (param_1 == 1) {
    local_20 = 1;
  }
  else if (param_1 == 2) {
    local_20 = 2;
  }
  else if (param_1 == 3) {
    local_20 = 3;
  }
  else if (param_1 == 4) {
    local_20 = 4;
  }
  else {
    if (param_1 != 5) {
      local_30 = 0;
      local_24 = 1;
      goto LAB_021fd2cc;
    }
    local_20 = 5;
  }
  local_30 = local_20;
  local_24 = 0;
LAB_021fd2cc:
  auVar1._8_4_ = local_24;
  auVar1._0_8_ = local_30;
  auVar1._12_4_ = 0;
  return auVar1;
}

