// FUN_006b4ba0 @ 006b4ba0

void FUN_006b4ba0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = param_2;
  (*DAT_028cc098)(local_18,param_2);
  puVar1 = PTR_WCRefinePrivateFriendManager_026ce160;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_usernameFromObject__026a6718,local_18);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  FUN_006b5508(0,puVar1,local_18);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return;
}

