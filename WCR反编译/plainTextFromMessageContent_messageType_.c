// plainTextFromMessageContent:messageType: @ 00fb9fac

/* Function Stack Size: 0x20 bytes */

ID WCRefineHelper::plainTextFromMessageContent_messageType_
             (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_b8;
  cfstringStruct *local_a8;
  cfstringStruct *local_88;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_44;
  cfstringStruct *local_40;
  long_long local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_38 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    local_88 = &::cf___;
  }
  else {
    local_88 = local_30;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_88;
  if (local_38 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
    if (local_88 == (cfstringStruct *)0x0) {
      local_18 = (cfstringStruct *)0x0;
      local_44 = 1;
    }
    else {
      pcVar3 = local_40;
      FUN_00fba334();
      pcVar2 = local_40;
      if (((ulong)pcVar3 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar2;
        local_44 = 1;
      }
      else {
        pcVar3 = local_40;
        FUN_00fba4e0();
        _objc_retainAutoreleasedReturnValue();
        local_50 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
        pcVar2 = local_50;
        if (pcVar3 == (cfstringStruct *)0x0) {
          pcVar2 = local_40;
          FUN_00fba828(0);
          _objc_retainAutoreleasedReturnValue();
          local_58 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
          if (pcVar2 == (cfstringStruct *)0x0) {
            local_a8 = (cfstringStruct *)0x0;
          }
          else {
            local_a8 = local_58;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = local_a8;
          local_44 = 1;
          _objc_storeStrong(&local_58,0);
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = pcVar2;
          local_44 = 1;
        }
        _objc_storeStrong(&local_50,0);
      }
    }
    goto LAB_00fba308;
  }
  if (local_38 != 0x31) {
    local_18 = (cfstringStruct *)0x0;
    local_44 = 1;
    goto LAB_00fba308;
  }
  FUN_00fbaa64(0);
  pcVar2 = local_40;
  local_60 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  local_68 = pcVar2;
  if ((local_60 == (cfstringStruct *)0x1) || (local_60 == (cfstringStruct *)0x39)) {
LAB_00fba264:
    pcVar2 = local_40;
    FUN_00fba4e0();
    _objc_retainAutoreleasedReturnValue();
    local_70 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_b8 = (cfstringStruct *)0x0;
    }
    else {
      local_b8 = local_70;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_b8;
    local_44 = 1;
    _objc_storeStrong(&local_70,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_containsString__0269d0b0,&cf_<refermsg);
    if (((ulong)pcVar2 & 1) != 0) goto LAB_00fba264;
    local_18 = (cfstringStruct *)0x0;
    local_44 = 1;
  }
  _objc_storeStrong(&local_68,0);
LAB_00fba308:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

