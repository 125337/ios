// absoluteFilePathForItem: @ 009602c0

/* Function Stack Size: 0x18 bytes */

ID WCRClipboardHistoryStore::absoluteFilePathForItem_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  uint local_6c;
  ulong local_48;
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  SEL local_28;
  ID local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_18 = 0;
    local_34 = 1;
  }
  else {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_filePath);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_40 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((uVar2 & 1) == 0) ||
       (uVar2 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
       uVar2 == 0)) {
      local_18 = 0;
      local_34 = 1;
    }
    else {
      uVar2 = local_40;
      FUN_0095c294();
      _objc_retainAutoreleasedReturnValue();
      local_48 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
      local_6c = 1;
      if (uVar2 != 0) {
        puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_6c = (uint)puVar3 ^ 1;
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
      uVar2 = local_48;
      if ((local_6c & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar2;
      }
      else {
        local_18 = 0;
      }
      local_34 = 1;
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

