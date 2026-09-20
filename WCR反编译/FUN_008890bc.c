// FUN_008890bc @ 008890bc

uint FUN_008890bc(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  uint local_48;
  uint local_40;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar2 = local_18;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  local_40 = 0;
  if ((uVar2 & 1) != 0) {
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isEqualToString__0269ccc8,&cf_ai_filled);
    local_48 = 1;
    if ((uVar2 & 1) == 0) {
      uVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_containsString__0269d0b0,&cf_ai_filled);
      local_48 = (uint)uVar2;
    }
    local_40 = local_48;
  }
  _objc_storeStrong(&local_18,0);
  return local_40 & 1;
}

