// setPassword:errorMessage: @ 0111d740

/* Function Stack Size: 0x20 bytes */

bool WCRefinePrivateFriendManager::setPassword_errorMessage_
               (ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  ulong uVar1;
  ID IVar2;
  ulong local_40;
  ID *local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  local_38 = param_4;
  FUN_0110d24c();
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if ((uVar1 < 4) ||
     (uVar1 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
     0x20 < uVar1)) {
    if (local_38 != (ID *)0x0) {
      _objc_retainAutorelease();
      *local_38 = (ID)&cf__x;
    }
    local_11 = 0;
  }
  else {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_store_026aeee0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    uVar1 = local_40;
    FUN_0111d264();
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_store_026aeee0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_persistAndPublish_026aef58);
    local_11 = 1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

