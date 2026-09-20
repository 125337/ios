// openProfileForQuery: @ 00f60bd8

/* Function Stack Size: 0x18 bytes */

bool WCRefineFindUserSupport::openProfileForQuery_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_c0;
  byte local_ac;
  cfstringStruct *local_80;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  byte local_59;
  int local_58;
  bool local_51;
  cfstringStruct *local_50;
  byte local_41;
  undefined *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar3 = local_30;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_80 = local_30;
  local_41 = 0;
  local_51 = false;
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_80 = &::cf___;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_40 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_80;
  }
  local_51 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_80;
  if ((local_51 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  while (pcVar3 = local_38,
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasPrefix__0269d320,&::cf__),
        ((ulong)pcVar3 & 1) != 0) {
    pcVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_substringFromIndex__0269d120,1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_38;
    local_38 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar5);
  }
  pcVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_eQ);
    local_11 = 0;
    local_58 = 1;
    goto LAB_00f610ac;
  }
  pcVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasSuffix__0269d018,&cf__chatroom);
  local_ac = 0;
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasSuffix__0269d018,&cf___chatroom);
    local_ac = (byte)pcVar3 ^ 1;
  }
  local_59 = local_ac & 1;
  pcVar3 = local_38;
  FUN_00f610dc();
  _objc_retainAutoreleasedReturnValue();
  local_68 = pcVar3;
  if ((pcVar3 == (cfstringStruct *)0x0) || (FUN_00f61474(pcVar3,0), ((ulong)pcVar3 & 1) == 0)) {
    if ((local_59 & 1) == 0) {
      pcVar3 = local_38;
      FUN_00f6157c();
      if ((((ulong)pcVar3 & 1) != 0) ||
         (pcVar3 = local_38, FUN_00f61714(), ((ulong)pcVar3 & 1) != 0)) {
        pcVar3 = local_38;
        FUN_00f6180c();
        _objc_retainAutoreleasedReturnValue();
        local_70 = pcVar3;
        if (pcVar3 == (cfstringStruct *)0x0) {
LAB_00f61038:
          local_58 = 0;
        }
        else {
          pcVar5 = local_38;
          FUN_00f6157c();
          if (((ulong)pcVar5 & 1) == 0) {
            local_c0 = (cfstringStruct *)0x0;
          }
          else {
            local_c0 = local_38;
          }
          FUN_00f61474(pcVar3,local_c0);
          if (((ulong)pcVar3 & 1) == 0) goto LAB_00f61038;
          local_11 = 1;
          local_58 = 1;
        }
        _objc_storeStrong(&local_70,0);
        if (local_58 != 0) goto LAB_00f6109c;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__g0W_g_b0R_N_OS_);
      local_11 = 0;
      local_58 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__g_b0R_JS_gReQb);
      local_11 = 0;
      local_58 = 1;
    }
  }
  else {
    local_11 = 1;
    local_58 = 1;
  }
LAB_00f6109c:
  _objc_storeStrong(&local_68,0);
LAB_00f610ac:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

