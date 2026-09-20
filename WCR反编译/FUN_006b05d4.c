// FUN_006b05d4 @ 006b05d4

uint FUN_006b05d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint local_3c;
  undefined *local_38;
  byte local_29;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_18;
  (*DAT_028cbff8)(local_18,local_20,local_28);
  local_29 = (byte)uVar1;
  puVar2 = PTR_WCRefinePrivateFriendManager_026ce160;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_usernameFromObject__026a6718,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_3c = 1;
  local_38 = puVar2;
  if ((local_29 & 1) == 0) {
    puVar3 = PTR_WCRefinePrivateFriendManager_026ce160;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_shouldConcealUsername__0269fef8,
               puVar2);
    local_3c = (uint)puVar3;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return local_3c & 1;
}

