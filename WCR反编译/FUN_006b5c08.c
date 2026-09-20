// FUN_006b5c08 @ 006b5c08

byte FUN_006b5c08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int local_64;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  bool local_11;
  
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
    if (DAT_028cc130 == (code *)0x0) {
      local_64 = 1;
    }
    else {
      uVar3 = local_20;
      (*DAT_028cc130)(local_20,local_28,local_30);
      local_64 = (int)uVar3;
    }
    local_11 = local_64 != 0;
  }
  else {
    local_11 = false;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

