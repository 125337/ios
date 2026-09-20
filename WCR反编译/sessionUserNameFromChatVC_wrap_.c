// sessionUserNameFromChatVC:wrap: @ 00f42104

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

ID WCRefineEmoticonToolsHelper::sessionUserNameFromChatVC_wrap_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  ID local_200;
  ID local_1f0;
  undefined *local_198;
  undefined *local_190;
  byte local_159;
  ID local_158;
  ID local_150;
  ID local_148;
  int local_13c;
  ID local_138;
  undefined8 local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  ulong local_e0;
  ID local_d8;
  SEL local_d0;
  ID local_c8;
  ID local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = 0;
  local_d0 = param_2;
  local_c8 = param_1;
  _objc_storeStrong(&local_d8,param_3);
  local_e0 = 0;
  _objc_storeStrong(&local_e0,param_4);
  _memset(auStack_128,0,0x40);
  local_b8 = &cf_GetChatName;
  local_b0 = &cf_getChatName;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b8,2);
  _objc_retainAutoreleasedReturnValue();
  local_190 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_190 != (undefined *)0x0) {
    lVar7 = *local_118;
    local_198 = (undefined *)0x0;
    do {
      do {
        if (*local_118 - lVar7 != 0) {
          _objc_enumerationMutation(*local_118 - lVar7,puVar1);
        }
        uVar8 = *(undefined8 *)(local_120 + (long)local_198 * 8);
        local_e8 = uVar8;
        _NSSelectorFromString();
        IVar2 = local_d8;
        local_130 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_respondsToSelector__026ca818,uVar8);
        if ((IVar2 & 1) != 0) {
          IVar2 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,local_130);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_138 = IVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
          if (((IVar2 & 1) == 0) ||
             (IVar4 = local_138,
             (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_length_0269cca0),
             IVar2 = local_138, IVar4 == 0)) {
            local_13c = 0;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_c0 = IVar2;
            local_13c = 1;
          }
          _objc_storeStrong(&local_138,0);
          if (local_13c != 0) goto LAB_00f423c8;
        }
        local_198 = local_198 + 1;
      } while (local_198 < local_190);
      local_190 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10)
      ;
      local_198 = (undefined *)0x0;
    } while (local_190 != (undefined *)0x0);
  }
  local_13c = 0;
LAB_00f423c8:
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (local_13c == 0) {
    IVar4 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_stringValueFromObject_key__026abfe0,local_d8,&cf_m_nsUserName);
    _objc_retainAutoreleasedReturnValue();
    local_148 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_length_0269cca0);
    IVar2 = local_148;
    if (IVar4 == 0) {
      IVar4 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_stringValueFromObject_key__026abfe0,local_d8,&cf_m_nsChatName);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = local_148;
      local_148 = IVar4;
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar4 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0);
      IVar2 = local_148;
      if (IVar4 == 0) {
        IVar2 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c8,PTR_s_stringValueFromObject_key__026abfe0,local_e0,&cf_m_nsToUsr);
        _objc_retainAutoreleasedReturnValue();
        IVar4 = local_c8;
        local_150 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c8,PTR_s_stringValueFromObject_key__026abfe0,local_e0,&cf_m_nsFromUsr);
        _objc_retainAutoreleasedReturnValue();
        IVar5 = local_150;
        local_158 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_150,PTR_s_containsString__0269d0b0,&cf__chatroom);
        IVar2 = local_150;
        if ((IVar5 & 1) == 0) {
          IVar4 = local_158;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_158,PTR_s_containsString__0269d0b0,&cf__chatroom);
          IVar2 = local_158;
          if ((IVar4 & 1) == 0) {
            local_159 = 0;
            uVar6 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e0,PTR_s_respondsToSelector__026ca818,PTR_s_IsSender_026ac238);
            if ((uVar6 & 1) != 0) {
              uVar6 = local_e0;
              (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_IsSender_026ac238);
              local_159 = (byte)uVar6;
            }
            if ((local_159 & 1) == 0) {
              IVar2 = local_158;
              (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0);
              if (IVar2 == 0) {
                local_200 = local_150;
              }
              else {
                local_200 = local_158;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_c0 = local_200;
            }
            else {
              IVar2 = local_150;
              (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_length_0269cca0);
              if (IVar2 == 0) {
                local_1f0 = local_158;
              }
              else {
                local_1f0 = local_150;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_c0 = local_1f0;
            }
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_c0 = IVar2;
          }
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_c0 = IVar2;
        }
        local_13c = 1;
        _objc_storeStrong(&local_158);
        _objc_storeStrong(&local_150,0);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_c0 = IVar2;
        local_13c = 1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_c0 = IVar2;
      local_13c = 1;
    }
    _objc_storeStrong(&local_148,0);
  }
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_c0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

