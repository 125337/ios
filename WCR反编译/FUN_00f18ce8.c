// FUN_00f18ce8 @ 00f18ce8

void FUN_00f18ce8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  ulong local_88;
  cfstringStruct *local_80;
  undefined *puStack_78;
  cfstringStruct *local_70;
  undefined *puStack_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_44;
  cfstringStruct *local_40;
  ulong local_38;
  cfstringStruct *local_30;
  undefined *local_28;
  
  local_38 = 0;
  _objc_storeStrong(&local_38,param_1);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_2);
  pcVar2 = local_40;
  if (local_38 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((((ulong)pcVar2 & 1) != 0) &&
       (pcVar3 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
       pcVar2 = local_40, pcVar3 != (cfstringStruct *)0x0)) {
      puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      local_50 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_retain_02578638)();
      pcVar2 = local_50;
      local_58 = &cf___;
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = pcVar2;
      pcVar2 = local_50;
      puVar1 = PTR_s_rangeOfString__0269d838;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_rangeOfString__0269d838,&cf_format_s_);
      local_70 = pcVar2;
      puStack_68 = puVar1;
      if (pcVar2 == (cfstringStruct *)0x7fffffffffffffff) {
        pcVar2 = local_50;
        puVar1 = PTR_s_rangeOfString__0269d838;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_rangeOfString__0269d838,&cf__);
        local_80 = pcVar2;
        puStack_78 = puVar1;
        local_70 = pcVar2;
        puStack_68 = puVar1;
      }
      if (((local_70 != (cfstringStruct *)0x7fffffffffffffff) && (local_70 != (cfstringStruct *)0x0)
          ) && (local_70 < (cfstringStruct *)0x41)) {
        pcVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_substringToIndex__0269d6c0,local_70);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                   PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_58;
        local_58 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        local_30 = local_70;
        local_28 = puStack_68;
        pcVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_substringFromIndex__0269d120,puStack_68 + (long)local_70);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                   PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_60;
        local_60 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      uVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_referingMessageWrap_0269d110);
      if ((uVar5 & 1) != 0) {
        uVar5 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_referingMessageWrap_0269d110);
        _objc_retainAutoreleasedReturnValue();
        local_88 = uVar5;
        if (uVar5 != 0) {
          FUN_00f18a28(uVar5,PTR_s_setM_nsContent__0269ef88,local_60);
        }
        _objc_storeStrong(&local_88,0);
      }
      pcVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      if (pcVar2 != (cfstringStruct *)0x0) {
        FUN_00f18a28(local_38,PTR_s_setReferMessageSenderDisplayName_026abd90,local_58);
      }
      _objc_storeStrong(&local_60);
      _objc_storeStrong(&local_58,0);
      _objc_storeStrong(&local_50,0);
      local_44 = 0;
      goto LAB_00f1915c;
    }
  }
  local_44 = 1;
LAB_00f1915c:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

