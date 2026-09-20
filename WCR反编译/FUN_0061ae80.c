// FUN_0061ae80 @ 0061ae80

byte FUN_0061ae80(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  int local_38;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_0061b54c();
  local_28 = uVar1;
  if (uVar1 == 0) {
    local_11 = 0;
    local_38 = 1;
  }
  else {
    local_40 = 0;
    for (local_48 = 0; local_48 < local_28; local_48 = local_48 + 1) {
      uVar1 = local_20;
      FUN_0061b690(local_48 - local_28,local_20,local_48);
      _objc_retainAutoreleasedReturnValue();
      local_50 = uVar1;
      FUN_0061b7f4();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_50;
      local_58 = uVar1;
      FUN_0061bc44();
      if (((uVar2 & 1) == 0) ||
         (((((uVar1 = local_58,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_58,PTR_s_isEqualToString__0269ccc8,&cf_copyGroupID), (uVar1 & 1) == 0
             && (uVar1 = local_58,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_58,PTR_s_isEqualToString__0269ccc8,&cf_viewGroupChatProfileCard),
                (uVar1 & 1) == 0)) &&
            (uVar1 = local_58,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_58,PTR_s_isEqualToString__0269ccc8,&cf_wcrOpenSessionStats),
            (uVar1 & 1) == 0)) &&
           (((uVar1 = local_58,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_58,PTR_s_isEqualToString__0269ccc8,&cf_toggleCustomGroupAvatar_),
             (uVar1 & 1) == 0 &&
             (uVar1 = local_58,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_58,PTR_s_isEqualToString__0269ccc8,&cf_toggleAvatarForGroup_),
             (uVar1 & 1) == 0)) &&
            ((uVar1 = local_58,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_58,PTR_s_isEqualToString__0269ccc8,&cf_toggleRedEnvelopSkipGroup_),
             (uVar1 & 1) == 0 &&
             ((uVar1 = local_58,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_58,PTR_s_isEqualToString__0269ccc8,&cf_toggleAutoAcceptTransferGroup_
                        ), (uVar1 & 1) == 0 &&
              (uVar1 = local_58,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_58,PTR_s_isEqualToString__0269ccc8,&cf_toggleMessageBlockGroup_),
              (uVar1 & 1) == 0)))))))) &&
          ((uVar1 = local_58,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_58,PTR_s_isEqualToString__0269ccc8,&cf_toggleAutoParseLinkGroup_),
           (uVar1 & 1) == 0 &&
           (((((uVar1 = local_58,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_58,PTR_s_isEqualToString__0269ccc8,
                          &cf_toggleAutoParseLinkOutgoingGroup_), (uVar1 & 1) == 0 &&
               (uVar1 = local_58,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_58,PTR_s_isEqualToString__0269ccc8,&cf_toggleKeywordAutoReplyGroup_)
               , (uVar1 & 1) == 0)) &&
              (uVar1 = local_58,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_58,PTR_s_isEqualToString__0269ccc8,
                         &cf_wcrToggleGroupProfileSwitchesExpanded), (uVar1 & 1) == 0)) &&
             ((uVar1 = local_58,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_58,PTR_s_isEqualToString__0269ccc8,
                         &cf_toggleSessionChatIndentOverride_), (uVar1 & 1) == 0 &&
              (uVar1 = local_58,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_58,PTR_s_isEqualToString__0269ccc8,&cf_toggleSessionChatSinkOverride_
                        ), (uVar1 & 1) == 0)))) &&
            ((uVar1 = local_58,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_58,PTR_s_isEqualToString__0269ccc8,&cf_toggleSessionChatLiftOverride_)
             , (uVar1 & 1) == 0 &&
             (uVar1 = local_58,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_58,PTR_s_isEqualToString__0269ccc8,&cf_wcrRefreshGroupMemberAvatars),
             (uVar1 & 1) == 0)))))))))) {
        uVar1 = local_50;
        FUN_0061bc44();
        if ((uVar1 & 1) != 0) {
          local_40 = local_40 + 1;
        }
        local_38 = 0;
      }
      else {
        local_11 = 1;
        local_38 = 1;
      }
      _objc_storeStrong(&local_58);
      _objc_storeStrong(&local_50,0);
      if (local_38 != 0) goto LAB_0061b390;
    }
    local_11 = 1 < local_40;
    local_38 = 1;
  }
LAB_0061b390:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

