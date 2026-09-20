// FUN_00693da8 @ 00693da8

void FUN_00693da8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_40;
  undefined4 local_38;
  long local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if ((local_20 == (cfstringStruct *)0x0) ||
     (lVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     puVar4 = PTR_s_stringForKey__026a33a0, lVar1 == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_38 = 1;
  }
  else {
    local_40 = (cfstringStruct *)0x0;
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_stringForKey__026a33a0);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,puVar4,local_28);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_40;
      local_40 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    pcVar2 = local_40;
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar3 = local_20;
      FUN_00680afc(local_20,local_28);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_40;
      local_40 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    pcVar2 = local_40;
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
    pcVar3 = local_20;
    if (((ulong)pcVar2 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
      if (((ulong)pcVar3 & 1) != 0) {
        pcVar3 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_objectForKey__0269e048,local_28);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_40;
        local_40 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
    }
    pcVar2 = local_40;
    FUN_0067d980();
    _objc_retainAutoreleasedReturnValue();
    local_38 = 1;
    local_18 = pcVar2;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

