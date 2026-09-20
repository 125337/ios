// FUN_006b4a6c @ 006b4a6c

void FUN_006b4a6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4,byte param_5
                 )

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_38;
  byte local_2a;
  byte local_29;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR_WCRefinePrivateFriendManager_026ce160;
  local_2a = param_5;
  local_29 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_usernameFromObject__026a6718,local_28);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefinePrivateFriendManager_026ce160;
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_shouldHangupUsername__026a6878,puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    (*DAT_028cc088)(local_18,local_20,local_28,local_29 & 1,local_2a & 1);
  }
  else {
    FUN_006b5508(0,local_38,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return;
}

