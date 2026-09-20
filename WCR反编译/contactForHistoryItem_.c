// contactForHistoryItem: @ 01850734

/* Function Stack Size: 0x18 bytes */

ID WCRefineBatchDeleteFriendHistoryViewController::contactForHistoryItem_
             (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  char *pcVar5;
  long lVar6;
  undefined8 uVar7;
  cfstringStruct *local_2f0;
  cfstringStruct *local_2b8;
  cfstringStruct *local_280;
  undefined *local_220;
  undefined *local_218;
  cfstringStruct *local_1f0;
  bool local_1d1;
  cfstringStruct *local_1d0;
  cfstringStruct *local_1c8;
  byte local_1b9;
  cfstringStruct *local_1b8;
  cfstringStruct *local_1b0;
  byte local_1a1;
  cfstringStruct *local_1a0;
  cfstringStruct *local_198;
  char *local_190;
  char *local_188;
  char *local_168;
  undefined8 local_160;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  undefined8 local_118;
  undefined *local_110;
  char *local_108;
  uint local_100;
  bool local_f9;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  SEL local_e0;
  char *local_d8;
  char *local_d0;
  undefined1 auStack_c8 [128];
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e8 = (cfstringStruct *)0x0;
  local_e0 = param_2;
  local_d8 = (char *)param_1;
  _objc_storeStrong(&local_e8,param_3);
  pcVar2 = local_e8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_userName);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar4 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_f9 = false;
  bVar1 = ((ulong)pcVar4 & 1) == 0;
  if (bVar1) {
    local_1f0 = &::cf___;
  }
  else {
    local_1f0 = local_e8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_userName);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = local_1f0;
  }
  local_f9 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_f0 = local_1f0;
  if ((local_f9 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_f8);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_f0;
  (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_d0 = (char *)0x0;
    local_100 = 1;
  }
  else {
    pcVar5 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_contactMgr_026b6920);
    _objc_retainAutoreleasedReturnValue();
    local_108 = pcVar5;
    if (pcVar5 == (char *)0x0) {
      local_d0 = (char *)0x0;
      local_100 = 1;
    }
    else {
      local_48 = &cf_getContactByNameFromCache_;
      local_40 = &cf_getContactByNameFromDB_;
      local_38 = &cf_getContactForSearchByName_;
      local_30 = &cf_getContactByName_;
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48
                 ,4);
      _objc_retainAutoreleasedReturnValue();
      local_110 = puVar3;
      _memset(auStack_158,0,0x40);
      puVar3 = local_110;
      (*(code *)PTR__objc_retain_02578638)();
      local_218 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_c8,0x10)
      ;
      if (local_218 != (undefined *)0x0) {
        lVar6 = *local_148;
        local_220 = (undefined *)0x0;
        do {
          do {
            if (*local_148 - lVar6 != 0) {
              _objc_enumerationMutation(*local_148 - lVar6,puVar3);
            }
            uVar7 = *(undefined8 *)(local_150 + (long)local_220 * 8);
            local_118 = uVar7;
            _NSSelectorFromString();
            pcVar5 = local_108;
            local_160 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_108,PTR_s_respondsToSelector__026ca818,uVar7);
            if (((ulong)pcVar5 & 1) != 0) {
              pcVar5 = local_108;
              (*(code *)PTR__objc_msgSend_02578628)(local_108,local_160,local_f0);
              _objc_retainAutoreleasedReturnValue();
              local_168 = pcVar5;
              if (pcVar5 != (char *)0x0) {
                (*(code *)PTR__objc_retain_02578638)();
                local_d0 = pcVar5;
              }
              local_100 = (uint)(pcVar5 != (char *)0x0);
              _objc_storeStrong(&local_168,0);
              if (local_100 != 0) goto LAB_01850b60;
            }
            local_220 = local_220 + 1;
          } while (local_220 < local_218);
          local_218 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_c8,
                     0x10);
          local_220 = (undefined *)0x0;
        } while (local_218 != (undefined *)0x0);
      }
      local_100 = 0;
LAB_01850b60:
      (*(code *)PTR__objc_release_02578630)(puVar3);
      if (local_100 == 0) {
        pcVar5 = "CContact";
        _objc_getClass();
        local_188 = pcVar5;
        if (pcVar5 == (char *)0x0) {
          local_d0 = (char *)0x0;
          local_100 = 1;
        }
        else {
          _objc_alloc_init();
          local_190 = pcVar5;
          if (pcVar5 == (char *)0x0) {
            local_d0 = (char *)0x0;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar5,PTR_s_setValue_forKey__0269d300,local_f0,&cf_m_nsUsrName);
            local_1a1 = 0;
            pcVar2 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_nickName);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            pcVar4 = pcVar2;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
            if (((ulong)pcVar4 & 1) == 0) {
              local_280 = &::cf___;
            }
            else {
              local_280 = local_e8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_nickName);
              _objc_retainAutoreleasedReturnValue();
              local_1a1 = 1;
              local_1a0 = local_280;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_198 = local_280;
            if ((local_1a1 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_1a0);
            }
            (*(code *)PTR__objc_release_02578630)(pcVar2);
            local_1b9 = 0;
            pcVar2 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_remark);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            pcVar4 = pcVar2;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
            if (((ulong)pcVar4 & 1) == 0) {
              local_2b8 = &::cf___;
            }
            else {
              local_2b8 = local_e8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_remark);
              _objc_retainAutoreleasedReturnValue();
              local_1b9 = 1;
              local_1b8 = local_2b8;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_1b0 = local_2b8;
            if ((local_1b9 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_1b8);
            }
            (*(code *)PTR__objc_release_02578630)(pcVar2);
            pcVar2 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_aliasName);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            pcVar4 = pcVar2;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
            local_1d1 = ((ulong)pcVar4 & 1) == 0;
            if (local_1d1) {
              local_2f0 = &::cf___;
            }
            else {
              local_2f0 = local_e8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_aliasName);
              _objc_retainAutoreleasedReturnValue();
              local_1d0 = local_2f0;
            }
            local_1d1 = !local_1d1;
            (*(code *)PTR__objc_retain_02578638)();
            local_1c8 = local_2f0;
            if (local_1d1) {
              (*(code *)PTR__objc_release_02578630)(local_1d0);
            }
            (*(code *)PTR__objc_release_02578630)(pcVar2);
            pcVar2 = local_198;
            (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_length_0269cca0);
            if (pcVar2 != (cfstringStruct *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_190,PTR_s_setValue_forKey__0269d300,local_198,&cf_m_nsNickName);
            }
            pcVar2 = local_1b0;
            (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_length_0269cca0);
            if (pcVar2 != (cfstringStruct *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_190,PTR_s_setValue_forKey__0269d300,local_1b0,&cf_m_nsRemark);
            }
            pcVar2 = local_1c8;
            (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_length_0269cca0);
            if (pcVar2 != (cfstringStruct *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_190,PTR_s_setValue_forKey__0269d300,local_1c8,&cf_m_nsAliasName);
            }
            _objc_storeStrong(&local_1c8);
            _objc_storeStrong(&local_1b0,0);
            _objc_storeStrong(&local_198,0);
            pcVar5 = local_190;
            (*(code *)PTR__objc_retain_02578638)();
            local_d0 = pcVar5;
          }
          local_100 = 1;
          _objc_storeStrong(&local_190,0);
        }
      }
      _objc_storeStrong(&local_110,0);
    }
    _objc_storeStrong(&local_108,0);
  }
  _objc_storeStrong(&local_f0);
  _objc_storeStrong(&local_e8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_d0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

