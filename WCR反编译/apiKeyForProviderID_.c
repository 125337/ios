// apiKeyForProviderID: @ 009c1b38

/* Function Stack Size: 0x18 bytes */

ID WCRefineAIStore::apiKeyForProviderID_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_f0;
  cfstringStruct *local_a0;
  cfstringStruct *local_90;
  long local_88;
  int local_7c;
  long local_78;
  ID local_70;
  undefined4 local_64;
  cfstringStruct *local_60;
  byte local_51;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  SEL local_40;
  ID local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_48 = (cfstringStruct *)0x0;
  local_40 = param_2;
  local_38 = param_1;
  _objc_storeStrong(&local_48,param_3);
  if (local_48 == (cfstringStruct *)0x0) {
    local_a0 = &::cf___;
  }
  else {
    local_a0 = local_48;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_a0;
  local_51 = 0;
  FUN_009c1ed4(local_a0,&local_51);
  _objc_retainAutoreleasedReturnValue();
  local_60 = local_a0;
  if ((local_51 & 1) == 0) {
    IVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_keychainQueryForProviderID__026aade0,local_48);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_70 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,
               *(undefined8 *)PTR__kSecReturnData_025783a8);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_setObject_forKeyedSubscript__0269d248,
               *(undefined8 *)PTR__kSecMatchLimitOne_02578398,
               *(undefined8 *)PTR__kSecMatchLimit_02578390);
    local_78 = 0;
    IVar1 = local_70;
    _SecItemCopyMatching(local_70,&local_78);
    lVar4 = local_78;
    local_7c = (int)IVar1;
    if (local_7c == -0x62d4) {
      FUN_009c204c(0,local_50);
      (*(code *)PTR__objc_retain_02578638)(&::cf___);
      local_30 = &::cf___;
      local_64 = 1;
    }
    else if ((local_7c == 0) && (local_78 != 0)) {
      local_28 = local_78;
      _objc_autoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      local_88 = lVar4;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_f0 = pcVar5;
      if (pcVar5 == (cfstringStruct *)0x0) {
        local_f0 = &::cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_90 = local_f0;
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      FUN_009c204c(local_50,local_90);
      pcVar5 = local_90;
      (*(code *)PTR__objc_retain_02578638)();
      local_30 = pcVar5;
      local_64 = 1;
      _objc_storeStrong(&local_90);
      _objc_storeStrong(&local_88,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_30 = &::cf___;
      local_64 = 1;
    }
    _objc_storeStrong(&local_70,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_64 = 1;
    local_30 = local_a0;
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_30;
}

