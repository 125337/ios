// apiKey @ 0158e744

/* Function Stack Size: 0x10 bytes */

ID WCRefineVoiceCloneHelper::apiKey(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_88;
  long local_50;
  undefined4 local_48;
  int local_44;
  long local_40;
  ID local_38;
  SEL local_30;
  ID local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_keychainIdentity_026b0a00);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_38 = IVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,
             *(undefined8 *)PTR__kSecReturnData_025783a8);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,
             *(undefined8 *)PTR__kSecMatchLimitOne_02578398,
             *(undefined8 *)PTR__kSecMatchLimit_02578390);
  local_40 = 0;
  IVar1 = local_38;
  _SecItemCopyMatching(local_38,&local_40);
  lVar3 = local_40;
  local_44 = (int)IVar1;
  if ((local_44 == 0) && (local_40 != 0)) {
    local_18 = local_40;
    _objc_autoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    local_50 = lVar3;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_88 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_88 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_20 = local_88;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    local_48 = 1;
    _objc_storeStrong(&local_50,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_20 = &::cf___;
    local_48 = 1;
  }
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_20;
}

