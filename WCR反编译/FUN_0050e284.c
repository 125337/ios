// FUN_0050e284 @ 0050e284

void FUN_0050e284(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_f8;
  cfstringStruct *local_c0;
  cfstringStruct *local_68 [2];
  cfstringStruct *local_58;
  long local_50;
  undefined4 local_48;
  long local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  if ((local_30 == (cfstringStruct *)0x0) ||
     (lVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
    local_48 = 1;
  }
  else {
    lVar1 = local_38;
    _NSSelectorFromString();
    pcVar2 = local_30;
    local_50 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,lVar1);
    if (((ulong)pcVar2 & 1) == 0) {
      local_58 = (cfstringStruct *)0x0;
      pcVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,local_38);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_58;
      local_58 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_58;
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
      if (((ulong)pcVar2 & 1) == 0) {
        local_c0 = &cf___;
      }
      else {
        local_c0 = local_58;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = local_c0;
      local_48 = 1;
      _objc_storeStrong(&local_58,0);
    }
    else {
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,local_50);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_68[0] = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
      if (((ulong)pcVar2 & 1) == 0) {
        local_f8 = &cf___;
      }
      else {
        local_f8 = local_68[0];
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = local_f8;
      local_48 = 1;
      _objc_storeStrong(local_68,0);
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

