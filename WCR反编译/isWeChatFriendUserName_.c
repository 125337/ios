// isWeChatFriendUserName: @ 00fa4510

/* Function Stack Size: 0x18 bytes */

bool WCRefineHelper::isWeChatFriendUserName_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  ulong uVar7;
  cfstringStruct *local_c8;
  char *local_a0;
  byte local_91;
  char *local_90;
  char *local_88;
  char *local_80;
  cfstringStruct *local_78;
  undefined *local_70;
  int local_68;
  bool local_61;
  cfstringStruct *local_60;
  byte local_51;
  undefined *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  
  local_40 = (cfstringStruct *)0x0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  pcVar3 = local_40;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_c8 = local_40;
  local_51 = 0;
  local_61 = false;
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_c8 = &::cf___;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_60 = local_c8;
  }
  local_61 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_c8;
  if ((local_61 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  pcVar3 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_21 = 0;
    local_68 = 1;
    goto LAB_00fa4ae8;
  }
  pcVar3 = local_48;
  puVar2 = PTR_s_rangeOfString__0269d838;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_rangeOfString__0269d838,&cf__chatroom);
  local_78 = pcVar3;
  local_70 = puVar2;
  if (pcVar3 != (cfstringStruct *)0x7fffffffffffffff) {
    local_21 = 0;
    local_68 = 1;
    goto LAB_00fa4ae8;
  }
  pcVar4 = "MMServiceCenter";
  _objc_getClass(0);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = "CContactMgr";
  _objc_getClass("CContactMgr");
  pcVar6 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_getService__0269d170,pcVar5);
  _objc_retainAutoreleasedReturnValue();
  local_80 = pcVar6;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  if ((local_80 == (char *)0x0) ||
     (pcVar4 = local_80,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_80,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
     ((ulong)pcVar4 & 1) == 0)) {
    local_21 = 0;
    local_68 = 1;
  }
  else {
    pcVar4 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_getContactByName__0269d178,local_48);
    _objc_retainAutoreleasedReturnValue();
    local_88 = pcVar4;
    if (pcVar4 == (char *)0x0) {
      local_21 = 0;
      local_68 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_isBrandContact_0269d9c8);
      if ((((ulong)pcVar4 & 1) == 0) ||
         (pcVar4 = local_88,
         (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_isBrandContact_0269d9c8),
         ((ulong)pcVar4 & 1) == 0)) {
        pcVar4 = local_88;
        FUN_00fa4b24(local_88,&cf_m_uiFriendScene,0);
        local_91 = 0;
        pcVar5 = local_80;
        local_90 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_80,PTR_s_respondsToSelector__026ca818,PTR_s_isInContactList__0269efe0);
        if (((ulong)pcVar5 & 1) != 0) {
          pcVar4 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_isInContactList__0269efe0,local_48);
          local_91 = (byte)pcVar4;
        }
        if ((local_91 & 1) == 0) {
          if (local_90 == (char *)0x0) {
            pcVar4 = local_88;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_88,PTR_s_valueForKey__0269d128,&cf_m_nsFriendUserName);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_a0 = pcVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
            uVar7 = (ulong)pcVar4 & 0xffffffff;
            if (((ulong)pcVar4 & 1) == 0) {
LAB_00fa4a54:
              local_68 = 0;
            }
            else {
              pcVar4 = local_a0;
              (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
              uVar7 = 0;
              if (pcVar4 == (char *)0x0) goto LAB_00fa4a54;
              uVar7 = 1;
              local_21 = 1;
              local_68 = 1;
            }
            _objc_storeStrong(uVar7,&local_a0,0);
            if (local_68 == 0) {
              local_21 = 0;
              local_68 = 1;
            }
          }
          else {
            local_21 = 1;
            local_68 = 1;
          }
        }
        else {
          local_21 = 1;
          local_68 = 1;
        }
      }
      else {
        local_21 = 0;
        local_68 = 1;
      }
    }
    _objc_storeStrong(&local_88,0);
  }
  _objc_storeStrong(&local_80,0);
LAB_00fa4ae8:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

