// FUN_006afdf0 @ 006afdf0

byte FUN_006afdf0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int local_54;
  undefined *local_30;
  undefined8 local_28;
  undefined8 local_20;
  bool local_11;
  
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
    if (DAT_028cbfd0 == (code *)0x0) {
      local_54 = 0;
    }
    else {
      uVar3 = local_20;
      (*DAT_028cbfd0)(local_20,local_28);
      local_54 = (int)uVar3;
    }
    local_11 = local_54 != 0;
  }
  else {
    local_11 = false;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

