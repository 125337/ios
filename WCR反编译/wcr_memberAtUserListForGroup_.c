// wcr_memberAtUserListForGroup: @ 009db70c

/* Function Stack Size: 0x18 bytes */

ID WCRefineAnonymousAtHelper::wcr_memberAtUserListForGroup_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  ulong uVar6;
  ulong local_350;
  ulong local_348;
  ulong local_2c8;
  ulong local_2c0;
  cfstringStruct *local_278;
  undefined1 auStack_268 [8];
  long local_260;
  long *local_258;
  ulong local_228;
  cfstringStruct *local_218;
  ID local_210;
  ID local_208;
  cfstringStruct *local_200;
  undefined1 auStack_1f8 [8];
  long local_1f0;
  long *local_1e8;
  undefined8 local_1b8;
  undefined *local_1b0 [4];
  ID local_190;
  ID local_188;
  undefined *local_180;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  ID local_168;
  ID local_160;
  undefined4 local_154;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  SEL local_140;
  ID local_138;
  cfstringStruct *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_148 = (cfstringStruct *)0x0;
  local_140 = param_2;
  local_138 = param_1;
  _objc_storeStrong(&local_148,param_3);
  pcVar2 = local_148;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    local_278 = &::cf___;
  }
  else {
    local_278 = local_148;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_150 = local_278;
  (*(code *)PTR__objc_msgSend_02578628)(local_278,PTR_s_length_0269cca0);
  if ((local_278 == (cfstringStruct *)0x0) ||
     (pcVar2 = local_150,
     (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_hasSuffix__0269d018,&cf__chatroom),
     ((ulong)pcVar2 & 1) == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = &::cf___;
    local_154 = 1;
  }
  else {
    IVar3 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_wcr_contactMgr_026ab088);
    _objc_retainAutoreleasedReturnValue();
    local_168 = 0;
    local_160 = IVar3;
    if ((IVar3 != 0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (IVar3,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
       (IVar3 & 1) != 0)) {
      IVar4 = local_160;
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_getContactByName__0269d178,local_150);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_168;
      local_168 = IVar4;
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    if (local_168 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_130 = &::cf___;
      local_154 = 1;
    }
    else {
      pcVar2 = &cf_tryLoadExtInfoForContact_;
      _NSSelectorFromString();
      local_170 = pcVar2;
      if ((local_160 != 0) &&
         (IVar3 = local_160,
         (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_respondsToSelector__026ca818,pcVar2),
         (IVar3 & 1) != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_160,local_170,local_168);
      }
      pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
      local_178 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_138;
      local_180 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_wcr_localUsrName_026ab098);
      _objc_retainAutoreleasedReturnValue();
      local_190 = 0;
      IVar4 = local_168;
      local_188 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_168,PTR_s_valueForKey__0269d128,&cf_m_nsChatRoomMemList);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_190;
      local_190 = IVar4;
      (*(code *)PTR__objc_release_02578630)(IVar3);
      IVar3 = local_190;
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
      if (((IVar3 & 1) != 0) &&
         (IVar3 = local_190, (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_length_0269cca0),
         IVar3 != 0)) {
        puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                   PTR_s_characterSetWithCharactersInStri_0269d1a0,&cf___);
        _objc_retainAutoreleasedReturnValue();
        local_1b0[0] = puVar1;
        _memset(auStack_1f8,0,0x40);
        IVar3 = local_190;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_190,PTR_s_componentsSeparatedByCharactersI_0269d1a8,local_1b0[0]);
        _objc_retainAutoreleasedReturnValue();
        local_2c0 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_2c0 != 0) {
          lVar5 = *local_1e8;
          local_2c8 = 0;
          do {
            do {
              if (*local_1e8 - lVar5 != 0) {
                _objc_enumerationMutation(*local_1e8 - lVar5,IVar3);
              }
              local_1b8 = *(undefined8 *)(local_1f0 + local_2c8 * 8);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_138,PTR_s_wcr_appendAtMember_parts_seen_me_026ab0a0,local_1b8,
                         local_178,local_180,local_188);
              local_2c8 = local_2c8 + 1;
            } while (local_2c8 < local_2c0);
            local_2c0 = IVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_a8,
                       0x10);
            local_2c8 = 0;
          } while (local_2c0 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(IVar3);
        _objc_storeStrong(local_1b0,0);
      }
      pcVar2 = &cf_m_ChatRoomData;
      _NSSelectorFromString();
      IVar3 = local_168;
      local_200 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_respondsToSelector__026ca818,pcVar2);
      if ((IVar3 & 1) != 0) {
        IVar3 = local_168;
        (*(code *)PTR__objc_msgSend_02578628)(local_168,local_200);
        _objc_retainAutoreleasedReturnValue();
        local_210 = 0;
        pcVar2 = &cf_m_dicData;
        local_208 = IVar3;
        _NSSelectorFromString();
        local_218 = pcVar2;
        if ((local_208 != 0) &&
           (IVar3 = local_208,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_208,PTR_s_respondsToSelector__026ca818,pcVar2), (IVar3 & 1) != 0)) {
          IVar4 = local_208;
          (*(code *)PTR__objc_msgSend_02578628)(local_208,local_218);
          _objc_retainAutoreleasedReturnValue();
          IVar3 = local_210;
          local_210 = IVar4;
          (*(code *)PTR__objc_release_02578630)(IVar3);
        }
        IVar3 = local_210;
        puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
        if (((IVar3 & 1) == 0) && (local_208 != 0)) {
          IVar4 = local_208;
          (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_valueForKey__0269d128,&cf_m_dicData)
          ;
          _objc_retainAutoreleasedReturnValue();
          IVar3 = local_210;
          local_210 = IVar4;
          (*(code *)PTR__objc_release_02578630)(IVar3);
        }
        IVar3 = local_210;
        puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
        if ((IVar3 & 1) != 0) {
          _memset(auStack_268,0,0x40);
          IVar3 = local_210;
          (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_allKeys_0269ef58);
          _objc_retainAutoreleasedReturnValue();
          local_348 = IVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_348 != 0) {
            lVar5 = *local_258;
            local_350 = 0;
            do {
              do {
                if (*local_258 - lVar5 != 0) {
                  _objc_enumerationMutation(*local_258 - lVar5,IVar3);
                }
                uVar6 = *(ulong *)(local_260 + local_350 * 8);
                puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
                local_228 = uVar6;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar1);
                if ((uVar6 & 1) != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_138,PTR_s_wcr_appendAtMember_parts_seen_me_026ab0a0,local_228,
                             local_178,local_180,local_188);
                }
                local_350 = local_350 + 1;
              } while (local_350 < local_348);
              local_348 = IVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_268,
                         auStack_128,0x10);
              local_350 = 0;
            } while (local_348 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(IVar3);
        }
        _objc_storeStrong(&local_210);
        _objc_storeStrong(&local_208,0);
      }
      pcVar2 = local_178;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_178,PTR_s_componentsJoinedByString__0269d140,&cf__);
      _objc_retainAutoreleasedReturnValue();
      local_154 = 1;
      local_130 = pcVar2;
      _objc_storeStrong(&local_190);
      _objc_storeStrong(&local_188,0);
      _objc_storeStrong(&local_180,0);
      _objc_storeStrong(&local_178,0);
    }
    _objc_storeStrong(&local_168);
    _objc_storeStrong(&local_160,0);
  }
  _objc_storeStrong(&local_150);
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_130;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

