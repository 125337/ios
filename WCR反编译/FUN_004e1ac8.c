// FUN_004e1ac8 @ 004e1ac8

byte FUN_004e1ac8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte local_84;
  byte local_7c;
  uint local_64;
  uint local_5c;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if (local_28 == 0) {
    local_11 = 0;
    goto LAB_004e1d38;
  }
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_messageTripleTapEnabled_026a42f8);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_messageDoubleTapTripleOnlyEnable_026a4308);
  local_5c = 0;
  if ((uVar2 & 1) != 0) {
    local_5c = (uint)uVar1 & 0xff ^ 1;
  }
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_messageDoubleTapEnabled_026a4300);
  local_64 = 0;
  if (((uVar2 & 1) != 0) && (local_64 = 0, (local_5c & 1) == 0)) {
    uVar2 = local_20;
    FUN_004e2550();
    local_64 = (uint)uVar2;
    FUN_004e1958();
  }
  if ((uVar1 & 1) == 0) {
LAB_004e1c4c:
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_messageDoubleTapEnabled_026a4300);
    local_84 = 0;
    if (((uVar1 & 1) != 0) && (local_84 = 0, (local_5c & 1) != 0)) {
      uVar1 = local_20;
      FUN_004e2550();
      local_84 = (byte)uVar1;
      FUN_004e1958();
    }
    local_7c = local_84;
  }
  else {
    uVar1 = local_20;
    FUN_004e240c();
    FUN_004e1958();
    local_7c = 1;
    if ((uVar1 & 1) == 0) goto LAB_004e1c4c;
  }
  local_11 = 0;
  if ((local_64 & 1) != 0) {
    local_11 = local_7c & 1;
  }
LAB_004e1d38:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

