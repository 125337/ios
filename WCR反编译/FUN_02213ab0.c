// FUN_02213ab0 @ 02213ab0

void FUN_02213ab0(double *param_1,double param_2,double param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,double param_7,double param_8,double param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double in_stack_00000000;
  double local_358;
  double local_348;
  double local_2f8;
  double local_2e8;
  double local_298;
  double local_288;
  double local_238;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  
  local_1f0 = DAT_02323ec8;
  local_210 = DAT_02323e20;
  local_228 = param_3;
  FUN_021b8960();
  dVar1 = param_3;
  FUN_021b899c(param_3,param_4,param_5,param_6);
  local_220 = param_3;
  FUN_021b89d8(param_3,param_4,param_5,param_6);
  FUN_021f03c0(param_3,param_4,param_5,param_6);
  if (param_7 < param_2) {
    param_2 = param_2 - param_7;
    if (param_9 < param_2) {
      param_2 = param_2 - param_9;
      if (in_stack_00000000 < param_2) {
        param_2 = param_2 - in_stack_00000000;
        if (param_9 < param_2) {
          param_2 = param_2 - param_9;
          if (param_7 < param_2) {
            param_2 = param_2 - param_7;
            if (param_9 < param_2) {
              param_2 = param_2 - param_9;
              if (in_stack_00000000 < param_2) {
                if (param_9 <= 0.0) {
                  local_358 = 0.0;
                }
                else {
                  local_358 = (param_2 - in_stack_00000000) / param_9;
                }
                local_210 = DAT_02323cb0 + local_358 * local_210;
                dVar1 = local_210;
                _cos();
                local_228 = local_228 + param_8 + dVar1 * param_8;
                dVar1 = local_210;
                _sin();
                local_220 = local_220 + param_8 + dVar1 * param_8;
                local_218 = local_210;
                _cos();
                _sin();
                local_208 = local_358;
                local_200 = 6.0;
                local_1f8 = 4.05;
              }
              else {
                if (in_stack_00000000 <= 0.0) {
                  local_348 = 0.0;
                }
                else {
                  local_348 = param_2 / in_stack_00000000;
                }
                local_220 = (param_3 - param_8) - param_2;
                local_218 = -1.0;
                local_210 = 0.0;
                local_208 = local_348;
                local_200 = 20.0;
                local_1f8 = DAT_0233bc60;
                local_1f0 = 1.0;
              }
            }
            else {
              if (param_9 <= 0.0) {
                local_2f8 = 0.0;
              }
              else {
                local_2f8 = param_2 / param_9;
              }
              local_210 = local_210 + local_2f8 * local_210;
              dVar1 = local_210;
              _cos();
              local_228 = local_228 + param_8 + dVar1 * param_8;
              dVar1 = local_210;
              _sin();
              local_220 = (param_3 - param_8) + dVar1 * param_8;
              local_218 = local_210;
              _cos();
              _sin();
              local_208 = local_2f8;
              local_200 = 6.0;
              local_1f8 = DAT_0233bc58;
            }
          }
          else {
            if (param_7 <= 0.0) {
              local_2e8 = 0.0;
            }
            else {
              local_2e8 = param_2 / param_7;
            }
            local_228 = (dVar1 - param_8) - param_2;
            local_218 = 0.0;
            local_210 = 1.0;
            local_208 = local_2e8;
            local_200 = 20.0;
            local_1f8 = DAT_0233bc50;
            local_1f0 = DAT_02323f60;
            local_220 = param_3;
          }
        }
        else {
          if (param_9 <= 0.0) {
            local_298 = 0.0;
          }
          else {
            local_298 = param_2 / param_9;
          }
          local_210 = local_298 * local_210;
          dVar3 = local_210;
          _cos();
          local_228 = (dVar1 - param_8) + dVar3 * param_8;
          dVar1 = local_210;
          _sin();
          local_220 = (param_3 - param_8) + dVar1 * param_8;
          local_218 = local_210;
          _cos();
          _sin();
          local_208 = local_298;
          local_200 = 6.0;
          local_1f8 = DAT_02323d88;
        }
      }
      else {
        if (in_stack_00000000 <= 0.0) {
          local_288 = 0.0;
        }
        else {
          local_288 = param_2 / in_stack_00000000;
        }
        local_220 = local_220 + param_8 + param_2;
        local_218 = 1.0;
        local_210 = 0.0;
        local_208 = local_288;
        local_200 = 20.0;
        local_1f8 = 1.15;
        local_1f0 = 1.0;
        local_228 = dVar1;
      }
    }
    else {
      if (param_9 <= 0.0) {
        local_238 = 0.0;
      }
      else {
        local_238 = param_2 / param_9;
      }
      local_210 = DAT_02323e28 + local_238 * local_210;
      dVar3 = local_210;
      _cos();
      dVar2 = local_210;
      _sin();
      local_220 = local_220 + param_8 + dVar2 * param_8;
      local_218 = local_210;
      _cos();
      _sin();
      local_208 = local_238;
      local_200 = 6.0;
      local_1f8 = 0.5;
      local_228 = (dVar1 - param_8) + dVar3 * param_8;
    }
  }
  else {
    if (param_7 <= 0.0) {
      local_1e8 = 0.0;
    }
    else {
      local_1e8 = param_2 / param_7;
    }
    local_218 = 0.0;
    local_210 = -1.0;
    local_208 = local_1e8;
    local_200 = 20.0;
    local_1f8 = 0.0;
    local_1f0 = 1.0;
    local_228 = local_228 + param_8 + param_2;
  }
  *param_1 = local_228;
  param_1[1] = local_220;
  param_1[2] = local_218;
  param_1[3] = local_210;
  param_1[4] = local_208;
  param_1[5] = local_200;
  param_1[6] = local_1f8;
  param_1[7] = local_1f0;
  return;
}

