// sendableDataResolvingCacheForMd5:raw: @ 0107c238

/* Function Stack Size: 0x20 bytes */

ID WCRefineLocalEmoticonStore::sendableDataResolvingCacheForMd5_raw_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  ID local_a8;
  ID local_90;
  ID local_78;
  ID local_70;
  byte local_61;
  ID local_60;
  byte local_51;
  ID local_50;
  ID local_48;
  uint local_3c;
  ID local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  IVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (IVar1 == 0) {
    local_18 = 0;
    local_3c = 1;
    goto LAB_0107c5a8;
  }
  IVar2 = local_38;
  FUN_0107c5d4();
  IVar1 = local_38;
  if ((IVar2 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = IVar1;
    local_3c = 1;
    goto LAB_0107c5a8;
  }
  IVar1 = local_30;
  FUN_0107bd28();
  local_51 = 0;
  local_61 = 0;
  if ((IVar1 & 1) == 0) {
    local_90 = local_38;
    FUN_0107c72c();
    _objc_retainAutoreleasedReturnValue();
    local_61 = 1;
    local_60 = local_90;
  }
  else {
    local_90 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = local_90;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_90;
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  IVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  if (IVar1 == 0) {
LAB_0107c48c:
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_sendableDataFromData__026a3db8,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_78 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_length_0269cca0);
    if (((IVar1 != 0) &&
        (IVar1 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
        IVar1 != 0)) && (local_78 != local_38)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_storeSendableCache_forMd5__026ae238,local_78,local_48);
    }
    IVar1 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
    if (IVar1 == 0) {
      local_a8 = local_38;
    }
    else {
      local_a8 = local_78;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_a8;
    local_3c = 1;
    _objc_storeStrong(&local_78,0);
  }
  else {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_cachedSendableDataForMd5__026ae230,local_48);
    _objc_retainAutoreleasedReturnValue();
    local_70 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_length_0269cca0);
    IVar1 = local_70;
    if (IVar2 != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = IVar1;
    }
    local_3c = (uint)(IVar2 != 0);
    _objc_storeStrong(&local_70,0);
    if (local_3c == 0) goto LAB_0107c48c;
  }
  _objc_storeStrong(&local_48,0);
LAB_0107c5a8:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

