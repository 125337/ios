// FUN_001090c0 @ 001090c0

void FUN_001090c0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  char *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  uint local_c4;
  undefined *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  char *local_a0;
  char *local_98;
  char *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined4 local_48;
  byte local_41;
  undefined *local_40;
  undefined *local_28;
  
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_1);
  local_41 = 0;
  local_c4 = 1;
  if (local_28 != (undefined *)0x0) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_40 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_c4 = (uint)puVar1 ^ 1;
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if ((local_c4 & 1) == 0) {
    puVar1 = local_28;
    FUN_00108c2c(local_28,&cf_m_contact);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_28;
    local_50 = puVar1;
    FUN_00108c2c(local_28,&cf_m_chatContact);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_50;
    local_58 = puVar2;
    FUN_00108db0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_58;
    local_60 = puVar1;
    FUN_00108db0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
    local_68 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineChatRoomKickHelper_026ce2d8,
               PTR_s_currentUserCanRemoveMember_inRoo_0269edd0,local_60,puVar2);
    if (((ulong)puVar1 & 1) == 0) {
      local_48 = 1;
    }
    else {
      puVar1 = local_28;
      FUN_00108c2c(local_28,&cf_m_tableViewInfo);
      _objc_retainAutoreleasedReturnValue();
      local_70 = puVar1;
      if ((puVar1 == (undefined *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_respondsToSelector__026ca818,PTR_s_addSection__0269e3d0),
         ((ulong)puVar1 & 1) == 0)) {
        local_48 = 1;
      }
      else {
        puVar1 = local_28;
        _object_getClass();
        FUN_00104048(puVar1);
        puVar1 = PTR_WCRefineHelper_026ce000;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
        _objc_retainAutoreleasedReturnValue();
        local_78 = puVar1;
        FUN_00109958();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_28;
        local_80 = puVar1;
        FUN_00109c00(local_28,puVar1);
        _objc_retainAutoreleasedReturnValue();
        local_90 = (char *)0x0;
        pcVar3 = "WCTableViewNormalCellManager";
        local_88 = puVar2;
        _objc_getClass();
        pcVar4 = "WCTableViewCellManager";
        local_98 = pcVar3;
        _objc_getClass();
        pcVar5 = &cf_cellForMakeSel_makeTarget_height_userInfo_;
        local_a0 = pcVar4;
        _NSSelectorFromString();
        pcVar6 = &cf_sendMsgBtnCell_CellInfo_;
        local_a8 = pcVar5;
        _NSSelectorFromString();
        local_b0 = pcVar6;
        if (((local_88 != (undefined *)0x0) &&
            (puVar1 = local_28,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_respondsToSelector__026ca818,pcVar6), ((ulong)puVar1 & 1) != 0
            )) && (pcVar3 = local_98,
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_98,PTR_s_respondsToSelector__026ca818,local_a8),
                  ((ulong)pcVar3 & 1) != 0)) {
          pcVar4 = local_98;
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x404c000000000000,local_98,local_a8,local_b0,local_28,local_88);
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = local_90;
          local_90 = pcVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar3);
        }
        if (local_90 == (char *)0x0) {
          puVar1 = local_88;
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_imageForState__0269edf0,0);
          _objc_retainAutoreleasedReturnValue();
          local_b8 = puVar1;
          if ((puVar1 == (undefined *)0x0) &&
             (puVar1 = PTR__OBJC_CLASS___UIImage_026cdfd0,
             (*(code *)PTR__objc_msgSend_02578628)
                       (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_respondsToSelector__026ca818,
                        PTR_s_systemImageNamed__026cab78), ((ulong)puVar1 & 1) != 0)) {
            puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,&cf_trash
                      );
            _objc_retainAutoreleasedReturnValue();
            puVar1 = local_b8;
            local_b8 = puVar2;
            (*(code *)PTR__objc_release_02578630)(puVar1);
          }
          pcVar5 = &cf_normalCellForSel_target_title_titleColor_leftImage_withRightRedDot_;
          _NSSelectorFromString();
          pcVar3 = local_a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_respondsToSelector__026ca818,pcVar5);
          if (((ulong)pcVar3 & 1) == 0) {
            pcVar3 = "WCTableViewNormalCellManager";
            _objc_getClass();
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar3,PTR_s_centerCellForSel_target_title__0269edf8,
                       PTR_s_wcr_removeInvitedMember_0269edc8,local_28,&cf_yddkbXT);
            _objc_retainAutoreleasedReturnValue();
            pcVar4 = local_90;
            local_90 = pcVar3;
            (*(code *)PTR__objc_release_02578630)(pcVar4);
          }
          else {
            pcVar4 = local_a0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_a0,pcVar5,PTR_s_wcr_removeInvitedMember_0269edc8,local_28,&cf_yddkbXT,
                       local_80,local_b8,0);
            _objc_retainAutoreleasedReturnValue();
            pcVar3 = local_90;
            local_90 = pcVar4;
            (*(code *)PTR__objc_release_02578630)(pcVar3);
          }
          FUN_0010a2c0(local_90,local_80);
          _objc_storeStrong(&local_b8,0);
        }
        if (local_90 != (char *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_addCell__0269e3f8,local_90);
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_addSection__0269e3d0,local_78);
        }
        _objc_storeStrong(&local_90);
        _objc_storeStrong(&local_88,0);
        _objc_storeStrong(&local_80,0);
        _objc_storeStrong(&local_78,0);
        local_48 = 0;
      }
      _objc_storeStrong(&local_70,0);
    }
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
  }
  else {
    local_48 = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

