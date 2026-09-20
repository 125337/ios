// FUN_00838b24 @ 00838b24

void FUN_00838b24(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  uint local_58;
  undefined *local_38;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar3 = local_20;
  bVar1 = false;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_58 = 1;
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf_ai_filled);
    if (((ulong)pcVar3 & 1) == 0) {
      pcVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf_ai_filled);
      local_58 = 1;
      if (((ulong)pcVar3 & 1) == 0) goto LAB_00838c98;
    }
    local_38 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    puVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_58 = (uint)puVar2 ^ 1;
  }
LAB_00838c98:
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  pcVar3 = local_20;
  if ((local_58 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_xiaowei_filled;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar3;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

