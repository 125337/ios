// useNotificationDisguiseOfficialDisplayName: @ 0111c3ec

/* Function Stack Size: 0x18 bytes */

bool WCRefinePrivateFriendManager::useNotificationDisguiseOfficialDisplayName_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID IVar2;
  ID local_40;
  undefined8 local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  FUN_0110d24c();
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_20;
  local_38 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_officialUsernameForDisplayName__026af070,uVar1);
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_length_0269cca0);
  local_11 = IVar2 != 0;
  if ((bool)local_11) {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_store_026aeee0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_store_026aeee0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_store_026aeee0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_refreshIdentityMetadataAndAvatar_026af048);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_persistAndPublish_026aef58);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

