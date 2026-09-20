// isOfficialAccountOrBrandUserName: @ 00fa3d38

/* Function Stack Size: 0x18 bytes */

bool WCRefineHelper::isOfficialAccountOrBrandUserName_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *local_118;
  ulong local_f8;
  char *local_d0;
  char *local_c8;
  cfstringStruct *local_c0;
  undefined4 local_b8;
  bool local_b1;
  cfstringStruct *local_b0;
  byte local_a1;
  undefined *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  SEL local_88;
  ID local_80;
  byte local_71;
  cfstringStruct *local_70 [9];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_90 = (cfstringStruct *)0x0;
  local_88 = param_2;
  local_80 = param_1;
  _objc_storeStrong(&local_90,param_3);
  pcVar7 = local_90;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_118 = local_90;
  local_a1 = 0;
  local_b1 = false;
  bVar1 = ((ulong)pcVar7 & 1) == 0;
  if (bVar1) {
    local_118 = &::cf___;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    local_a1 = 1;
    local_a0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_stringByTrimmingCharactersInSet__0269d0c0)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_b0 = local_118;
  }
  local_b1 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_98 = local_118;
  if ((local_b1 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_b0);
  }
  if ((local_a1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_a0);
  }
  pcVar7 = local_98;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
  if (pcVar7 == (cfstringStruct *)0x0) {
    local_71 = 0;
    local_b8 = 1;
  }
  else {
    pcVar7 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = pcVar7;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_hasPrefix__0269d320,&cf_gh_);
    if (((ulong)pcVar7 & 1) == 0) {
      pcVar7 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_isEqualToString__0269ccc8,&cf_brandsessionholder);
      if ((((((ulong)pcVar7 & 1) == 0) &&
           (pcVar7 = local_c0,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_c0,PTR_s_isEqualToString__0269ccc8,&cf_officialaccounts),
           ((ulong)pcVar7 & 1) == 0)) &&
          (pcVar7 = local_c0,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c0,PTR_s_isEqualToString__0269ccc8,&cf_brandservicesessionholder),
          ((ulong)pcVar7 & 1) == 0)) &&
         (pcVar7 = local_c0,
         (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_isEqualToString__0269ccc8,&cf_qqmail),
         ((ulong)pcVar7 & 1) == 0)) {
        pcVar7 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_hasSuffix__0269d018,&cf__chatroom);
        if ((((ulong)pcVar7 & 1) == 0) &&
           (pcVar7 = local_c0,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_c0,PTR_s_hasSuffix__0269d018,&cf__im_chatroom), ((ulong)pcVar7 & 1) == 0
           )) {
          pcVar7 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_containsString__0269d0b0,&cf__openim)
          ;
          if (((ulong)pcVar7 & 1) == 0) {
            pcVar3 = "MMServiceCenter";
            _objc_getClass();
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            pcVar4 = "CContactMgr";
            _objc_getClass("CContactMgr");
            pcVar5 = pcVar3;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_getService__0269d170,pcVar4);
            _objc_retainAutoreleasedReturnValue();
            local_c8 = pcVar5;
            (*(code *)PTR__objc_release_02578630)(pcVar3);
            if ((local_c8 == (char *)0x0) ||
               (pcVar3 = local_c8,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_c8,PTR_s_respondsToSelector__026ca818,
                          PTR_s_getContactByName__0269d178), ((ulong)pcVar3 & 1) == 0)) {
              local_71 = 0;
              local_b8 = 1;
            }
            else {
              pcVar3 = local_c8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_c8,PTR_s_getContactByName__0269d178,local_98);
              _objc_retainAutoreleasedReturnValue();
              local_d0 = pcVar3;
              if (pcVar3 == (char *)0x0) {
                local_71 = 0;
              }
              else {
                pcVar7 = &cf_isOpenImContact;
                _NSSelectorFromString();
                if (((pcVar7 == (cfstringStruct *)0x0) ||
                    (pcVar3 = local_d0,
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_d0,PTR_s_respondsToSelector__026ca818,pcVar7),
                    ((ulong)pcVar3 & 1) == 0)) ||
                   (pcVar3 = local_d0, (*(code *)PTR__objc_msgSend_02578628)(local_d0,pcVar7),
                   ((ulong)pcVar3 & 1) == 0)) {
                  local_70[0] = (cfstringStruct *)PTR_s_isBrandContact_0269d9c8;
                  local_70[1] = (cfstringStruct *)PTR_s_isOfficialContact_0269d9d0;
                  pcVar7 = &cf_isServiceBrand;
                  _NSSelectorFromString();
                  pcVar6 = &cf_isSubscriptionBrand;
                  local_70[2] = pcVar7;
                  _NSSelectorFromString();
                  pcVar7 = &cf_isBrandSessionHolder;
                  local_70[3] = pcVar6;
                  _NSSelectorFromString();
                  pcVar6 = &cf_isBrandServiceBoxSession;
                  local_70[4] = pcVar7;
                  _NSSelectorFromString();
                  pcVar7 = &cf_isNormalBrand;
                  local_70[5] = pcVar6;
                  _NSSelectorFromString();
                  pcVar6 = &cf_isWeAppContact;
                  local_70[6] = pcVar7;
                  _NSSelectorFromString();
                  pcVar7 = &cf_isTemplateMsgHolder;
                  local_70[7] = pcVar6;
                  _NSSelectorFromString();
                  local_70[8] = pcVar7;
                  for (local_f8 = 0; local_f8 < 9; local_f8 = local_f8 + 1) {
                    pcVar7 = local_70[local_f8];
                    if (((pcVar7 != (cfstringStruct *)0x0) &&
                        (pcVar3 = local_d0,
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_d0,PTR_s_respondsToSelector__026ca818,pcVar7),
                        ((ulong)pcVar3 & 1) != 0)) &&
                       (pcVar3 = local_d0, (*(code *)PTR__objc_msgSend_02578628)(local_d0,pcVar7),
                       ((ulong)pcVar3 & 1) != 0)) {
                      local_71 = 1;
                      goto LAB_00fa447c;
                    }
                  }
                  local_71 = 0;
                }
                else {
                  local_71 = 0;
                }
              }
LAB_00fa447c:
              local_b8 = 1;
              _objc_storeStrong(&local_d0,0);
            }
            _objc_storeStrong(&local_c8,0);
          }
          else {
            local_71 = 0;
            local_b8 = 1;
          }
        }
        else {
          local_71 = 0;
          local_b8 = 1;
        }
      }
      else {
        local_71 = 1;
        local_b8 = 1;
      }
    }
    else {
      local_71 = 1;
      local_b8 = 1;
    }
    _objc_storeStrong(&local_c0,0);
  }
  _objc_storeStrong(&local_98);
  _objc_storeStrong(&local_90,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_71 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

