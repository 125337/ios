// sendableDataForWrap: @ 01098f08

/* Function Stack Size: 0x18 bytes */

ID WCRefineLocalEmoticonStore::sendableDataForWrap_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ID IVar3;
  ulong uVar4;
  ulong local_50;
  undefined *local_48;
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if (local_30 == 0) {
    local_18 = 0;
    local_34 = 1;
  }
  else {
    uVar1 = local_30;
    _objc_getAssociatedObject(local_30,DAT_0280e170);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_40 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((uVar1 & 1) == 0) ||
       (uVar1 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
       puVar2 = PTR__OBJC_CLASS___NSData_026ce1d0, uVar1 == 0)) {
      local_18 = 0;
      local_34 = 1;
    }
    else {
      IVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_absolutePathFromRelative__026ae2c0,local_40);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_dataWithContentsOfFile__0269e0b8);
      _objc_retainAutoreleasedReturnValue();
      local_48 = puVar2;
      (*(code *)PTR__objc_release_02578630)(IVar3);
      uVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_lastPathComponent_026ca780);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_50 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      IVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_sendableDataResolvingCacheForMd5_026ae458,local_50,local_48);
      _objc_retainAutoreleasedReturnValue();
      local_34 = 1;
      local_18 = IVar3;
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

