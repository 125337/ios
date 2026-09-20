// FUN_006b4d50 @ 006b4d50

void FUN_006b4d50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5,byte param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  byte local_39;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  local_38 = 0;
  local_2c = param_4;
  _objc_storeStrong(&local_38,param_5);
  local_48 = 0;
  local_39 = param_6;
  _objc_storeStrong(&local_48,param_7);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_8);
  if (DAT_028cc0b8 != (code *)0x0) {
    (*DAT_028cc0b8)(local_18,local_20,local_28,local_2c,local_38,local_39 & 1,local_48,local_50);
  }
  puVar1 = PTR_WCRefinePrivateFriendManager_026ce160;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_usernameFromObject__026a6718,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_WCRefinePrivateFriendManager_026ce160;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_usernameFromObject__026a6718,local_38
              );
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_58;
    local_58 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  FUN_006b5508(DAT_02323da8,local_58);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return;
}

