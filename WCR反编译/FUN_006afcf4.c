// FUN_006afcf4 @ 006afcf4

byte FUN_006afcf4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *local_30;
  undefined8 local_28;
  undefined8 local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = PTR_WCRefinePrivateFriendManager_026ce160;
  local_28 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_usernameFromObject__026a6718,local_20);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefinePrivateFriendManager_026ce160;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_shouldConcealUsername__0269fef8,puVar1)
  ;
  if (((ulong)puVar2 & 1) == 0) {
    uVar3 = local_20;
    (*DAT_028cbfc8)(local_20,local_28);
    local_11 = (byte)uVar3 & 1;
  }
  else {
    local_11 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

