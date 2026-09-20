// verifyPassword: @ 0111cf6c

/* Function Stack Size: 0x18 bytes */

bool WCRefinePrivateFriendManager::verifyPassword_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_40;
  undefined8 local_38;
  undefined8 local_30;
  SEL local_28;
  cfstringStruct *local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  FUN_0110d24c();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_20;
  local_38 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_store_026aeee0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  FUN_0110d24c();
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar4;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    pcVar2 = &cf_0000;
    FUN_0111d264();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_40;
    local_40 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  pcVar2 = local_40;
  uVar1 = local_38;
  FUN_0111d264();
  _objc_retainAutoreleasedReturnValue();
  FUN_0111d450();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    local_11 = 0;
  }
  else {
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_store_026aeee0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    FUN_0110d24c();
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    if (((ulong)pcVar5 & 1) == 0) {
      pcVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_store_026aeee0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_persistStoreWithoutBroadcast_026aeef8);
    }
    local_11 = 1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

