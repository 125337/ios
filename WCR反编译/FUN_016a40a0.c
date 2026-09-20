// FUN_016a40a0 @ 016a40a0

void FUN_016a40a0(cfstringStruct *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *pcVar8;
  uint local_214;
  uint local_1ec;
  cfstringStruct *local_178;
  byte local_154;
  cfstringStruct *local_130;
  byte local_100;
  undefined *local_a8;
  undefined *local_98;
  cfstringStruct *local_88;
  byte local_7a;
  bool local_79;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  byte local_65;
  undefined4 local_64;
  cfstringStruct *local_60 [3];
  cfstringStruct *local_48;
  undefined8 local_40;
  undefined8 local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  pcVar2 = local_30;
  (*DAT_028e3db8)(local_30,local_38,local_40);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_30;
  local_48 = pcVar2;
  FUN_016aa360();
  _objc_retainAutoreleasedReturnValue();
  local_60[0] = pcVar3;
  if (((pcVar3 == (cfstringStruct *)0x0) ||
      ((*(code *)PTR__objc_msgSend_02578628)
                 (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_IsMsgBubbleForbidAll_026a7a68),
      ((ulong)pcVar3 & 1) == 0)) ||
     (pcVar2 = local_60[0],
     (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_IsMsgBubbleForbidAll_026a7a68),
     local_28 = local_48, ((ulong)pcVar2 & 1) == 0)) {
    pcVar3 = local_30;
    _WCRefineAppendVoiceToolsMediaMenuItems(local_30,local_48);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_48;
    local_48 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar3 = (cfstringStruct *)PTR_WCRefineEmoticonToolsHelper_026ce448;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineEmoticonToolsHelper_026ce448,
               PTR_s_appendLongPressMenuItemsForCell__026a1e28,local_30,local_48);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_48;
    local_48 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar3 = local_30;
    pcVar2 = &cf_AppFileMessageCellViewV2;
    _NSClassFromString();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,pcVar2);
    pcVar2 = local_30;
    local_100 = 1;
    if (((ulong)pcVar3 & 1) == 0) {
      pcVar3 = &cf_AppFileMessageCellView;
      _NSClassFromString();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,pcVar3);
      local_100 = (byte)pcVar2;
    }
    local_65 = local_100 & 1;
    pcVar2 = local_30;
    FUN_016aa360();
    _objc_retainAutoreleasedReturnValue();
    local_70 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_79 = false;
      bVar1 = (local_65 & 1) == 0;
      if (bVar1) {
        local_130 = local_48;
      }
      else {
        local_130 = local_30;
        FUN_016bb3c0(local_30,local_48);
        _objc_retainAutoreleasedReturnValue();
        local_78 = local_130;
      }
      local_79 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = local_130;
      if ((local_79 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_78);
      }
      local_64 = 1;
    }
    else {
      puVar4 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_154 = 0;
      if (((ulong)puVar5 & 1) != 0) {
        pcVar2 = local_70;
        FUN_016bc434();
        local_154 = (byte)pcVar2;
      }
      (*(code *)PTR__objc_release_02578630)(puVar4);
      local_7a = local_154 & 1;
      pcVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_m_nsContent_0269d0a0);
      _objc_retainAutoreleasedReturnValue();
      local_178 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_178 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = local_178;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_88;
      puVar4 = PTR_WCRefineHelper_026ce000;
      pcVar3 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_m_uiMessageType_0269d0a8);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_themeCardQuickDeliveryMenuAvaila_026b2ce8,pcVar2,(long)(int)pcVar3);
      puVar5 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar5);
      pcVar3 = local_30;
      FUN_016bc52c();
      pcVar7 = local_70;
      FUN_016bc728();
      pcVar8 = local_30;
      FUN_016bc808(local_30,local_48);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_48;
      local_48 = pcVar8;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar8 = local_30;
      _WCRefineAppendRestrictedForwardMenuItemIfNeeded(local_30,local_48);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_48;
      local_48 = pcVar8;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar8 = local_48;
      FUN_016bca74(local_48,local_7a & 1,&cf_lp_theme_box,&cf___,&cf_gift_filled_icon,
                   PTR_s_handleLongPressThemeRedeem__026b2cf8);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_48;
      local_48 = pcVar8;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar8 = local_48;
      FUN_016bca74(local_48,(uint)puVar4 & 1,&cf_lp_theme_card_delivery,&cf_aS_b,
                   &cf_ecs_icon_colorful_special,PTR_s_WCRefine_onLongPressThemeCardQui_026b2ad8);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_48;
      local_48 = pcVar8;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar8 = local_48;
      FUN_016bca74(local_48,(uint)pcVar3 & 1,&cf_lp_message_repo,&cf_OSVY,&cf_icons_outlined_chats,
                   PTR_s_WCRefine_onLongPressSaveToMessag_026b2b10);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_48;
      local_48 = pcVar8;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_48;
      local_1ec = 0;
      bVar1 = ((ulong)pcVar7 & 1) != 0;
      if (bVar1) {
        local_98 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_1ec = (uint)puVar4;
      }
      FUN_016bca74(pcVar2,local_1ec & 1,&cf_lp_word_segmentation,&cf_R,&cf_icons_filled_allselect,
                   PTR_s_WCRefine_onLongPressWordSegmenta_026b2ae0);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_48;
      local_48 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_98);
      }
      pcVar2 = local_48;
      local_214 = 0;
      bVar1 = ((ulong)pcVar7 & 1) != 0;
      if (bVar1) {
        local_a8 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = local_a8;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_214 = (uint)puVar4;
      }
      FUN_016bca74(pcVar2,local_214 & 1,&cf_lp_quick_reuse,&cf_Y_u,&cf_icons_multitalk_scroll,
                   PTR_s_WCRefine_onLongPressQuickReuse__026b2ae8);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_48;
      local_48 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_a8);
      }
      pcVar3 = local_30;
      FUN_016bccd4(local_30,local_48);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_48;
      local_48 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar3 = local_48;
      FUN_016bca74(local_48,(uint)puVar6 & 1,&cf_lp_repeat,&cf_Y,&cf_icons_filled_nearby_hot,
                   PTR_s_WCRefine_onLongPressRepeat__026b2af0);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_48;
      local_48 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_48;
      pcVar3 = local_70;
      FUN_016bcf64();
      FUN_016bca74(pcVar2,(ulong)pcVar3 & 0xffffffff,&cf_lp_parse_link,&cf_g,&cf_link_regular,
                   PTR_s_WCRefine_onLongPressParseLink__026b2b00);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_48;
      local_48 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar2 = local_48;
      pcVar3 = local_30;
      _WCRefineAIReplyMenuAvailableForCell();
      FUN_016bca74(pcVar2,(ulong)pcVar3 & 0xffffffff,&cf_lp_ai_reply,&cf_A,&cf_icons_outlined_chats,
                   PTR_s_WCRefine_onLongPressAIReply__026b2b08);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_48;
      local_48 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      if ((local_65 & 1) != 0) {
        pcVar3 = local_30;
        FUN_016bb3c0(local_30,local_48);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_48;
        local_48 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      pcVar2 = local_48;
      FUN_016bd1ac();
      _objc_retainAutoreleasedReturnValue();
      local_64 = 1;
      local_28 = pcVar2;
      _objc_storeStrong(&local_88,0);
    }
    _objc_storeStrong(&local_70,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_64 = 1;
  }
  _objc_storeStrong(local_60);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

