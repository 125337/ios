// FUN_0109d084 @ 0109d084

void FUN_0109d084(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  uint local_dc;
  cfstringStruct *local_c8;
  undefined *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  undefined *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined *local_50;
  undefined4 local_44;
  cfstringStruct *local_40;
  undefined8 local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  pcVar1 = local_30;
  FUN_0109a9f4();
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if (((pcVar1 < (cfstringStruct *)((long)&MACH_HEADER.magic + 3)) ||
      (pcVar1 = local_40,
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasPrefix__0269d320,&cf_<),
      ((ulong)pcVar1 & 1) != 0)) ||
     (pcVar1 = local_40,
     (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasPrefix__0269d320,&cf__),
     ((ulong)pcVar1 & 1) != 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
    local_44 = 1;
  }
  else {
    local_c8 = local_40;
    puVar3 = PTR_s_rangeOfString__0269d838;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_rangeOfString__0269d838,&cf_newline_s_);
    local_58 = local_c8;
    local_50 = puVar3;
    if (local_c8 == (cfstringStruct *)0x7fffffffffffffff) {
      local_c8 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    }
    local_60 = local_c8;
    if ((cfstringStruct *)0x50 < local_c8) {
      local_60 = (cfstringStruct *)0x50;
    }
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_substringToIndex__0269d6c0,local_60);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_s_rangeOfString__0269d838;
    local_68 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_rangeOfString__0269d838,&cf__);
    local_78 = pcVar1;
    local_70 = puVar3;
    if (((pcVar1 == (cfstringStruct *)0x7fffffffffffffff) || (pcVar1 == (cfstringStruct *)0x0)) ||
       ((cfstringStruct *)0x40 < pcVar1)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf___;
      local_44 = 1;
    }
    else {
      pcVar2 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_substringToIndex__0269d6c0,pcVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      local_80 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_characterSetWithCharactersInStri_0269d1a0,&cf_<>__);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_80;
      local_88 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_rangeOfCharacterFromSet__0269db68,puVar3)
      ;
      if (pcVar1 == (cfstringStruct *)0x7fffffffffffffff) {
        puVar3 = PTR_WCRefineMessageBlockSupport_026ce0f8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineMessageBlockSupport_026ce0f8,PTR_s_isChatRoomID__0269ec68,local_80);
        pcVar1 = local_80;
        local_dc = 1;
        if (((ulong)puVar3 & 1) == 0) {
          uVar4 = local_38;
          FUN_0109a9f4();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isEqualToString__0269ccc8);
          local_dc = (uint)pcVar1;
          (*(code *)PTR__objc_release_02578630)(uVar4);
        }
        pcVar1 = local_80;
        if ((local_dc & 1) == 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = pcVar1;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = &cf___;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = &cf___;
      }
      local_44 = 1;
      _objc_storeStrong(&local_88);
      _objc_storeStrong(&local_80,0);
    }
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

