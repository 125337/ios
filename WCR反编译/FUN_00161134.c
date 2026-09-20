// FUN_00161134 @ 00161134

byte FUN_00161134(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  cfstringStruct *pcVar8;
  undefined *puVar9;
  cfstringStruct *local_290;
  cfstringStruct *local_278;
  cfstringStruct *local_268;
  cfstringStruct *local_218;
  char *local_188;
  undefined *local_110;
  undefined4 local_104;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  byte local_e1;
  char *local_e0;
  char *local_d8;
  char *local_d0;
  undefined1 local_c1;
  char *local_c0;
  cfstringStruct *local_b8;
  undefined4 local_b0;
  cfstringStruct *local_a0;
  ulong local_98;
  byte local_89;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_98 = 0;
  _objc_storeStrong(&local_98,param_1);
  local_a0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_a0,param_2);
  uVar1 = local_98;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
  if ((uVar1 == 0) || (local_a0 == (cfstringStruct *)0x0)) {
    local_89 = 0;
    local_b0 = 1;
    goto LAB_00161d5c;
  }
  pcVar2 = local_a0;
  FUN_00162a30();
  local_b8 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_mo_fNSn_v);
    local_89 = 0;
    local_b0 = 1;
    goto LAB_00161d5c;
  }
  uVar1 = local_98;
  FUN_001631c8(local_98,pcVar2);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__n_v);
    local_89 = 1;
    local_b0 = 1;
    goto LAB_00161d5c;
  }
  pcVar3 = "CGroupMgr";
  _objc_getClass();
  FUN_0015f0b8();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = pcVar3;
  if ((pcVar3 == (char *)0x0) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_respondsToSelector__026ca818,
                 PTR_s_checkIsHadTopMsgWithUserName_msg_0269f608), ((ulong)pcVar3 & 1) == 0)) {
LAB_001613b0:
    FUN_00163590();
    _objc_retainAutoreleasedReturnValue();
    local_e1 = 0;
    local_d0 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_objectForKeyedSubscript__0269d098,local_98);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    pcVar5 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    if (((ulong)pcVar5 & 1) == 0) {
      local_188 = *(char **)PTR____NSArray0___02578280;
    }
    else {
      local_188 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d0,PTR_s_objectForKeyedSubscript__0269d098,local_98);
      _objc_retainAutoreleasedReturnValue();
      local_e1 = 1;
      local_e0 = local_188;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_mutableCopy_0269d8a0);
    local_d8 = local_188;
    if ((local_e1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_e0);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    while (pcVar3 = local_d8, (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0),
          &MACH_HEADER.cputype < pcVar3) {
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_removeObjectAtIndex__0269d530,0);
    }
    local_f0 = (cfstringStruct *)0x0;
    pcVar2 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a0,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsRealChatUsr_0269d190);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar2 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_m_nsRealChatUsr_0269d190);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_f8 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
      if ((((ulong)pcVar2 & 1) != 0) &&
         (pcVar2 = local_f8, (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_length_0269cca0),
         pcVar2 != (cfstringStruct *)0x0)) {
        _objc_storeStrong(pcVar2,&local_f0,local_f8);
      }
      _objc_storeStrong(&local_f8,0);
    }
    pcVar2 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0);
    if ((pcVar2 == (cfstringStruct *)0x0) &&
       (pcVar2 = local_a0,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_a0,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsFromUsr_0269d088),
       ((ulong)pcVar2 & 1) != 0)) {
      pcVar2 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_m_nsFromUsr_0269d088);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_100 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
      if (((ulong)pcVar2 & 1) != 0) {
        _objc_storeStrong(&local_f0,local_100);
      }
      _objc_storeStrong(&local_100,0);
    }
    pcVar2 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x0) {
      FUN_001637c0();
      _objc_retainAutoreleasedReturnValue();
      local_218 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_218 = &cf___;
      }
      _objc_storeStrong(&local_f0,local_218);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    local_104 = 0;
    pcVar2 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a0,PTR_s_respondsToSelector__026ca818,PTR_s_m_uiMessageType_0269d0a8);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar2 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_m_uiMessageType_0269d0a8);
      local_104 = SUB84(pcVar2,0);
    }
    local_88 = &cf_msgSvrID;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedLongLong__0269d7f8,
               local_b8);
    _objc_retainAutoreleasedReturnValue();
    local_80 = &cf_topId;
    puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_58 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,
               (ulong)local_b8 & 0xffffffff);
    _objc_retainAutoreleasedReturnValue();
    local_78 = &cf_msgType;
    puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_50 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,local_104);
    _objc_retainAutoreleasedReturnValue();
    local_70 = &cf_msgSummary;
    pcVar2 = local_a0;
    local_48 = puVar7;
    FUN_00163a20();
    _objc_retainAutoreleasedReturnValue();
    local_268 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_268 = &cf_mo_;
    }
    local_40 = local_268;
    local_68 = &cf_msgUserName;
    if (local_f0 == (cfstringStruct *)0x0) {
      local_278 = &cf___;
    }
    else {
      local_278 = local_f0;
    }
    local_38 = local_278;
    local_60 = &cf_opUserName;
    pcVar8 = pcVar2;
    FUN_001637c0();
    _objc_retainAutoreleasedReturnValue();
    local_290 = pcVar8;
    if (pcVar8 == (cfstringStruct *)0x0) {
      local_290 = &cf___;
    }
    local_30 = local_290;
    puVar9 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_58,&local_88,6);
    _objc_retainAutoreleasedReturnValue();
    local_110 = puVar9;
    (*(code *)PTR__objc_release_02578630)(pcVar8);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_110);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_setObject_forKeyedSubscript__0269d248,local_d8,local_98);
    FUN_00163f40(local_d0);
    local_89 = 1;
    local_b0 = 1;
    _objc_storeStrong(&local_110);
    _objc_storeStrong(&local_f0,0);
    _objc_storeStrong(&local_d8,0);
    _objc_storeStrong(&local_d0,0);
  }
  else {
    pcVar3 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c0,PTR_s_checkIsHadTopMsgWithUserName_msg_0269f608,local_98,local_b8);
    local_c1 = SUB81(pcVar3,0);
    if (((ulong)pcVar3 & 1) == 0) goto LAB_001613b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__n_v);
    local_89 = 1;
    local_b0 = 1;
  }
  _objc_storeStrong(&local_c0,0);
LAB_00161d5c:
  _objc_storeStrong(&local_a0);
  _objc_storeStrong(&local_98,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_89 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

