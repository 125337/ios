// FUN_008ce8a8 @ 008ce8a8

void FUN_008ce8a8(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_80;
  cfstringStruct *local_40;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar2 = local_20;
  FUN_008ceaa4(local_20,PTR_s_m_chatName_026a7cb0,"m_chatName");
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    pcVar3 = local_20;
    FUN_008ce760(local_20,"_m_chatName");
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_28;
    local_28 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  pcVar2 = local_28;
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
  bVar1 = ((ulong)pcVar2 & 1) == 0;
  if (bVar1) {
    local_80 = &cf___;
  }
  else {
    local_80 = local_28;
    FUN_008cb6a0();
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_80;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_80;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

