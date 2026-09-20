// FUN_00f1d4c4 @ 00f1d4c4

byte FUN_00f1d4c4(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  byte local_54;
  cfstringStruct *local_48;
  cfstringStruct *local_38;
  undefined4 local_2c;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  byte local_11;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    local_48 = &cf___;
  }
  else {
    local_48 = local_20;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  if (local_48 == (cfstringStruct *)0x0) {
    local_11 = 0;
    local_2c = 1;
  }
  else {
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_containsString__0269d0b0,&cf_<appmsg);
    local_54 = 1;
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_containsString__0269d0b0,&cf_<extcommoninfo);
      local_54 = (byte)pcVar2;
    }
    local_11 = local_54 & 1;
    local_2c = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

