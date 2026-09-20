// FUN_00fbbaf8 @ 00fbbaf8

byte FUN_00fbbaf8(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_40;
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
    local_40 = &cf___;
  }
  else {
    local_40 = local_20;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if ((local_40 == (cfstringStruct *)0x0) ||
     (pcVar2 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasPrefix__0269d320,&cf_<),
     ((ulong)pcVar2 & 1) != 0)) {
    local_11 = 0;
  }
  else {
    pcVar2 = local_28;
    FUN_00fba334();
    local_11 = ((byte)pcVar2 ^ 1) & 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

