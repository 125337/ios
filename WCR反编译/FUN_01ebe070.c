// FUN_01ebe070 @ 01ebe070

double FUN_01ebe070(double param_1,undefined8 param_2)

{
  double local_3b0;
  double local_3a8;
  double local_3a0;
  double local_398;
  double local_390;
  double local_388;
  double local_380;
  double local_378;
  double local_370;
  double local_368;
  double local_360;
  double local_358;
  double local_350;
  double local_348;
  double local_340;
  double local_338;
  double local_330;
  double local_328;
  double local_320;
  double local_318;
  double local_310;
  double local_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  double local_18;
  
  local_18 = param_1;
  switch(param_2) {
  case 0x3e9:
    if (25.0 <= param_1) {
      local_2d8 = param_1;
      if (param_1 <= 50.0) {
        local_2d8 = 50.0;
      }
      if (local_2d8 <= 600.0) {
        local_2e0 = local_2d8;
      }
      else {
        local_2e0 = 600.0;
      }
      local_18 = (double)(float)(int)local_2e0;
    }
    else {
      local_18 = 0.0;
    }
    break;
  case 0x3ea:
    if (25.0 <= param_1) {
      local_2e8 = param_1;
      if (param_1 <= 80.0) {
        local_2e8 = 80.0;
      }
      if (local_2e8 <= 600.0) {
        local_2f0 = local_2e8;
      }
      else {
        local_2f0 = 600.0;
      }
      local_18 = (double)(float)(int)local_2f0;
    }
    else {
      local_18 = 0.0;
    }
    break;
  case 0x3eb:
    local_2f8 = param_1;
    if (param_1 <= 0.0) {
      local_2f8 = 0.0;
    }
    if (local_2f8 <= 40.0) {
      local_300 = local_2f8;
    }
    else {
      local_300 = 40.0;
    }
    local_18 = (double)(float)(int)local_300;
    break;
  case 0x3ec:
    local_308 = param_1;
    if (param_1 <= 0.0) {
      local_308 = 0.0;
    }
    if (local_308 <= 5.0) {
      local_310 = local_308;
    }
    else {
      local_310 = 5.0;
    }
    local_18 = (double)((float)(int)(local_310 * 10.0) / 10.0);
    break;
  case 0x3ed:
    local_318 = param_1;
    if (param_1 <= 0.0) {
      local_318 = 0.0;
    }
    if (local_318 <= 3.0) {
      local_320 = local_318;
    }
    else {
      local_320 = 3.0;
    }
    local_18 = (double)((float)(int)(local_320 * 100.0) / 100.0);
    break;
  case 0x3ee:
    local_328 = param_1;
    if (param_1 <= 0.25) {
      local_328 = 0.25;
    }
    if (local_328 <= 3.0) {
      local_330 = local_328;
    }
    else {
      local_330 = 3.0;
    }
    local_18 = (double)((float)(int)(local_330 * 100.0) / 100.0);
    break;
  case 0x3ef:
  case 0x3f3:
  case 0x3f7:
    local_348 = param_1;
    if (param_1 <= 5.0) {
      local_348 = 5.0;
    }
    if (local_348 <= 40.0) {
      local_350 = local_348;
    }
    else {
      local_350 = 40.0;
    }
    local_18 = (double)(float)(int)local_350;
    break;
  case 0x3f0:
    local_358 = param_1;
    if (param_1 <= 0.0) {
      local_358 = 0.0;
    }
    if (local_358 <= 50.0) {
      local_360 = local_358;
    }
    else {
      local_360 = 50.0;
    }
    local_18 = (double)(float)(int)local_360;
    break;
  case 0x3f1:
  case 0x3f4:
  case 0x3fb:
  case 0x3fc:
    local_368 = param_1;
    if (param_1 <= 0.0) {
      local_368 = 0.0;
    }
    if (local_368 <= 100.0) {
      local_370 = local_368;
    }
    else {
      local_370 = 100.0;
    }
    local_18 = (double)(float)(int)local_370;
    break;
  case 0x3f2:
    local_388 = param_1;
    if (param_1 <= 0.0) {
      local_388 = 0.0;
    }
    if (local_388 <= 30.0) {
      local_390 = local_388;
    }
    else {
      local_390 = 30.0;
    }
    local_18 = (double)(float)(int)local_390;
    break;
  case 0x3f5:
  case 0x3f6:
    local_378 = param_1;
    if (param_1 <= -100.0) {
      local_378 = -100.0;
    }
    if (local_378 <= 100.0) {
      local_380 = local_378;
    }
    else {
      local_380 = 100.0;
    }
    local_18 = (double)(float)(int)local_380;
    break;
  case 0x3f8:
  case 0x3fd:
    local_338 = param_1;
    if (param_1 <= 0.10000000149011612) {
      local_338 = 0.10000000149011612;
    }
    if (local_338 <= 3.0) {
      local_340 = local_338;
    }
    else {
      local_340 = 3.0;
    }
    local_18 = (double)((float)(int)(local_340 * 100.0) / 100.0);
    break;
  case 0x3f9:
  case 0x3fa:
    local_398 = param_1;
    if (param_1 <= -300.0) {
      local_398 = -300.0;
    }
    if (local_398 <= 300.0) {
      local_3a0 = local_398;
    }
    else {
      local_3a0 = 300.0;
    }
    local_18 = (double)(float)(int)local_3a0;
    break;
  case 0x3fe:
  case 0x3ff:
  case 0x400:
  case 0x401:
    local_3a8 = param_1;
    if (param_1 <= -500.0) {
      local_3a8 = -500.0;
    }
    if (local_3a8 <= 500.0) {
      local_3b0 = local_3a8;
    }
    else {
      local_3b0 = 500.0;
    }
    local_18 = (double)(float)(int)local_3b0;
  }
  return local_18;
}

