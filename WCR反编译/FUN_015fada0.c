// FUN_015fada0 @ 015fada0

byte FUN_015fada0(undefined8 param_1,undefined8 param_2,byte param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong local_38;
  byte local_29;
  undefined8 local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_38 = 0;
  local_29 = param_3;
  _objc_storeStrong(&local_38,param_4);
  uVar1 = local_20;
  FUN_01600e60(local_20,local_28,local_38);
  if ((uVar1 & 1) == 0) {
    local_11 = 0;
  }
  else {
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_quickChatIncludeFoldedGroups_026b17c8);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      FUN_015fe0c0(local_20,local_28);
      if ((uVar1 & 1) != 0) {
        local_11 = 0;
        goto LAB_015faf7c;
      }
    }
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_quickChatIncludePublicAccounts_026b17d0);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      FUN_01601090(local_20,local_28);
      if ((uVar1 & 1) != 0) {
        local_11 = 0;
        goto LAB_015faf7c;
      }
    }
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_quickChatIncludeServiceAccounts_026b17d8);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      FUN_016011dc(local_20,local_28);
      if ((uVar1 & 1) != 0) {
        local_11 = 0;
        goto LAB_015faf7c;
      }
    }
    if ((local_29 & 1) != 0) {
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_quickChatIncludeMuted_026b17c0);
      if ((uVar1 & 1) == 0) {
        local_11 = 0;
        goto LAB_015faf7c;
      }
    }
    local_11 = 1;
  }
LAB_015faf7c:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

