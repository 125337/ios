// FUN_0072cdf8 @ 0072cdf8

byte FUN_0072cdf8(ulong param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar3;
  ulong uVar4;
  ulong local_38;
  byte local_29;
  undefined8 local_28;
  ulong local_20;
  byte local_11;
  ulong uVar2;
  
  local_28 = param_2;
  local_20 = param_1;
  (*DAT_028cc418)(param_1,param_2);
  local_38 = local_20;
  local_29 = (byte)param_1;
  if ((param_1 & 1) == 0) {
    local_11 = 0;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_retain_02578638)();
    uVar1 = (uint)uVar2;
    FUN_0072f090();
    if ((uVar1 & 1) == 0) {
      local_11 = local_29 & 1;
    }
    else {
      uVar2 = local_38;
      FUN_0072db3c(local_38,PTR_s_m_bTextFold_026a7ad0);
      uVar3 = local_38;
      FUN_0072db3c(local_38,PTR_s_m_bubbleType_026a7ad8);
      uVar4 = local_38;
      FUN_0072db3c(local_38,PTR_s_m_mediaToEmoji_026a7ae8);
      if ((((uVar2 == 3) || (uVar2 == 4)) || (uVar3 == 1)) ||
         (((uVar3 == 2 || (uVar4 == 2)) || (uVar4 == 4)))) {
        local_11 = local_29 & 1;
      }
      else {
        local_11 = 0;
      }
    }
    _objc_storeStrong(&local_38,0);
  }
  return local_11 & 1;
}

