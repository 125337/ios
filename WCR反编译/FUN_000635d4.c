// FUN_000635d4 @ 000635d4

void FUN_000635d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_188;
  cfstringStruct *local_70 [3];
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_48;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_2);
  pcVar2 = local_38;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_containsString__0269d0b0,&cf__chatroom);
    pcVar2 = local_38;
    if (((ulong)pcVar3 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar2;
      local_48 = 1;
      goto LAB_00063c98;
    }
  }
  local_50 = (cfstringStruct *)0x0;
  local_58 = (cfstringStruct *)0x0;
  pcVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_m_nsFromUsr);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_50;
  local_50 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_m_nsToUsr);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_58;
  local_58 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_50;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
LAB_000638f0:
    pcVar2 = local_58;
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_containsString__0269d0b0,&cf__chatroom);
      pcVar3 = local_58;
      if (((ulong)pcVar2 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar3;
        local_48 = 1;
        goto LAB_00063c58;
      }
    }
    FUN_00063168();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_50;
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_70[0] = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((ulong)pcVar3 & 1) == 0) {
LAB_00063ac4:
      pcVar2 = local_58;
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      if (((ulong)pcVar2 & 1) != 0) {
        pcVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
        if (pcVar2 != (cfstringStruct *)0x0) {
          pcVar3 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_isEqualToString__0269ccc8,local_70[0]);
          pcVar2 = local_58;
          if (((ulong)pcVar3 & 1) == 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = pcVar2;
            goto LAB_00063c48;
          }
        }
      }
      pcVar2 = local_38;
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      if (((ulong)pcVar2 & 1) == 0) {
        local_188 = &cf___;
      }
      else {
        local_188 = local_38;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = local_188;
    }
    else {
      pcVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
      if (pcVar2 == (cfstringStruct *)0x0) goto LAB_00063ac4;
      pcVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,local_70[0]);
      pcVar2 = local_50;
      if (((ulong)pcVar3 & 1) != 0) goto LAB_00063ac4;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar2;
    }
LAB_00063c48:
    local_48 = 1;
    _objc_storeStrong(local_70,0);
  }
  else {
    pcVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_containsString__0269d0b0,&cf__chatroom);
    pcVar2 = local_50;
    if (((ulong)pcVar3 & 1) == 0) goto LAB_000638f0;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar2;
    local_48 = 1;
  }
LAB_00063c58:
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
LAB_00063c98:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

