// FUN_0061b7f4 @ 0061b7f4

void FUN_0061b7f4(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_118;
  cfstringStruct *local_c8;
  cfstringStruct *local_80;
  cfstringStruct *local_70;
  cfstringStruct *local_68 [2];
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar2 = local_30;
  FUN_0061c4dc();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = &cf_clickAction;
  local_38 = pcVar2;
  _NSSelectorFromString();
  local_58 = (cfstringStruct *)0x0;
  local_50 = pcVar3;
  if ((local_38 != (cfstringStruct *)0x0) &&
     (pcVar2 = local_38,
     (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_respondsToSelector__026ca818,pcVar3),
     ((ulong)pcVar2 & 1) != 0)) {
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,local_50);
    local_58 = pcVar3;
  }
  if (local_58 == (cfstringStruct *)0x0) {
    pcVar3 = local_38;
    FUN_0061b3c8(local_38,&cf_clickAction);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_70 = local_38;
      FUN_0061b3c8(local_38,&cf__clickAction);
      _objc_retainAutoreleasedReturnValue();
      local_c8 = local_70;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_68[0] = local_c8;
    if (pcVar3 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_68[0];
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    if (((ulong)pcVar3 & 1) == 0) {
      pcVar3 = local_68[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68[0],PTR_s_respondsToSelector__026ca818,PTR_s_pointerValue_026a2120);
      if (((ulong)pcVar3 & 1) != 0) {
        pcVar3 = local_68[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_pointerValue_026a2120);
        local_58 = pcVar3;
      }
    }
    else {
      pcVar3 = local_68[0];
      _NSSelectorFromString();
      local_58 = pcVar3;
    }
    _objc_storeStrong(local_68,0);
  }
  bVar1 = local_58 == (cfstringStruct *)0x0;
  if (bVar1) {
    local_118 = &cf___;
  }
  else {
    local_118 = local_58;
    _NSStringFromSelector();
    _objc_retainAutoreleasedReturnValue();
    local_80 = local_118;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_118;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

