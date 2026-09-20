// FUN_006addc8 @ 006addc8

void FUN_006addc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_30 = 0;
  local_28 = param_2;
  _objc_storeStrong(&local_30,param_3);
  puVar2 = PTR_WCRefinePrivateFriendManager_026ce160;
  puVar1 = PTR_WCRefinePrivateFriendManager_026ce160;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_usernameFromObject__026a6718,local_30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_shouldConcealUsername__0269fef8);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    uVar3 = local_20;
    (*DAT_028cbed8)(local_20,local_28,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar3;
  }
  else {
    local_18 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

