// emoticonWrapForItem: @ 01098e5c

/* Function Stack Size: 0x18 bytes */

ID WCRefineLocalEmoticonStore::emoticonWrapForItem_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_ensureOfficialCacheForItem__026ae440,local_30);
  if ((IVar1 & 1) == 0) {
    local_18 = 0;
  }
  else {
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_lightweightWrapForItem__026ae450,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_18 = IVar1;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

