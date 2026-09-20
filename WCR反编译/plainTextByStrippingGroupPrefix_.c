// plainTextByStrippingGroupPrefix: @ 00ecff1c

/* Function Stack Size: 0x18 bytes */

ID WCRefineChatRoomKickHelper::plainTextByStrippingGroupPrefix_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined *local_58;
  undefined4 local_4c;
  cfstringStruct *local_48;
  undefined8 local_40;
  SEL local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  undefined *local_18;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_40,param_3);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_trimmedString__0269ec98,local_40);
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &::cf___;
    local_4c = 1;
  }
  else {
    pcVar2 = local_48;
    puVar3 = PTR_s_rangeOfString__0269d838;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_rangeOfString__0269d838,&cf__);
    pcVar1 = local_48;
    local_60 = pcVar2;
    local_58 = puVar3;
    if (((pcVar2 == (cfstringStruct *)0x7fffffffffffffff) || (pcVar2 == (cfstringStruct *)0x0)) ||
       (&segment_command_00000020.filesize < pcVar2)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar1;
      local_4c = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_substringToIndex__0269d6c0,pcVar2);
      _objc_retainAutoreleasedReturnValue();
      local_68 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_containsString__0269d0b0,&::cf_space_s_);
      if ((((ulong)pcVar1 & 1) == 0) &&
         (pcVar2 = local_68,
         (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_containsString__0269d0b0,&::cf__),
         pcVar1 = local_30, ((ulong)pcVar2 & 1) == 0)) {
        local_20 = local_60;
        local_18 = local_58;
        pcVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_substringFromIndex__0269d120,local_58 + (long)local_60);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_trimmedString__0269ec98);
        _objc_retainAutoreleasedReturnValue();
        local_28 = pcVar1;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      else {
        pcVar1 = local_48;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar1;
      }
      local_4c = 1;
      _objc_storeStrong(&local_68,0);
    }
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

