// FUN_006b2ee8 @ 006b2ee8

ulong FUN_006b2ee8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 local_70;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_30 = 0;
  local_28 = param_3;
  _objc_storeStrong(&local_30,param_4);
  bVar1 = DAT_028cc010 == (code *)0x0;
  if (bVar1) {
    local_70 = 0;
  }
  else {
    local_70 = local_18;
    (*DAT_028cc010)(local_18,PTR_s_getSessionUsernameForQuery_atInd_026a67d8,local_20,local_28,
                    local_30);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_70;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_70;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  puVar3 = PTR_WCRefinePrivateFriendManager_026ce160;
  puVar2 = PTR_WCRefinePrivateFriendManager_026ce160;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_usernameFromObject__026a6718,local_38);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_shouldConcealUsername__0269fef8);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return (ulong)puVar3 & 0xffffffff;
}

