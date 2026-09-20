// FUN_01600e60 @ 01600e60

byte FUN_01600e60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint local_3c;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_20;
  FUN_015fafb8(local_20,local_28);
  uVar2 = local_20;
  FUN_01601090(local_20,local_28);
  local_3c = 1;
  if ((uVar2 & 1) == 0) {
    uVar2 = local_20;
    FUN_016011dc(local_20,local_28);
    local_3c = (uint)uVar2;
  }
  uVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_quickChatPinnedAlwaysVisible_026b1818);
  if (((uVar2 & 1) != 0) &&
     (uVar2 = local_28, FUN_016054b4(local_28,PTR_s_isContactSessionTop_026b06b0), (uVar2 & 1) != 0)
     ) {
    local_11 = 1;
    goto LAB_01601054;
  }
  uVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_quickChatSessionScope_026b1810);
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      if (((uVar1 & 1) != 0) || ((local_3c & 1) != 0)) {
        local_11 = 0;
        goto LAB_01601054;
      }
      if ((local_28 != 0) &&
         (uVar1 = local_28, FUN_016054b4(local_28,PTR_s_isMyContact_0269ef80), (uVar1 & 1) == 0)) {
        local_11 = 0;
        goto LAB_01601054;
      }
    }
    else if ((uVar2 == 2) && ((uVar1 & 1) == 0)) {
      local_11 = 0;
      goto LAB_01601054;
    }
  }
  local_11 = 1;
LAB_01601054:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

