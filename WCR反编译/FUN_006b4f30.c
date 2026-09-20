// FUN_006b4f30 @ 006b4f30

void FUN_006b4f30(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_58;
  undefined *local_30;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = param_2;
  if (DAT_028cc0c8 != (code *)0x0) {
    (*DAT_028cc0c8)(local_18,param_2);
  }
  local_28 = 0;
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_contact_026a0d10);
  if ((uVar1 & 1) != 0) {
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_contact_026a0d10);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_28;
    local_28 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  if (local_28 == 0) {
    local_58 = local_18;
  }
  else {
    local_58 = local_28;
  }
  puVar3 = PTR_WCRefinePrivateFriendManager_026ce160;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_usernameFromObject__026a6718,local_58);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar3;
  FUN_006b5508(0,puVar3,local_18);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return;
}

