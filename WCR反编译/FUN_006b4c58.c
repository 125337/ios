// FUN_006b4c58 @ 006b4c58

byte FUN_006b4c58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  uVar2 = local_18;
  (*DAT_028cc0a8)(local_18,local_20,local_28);
  local_29 = (byte)uVar2;
  puVar3 = PTR_WCRefinePrivateFriendManager_026ce160;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_usernameFromObject__026a6718,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar3;
  FUN_006b5508(DAT_02323da8,puVar3,0);
  bVar1 = local_29;
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return bVar1 & 1;
}

