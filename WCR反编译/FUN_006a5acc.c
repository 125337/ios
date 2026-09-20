// FUN_006a5acc @ 006a5acc

void FUN_006a5acc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_28;
  undefined4 local_1c;
  undefined *local_18;
  
  local_18 = (undefined *)0x0;
  _objc_storeStrong(&local_18,param_1);
  puVar2 = local_18;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    local_1c = 1;
  }
  else {
    puVar2 = PTR_WCRefinePrivateFriendManager_026ce160;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_filteredArray__026a6640,local_18);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar2;
    if (puVar2 != local_18) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setArray__026a30c0,puVar2);
    }
    _objc_storeStrong(&local_28,0);
    local_1c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

