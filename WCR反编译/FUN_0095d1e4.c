// FUN_0095d1e4 @ 0095d1e4

void FUN_0095d1e4(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  undefined *local_28;
  undefined4 local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar2 = local_18;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_1c = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_18;
    local_28 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_objectForKeyedSubscript__0269d098,&cf_imagePath);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_18;
    local_30 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_objectForKeyedSubscript__0269d098,&cf_thumbPath);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_30;
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_38 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    puVar1 = local_28;
    if ((uVar2 & 1) != 0) {
      uVar2 = local_30;
      FUN_0095c294();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_removeItemAtPath_error__0269f910,uVar2,0);
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    uVar2 = local_38;
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    puVar1 = local_28;
    if ((uVar2 & 1) != 0) {
      uVar2 = local_38;
      FUN_0095c294();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_removeItemAtPath_error__0269f910,uVar2,0);
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_objectForKeyedSubscript__0269d098,&cf_filePath);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_40 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    puVar1 = local_28;
    if ((uVar2 & 1) != 0) {
      uVar2 = local_40;
      FUN_0095c294();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_removeItemAtPath_error__0269f910,uVar2,0);
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
    _objc_storeStrong(&local_30,0);
    _objc_storeStrong(&local_28,0);
    local_1c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

