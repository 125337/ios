// FUN_0061bc44 @ 0061bc44

byte FUN_0061bc44(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_40 [3];
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_0061b7f4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_20;
  local_28 = uVar1;
  FUN_0061c7a8();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_28;
  local_40[0] = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_copyGroupID);
  if (((((((((uVar1 & 1) == 0) &&
           (uVar1 = local_28,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_28,PTR_s_isEqualToString__0269ccc8,&cf_viewGroupChatProfileCard),
           (uVar1 & 1) == 0)) &&
          (uVar1 = local_28,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_isEqualToString__0269ccc8,&cf_wcrOpenSessionStats),
          (uVar1 & 1) == 0)) &&
         ((uVar1 = local_28,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_isEqualToString__0269ccc8,&cf_toggleCustomGroupAvatar_),
          (uVar1 & 1) == 0 &&
          (uVar1 = local_28,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_isEqualToString__0269ccc8,&cf_toggleAvatarForGroup_),
          (uVar1 & 1) == 0)))) &&
        ((uVar1 = local_28,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_28,PTR_s_isEqualToString__0269ccc8,&cf_toggleRedEnvelopSkipGroup_),
         (uVar1 & 1) == 0 &&
         ((uVar1 = local_28,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_isEqualToString__0269ccc8,&cf_toggleAutoAcceptTransferGroup_),
          (uVar1 & 1) == 0 &&
          (uVar1 = local_28,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_isEqualToString__0269ccc8,&cf_toggleMessageBlockGroup_),
          (uVar1 & 1) == 0)))))) &&
       (uVar1 = local_28,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_28,PTR_s_isEqualToString__0269ccc8,&cf_toggleAutoParseLinkGroup_),
       (uVar1 & 1) == 0)) &&
      ((((uVar1 = local_28,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_28,PTR_s_isEqualToString__0269ccc8,&cf_toggleAutoParseLinkOutgoingGroup_),
         (uVar1 & 1) == 0 &&
         (uVar1 = local_28,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_28,PTR_s_isEqualToString__0269ccc8,&cf_toggleKeywordAutoReplyGroup_),
         (uVar1 & 1) == 0)) &&
        (uVar1 = local_28,
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_isEqualToString__0269ccc8,
                   &cf_wcrToggleGroupProfileSwitchesExpanded), (uVar1 & 1) == 0)) &&
       (((uVar1 = local_28,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_28,PTR_s_isEqualToString__0269ccc8,&cf_toggleSessionChatIndentOverride_),
         (uVar1 & 1) == 0 &&
         (uVar1 = local_28,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_28,PTR_s_isEqualToString__0269ccc8,&cf_toggleSessionChatSinkOverride_),
         (uVar1 & 1) == 0)) &&
        ((uVar1 = local_28,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_28,PTR_s_isEqualToString__0269ccc8,&cf_toggleSessionChatLiftOverride_),
         (uVar1 & 1) == 0 &&
         ((uVar1 = local_28,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_isEqualToString__0269ccc8,&cf_wcrRefreshGroupMemberAvatars),
          (uVar1 & 1) == 0 &&
          (uVar1 = local_28,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_isEqualToString__0269ccc8,&cf_wcr_aiToggleConversation_),
          (uVar1 & 1) == 0)))))))))) &&
     (uVar1 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_28,PTR_s_isEqualToString__0269ccc8,&cf_wcr_aiOpenSessionSettings),
     (uVar1 & 1) == 0)) {
    uVar1 = local_40[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_isEqualToString__0269ccc8,&cf__JI);
    if (((((((uVar1 & 1) == 0) &&
           (uVar1 = local_40[0],
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_40[0],PTR_s_isEqualToString__0269ccc8,&cf_gw_JDeaS), (uVar1 & 1) == 0))
          && (uVar1 = local_40[0],
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_40[0],PTR_s_isEqualToString__0269ccc8,&cf_gwO_), (uVar1 & 1) == 0)) &&
         (((uVar1 = local_40[0],
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_40[0],PTR_s_isEqualToString__0269ccc8,&cf__IN_J4YP), (uVar1 & 1) == 0 &&
           (uVar1 = local_40[0],
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_40[0],PTR_s_isEqualToString__0269ccc8,&cf__T_umo_O__), (uVar1 & 1) == 0)
           ) && (((uVar1 = local_40[0],
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_40[0],PTR_s_isEqualToString__0269ccc8,&cf_RgZSO),
                  (uVar1 & 1) == 0 &&
                  ((uVar1 = local_40[0],
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_40[0],PTR_s_isEqualToString__0269ccc8,&cf__S_NRg),
                   (uVar1 & 1) == 0 &&
                   (uVar1 = local_40[0],
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_40[0],PTR_s_isEqualToString__0269ccc8,&cf_sQ_VY_),
                   (uVar1 & 1) == 0)))) &&
                 (uVar1 = local_40[0],
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_40[0],PTR_s_isEqualToString__0269ccc8,&cf_WCRefine),
                 (uVar1 & 1) == 0)))))) &&
        (((((uVar1 = local_40[0],
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40[0],PTR_s_isEqualToString__0269ccc8,&cf_y_uvh4YP>f_y),
            (uVar1 & 1) == 0 &&
            (uVar1 = local_40[0],
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40[0],PTR_s_isEqualToString__0269ccc8,&cf_Nbdk__S), (uVar1 & 1) == 0))
           && (uVar1 = local_40[0],
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_40[0],PTR_s_isEqualToString__0269ccc8,&cf_Rc6edk_l_),
              (uVar1 & 1) == 0)) &&
          ((uVar1 = local_40[0],
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_40[0],PTR_s_isEqualToString__0269ccc8,&cf_rzJ_Y__<P), (uVar1 & 1) == 0
           && (uVar1 = local_40[0],
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_40[0],PTR_s_isEqualToString__0269ccc8,&cf_rzJ_YNl<P),
              (uVar1 & 1) == 0)))) &&
         ((uVar1 = local_40[0],
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40[0],PTR_s_isEqualToString__0269ccc8,&cf_rzJ_YNnm<P), (uVar1 & 1) == 0
          && ((uVar1 = local_40[0],
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_40[0],PTR_s_isEqualToString__0269ccc8,&cf_7Re_XT4YP),
              (uVar1 & 1) == 0 &&
              (uVar1 = local_40[0],
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_40[0],PTR_s_isEqualToString__0269ccc8,&cf__T_u), (uVar1 & 1) == 0))))
         )))) && (uVar1 = local_40[0],
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_40[0],PTR_s_isEqualToString__0269ccc8,&cf_A), (uVar1 & 1) == 0)) {
      local_11 = 0;
    }
    else {
      local_11 = 1;
    }
  }
  else {
    local_11 = 1;
  }
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

