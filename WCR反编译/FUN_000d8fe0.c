// FUN_000d8fe0 @ 000d8fe0

void FUN_000d8fe0(undefined8 param_1,long param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *local_90;
  cfstringStruct *local_40;
  undefined4 local_38;
  long local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = param_2;
  if (((local_20 == (cfstringStruct *)0x0) || (param_2 == 0)) ||
     (pcVar1 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,param_2),
     ((ulong)pcVar1 & 1) == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_38 = 1;
  }
  else {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,local_28);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_40 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)pcVar1 & 1) == 0) {
      local_90 = &cf___;
    }
    else {
      local_90 = local_40;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_90;
    local_38 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

