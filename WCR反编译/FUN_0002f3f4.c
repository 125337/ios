// FUN_0002f3f4 @ 0002f3f4

void FUN_0002f3f4(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_c0;
  cfstringStruct *local_60;
  cfstringStruct *local_48;
  byte local_39;
  cfstringStruct *local_38;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  pcVar1 = local_18;
  FUN_0001a4fc(local_18,&cf_m_chatRoomContact);
  _objc_retainAutoreleasedReturnValue();
  local_39 = 0;
  local_60 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_60 = local_18;
    FUN_0001a4fc(local_18,&cf_m_contact);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_60;
  }
  local_39 = pcVar1 == (cfstringStruct *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = local_60;
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_20;
  FUN_0001a4fc(local_20,&cf_m_nsUsrName);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_48 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((((ulong)pcVar1 & 1) == 0) ||
     (pcVar1 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
     pcVar1 == (cfstringStruct *)0x0)) {
    pcVar3 = local_18;
    FUN_0001a4fc(local_18,&cf_m_nsUsrName);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_48;
    local_48 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  pcVar1 = local_48;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)pcVar1 & 1) == 0) {
    local_c0 = &cf___;
  }
  else {
    local_c0 = local_48;
  }
  FUN_0001a2e4();
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(local_c0);
  return;
}

