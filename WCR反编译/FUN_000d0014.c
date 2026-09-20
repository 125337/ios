// FUN_000d0014 @ 000d0014

byte FUN_000d0014(undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  undefined1 *puVar4;
  cfstringStruct *local_a8;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined4 local_58;
  byte local_51;
  cfstringStruct *local_50;
  byte local_41;
  undefined *local_40;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  byte local_11;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar3 = local_20;
  local_41 = 0;
  local_51 = 0;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_a8 = local_20;
  if (((ulong)pcVar3 & 1) == 0) {
    local_a8 = &cf___;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_40 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = local_a8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_a8;
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  pcVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_11 = 0;
    local_58 = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_repeatChatLiftSelectedSessions_0269e860);
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_containsObject__0269cbb8,local_28);
    bVar1 = (byte)puVar2;
    puVar4 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_repeatChatLiftPageRule_0269e868);
    if (puVar4 != (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
      bVar1 = bVar1 ^ 1;
    }
    local_11 = bVar1 & 1;
    local_58 = 1;
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

