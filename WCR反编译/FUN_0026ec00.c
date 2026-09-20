// FUN_0026ec00 @ 0026ec00

byte FUN_0026ec00(undefined8 param_1)

{
  ulong uVar1;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == 0) ||
     (uVar1 = local_20, FUN_0026ee10(local_20,PTR_s_enableStatusUI_026a14c0), (uVar1 & 1) == 0)) {
    local_11 = 1;
  }
  else {
    uVar1 = local_20;
    FUN_0026fa24();
    if (uVar1 == 3) {
      local_11 = 1;
    }
    else {
      uVar1 = local_20;
      FUN_0026ee10(local_20,PTR_s_isInProcess_026a14c8);
      if ((uVar1 & 1) == 0) {
        uVar1 = local_20;
        FUN_0026ee10(local_20,PTR_s_isFail_026a14d0);
        if ((uVar1 & 1) == 0) {
          uVar1 = local_20;
          FUN_0026ee10(local_20,PTR_s_isPaused_026a14d8);
          if ((uVar1 & 1) == 0) {
            uVar1 = local_20;
            FUN_0026ee10(local_20,PTR_s_isFileExpired_026a14e0);
            if (((uVar1 & 1) == 0) ||
               (uVar1 = local_20, FUN_0026ee10(local_20,PTR_s_isFileExist_026a14b0),
               (uVar1 & 1) != 0)) {
              local_11 = 0;
            }
            else {
              local_11 = 1;
            }
          }
          else {
            local_11 = 1;
          }
        }
        else {
          local_11 = 1;
        }
      }
      else {
        local_11 = 1;
      }
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

