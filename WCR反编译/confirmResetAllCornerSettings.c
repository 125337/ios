// confirmResetAllCornerSettings @ 0193ad78

/* Function Stack Size: 0x10 bytes */

void WCRefineCornerViewController::confirmResetAllCornerSettings(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  char *pcVar9;
  char *local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  uVar7 = DAT_02332e20;
  uVar6 = DAT_02323f78;
  uVar5 = DAT_02323e88;
  uVar4 = DAT_02323e70;
  uVar3 = DAT_02323e48;
  uVar2 = DAT_02323d70;
  uVar1 = DAT_02323c60;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_triggerHapticFeedback_0269dc78);
  puVar8 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar8;
  (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_setSearchCornerEnabled__026b8f48,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSearchCornerRadius__026b8f78);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSearchCornerMargin__026b8f88);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSearchCornerBorderSize__026b8f98);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,uVar1,uVar4,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSearchCornerBorderColorLight__026b8fa0);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,uVar5,0x3fd3333333333333,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSearchCornerBorderColorDark__026b8fa8);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSearchClearMaskEnabled__026a0948,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSearchTextPlaceholderEnabled__026b8f50,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSearchTextPlaceholder__026b8f60,&cf_s__Uj)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setInputCornerEnabled__026b8fb0,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setInputCornerRadius__026b8fc0,0xf);
  (*(code *)PTR__objc_msgSend_02578628)(0,local_38,PTR_s_setInputCornerBorderSize__026b8fd0);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,uVar1,uVar4,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setInputCornerBorderColorLight__026b8fd8);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,uVar5,0x3fd3333333333333,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setInputCornerBorderColorDark__026b8fe0);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setInputBoxTransparencyEnabled__026b8fe8,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setInputBoxTransparencyAlpha__026b8ff8);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setImeKeyboardCornerEnabled__026b94d8,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setImeKeyboardCornerRadius__026b94e8,0x1e);
  (*(code *)PTR__objc_msgSend_02578628)(0,local_38,PTR_s_setImeKeyboardCornerBorderSize__026b94f8);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,uVar2,0x3fe6666666666666,0x3fe0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setImeKeyboardCornerBorderColorL_026b9500);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,uVar2,0x3fe6666666666666,0x3fe0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setImeKeyboardCornerBorderColorD_026b9508);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setTopbarCornerEnabled__026b9000,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setTopbarCornerRadius__026b9018);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setTopbarCornerTopFlatEnabled__026b9008,0);
  (*(code *)PTR__objc_msgSend_02578628)(0,local_38,PTR_s_setTopbarCornerBorderSize__026b9028);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,uVar1,uVar4,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setTopbarCornerBorderColorLight__026b9030);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,uVar5,0x3fd3333333333333,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setTopbarCornerBorderColorDark__026b9038);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setGroupTipsTransparencyEnabled__026b9040,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3fe0000000000000,local_38,PTR_s_setGroupTipsTransparencyAlpha__026b9050);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setToolbarCornerEnabled__026b9058,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setToolbarCornerRadius__026b9070,0x14);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setToolbarCornerBottomFlatEnable_026b9060,0);
  (*(code *)PTR__objc_msgSend_02578628)(0,local_38,PTR_s_setToolbarCornerBorderSize__026b9080);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,uVar1,uVar4,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setToolbarCornerBorderColorLight_026b9088);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,uVar5,0x3fd3333333333333,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setToolbarCornerBorderColorDark__026b9090);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setEmojiCornerEnabled__026b9098,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setEmojiCornerRadius__026b90a8,0xf);
  (*(code *)PTR__objc_msgSend_02578628)(0,local_38,PTR_s_setEmojiCornerBorderSize__026b90b8);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,uVar1,uVar4,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setEmojiCornerBorderColorLight__026b90c0);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,uVar5,0x3fd3333333333333,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setEmojiCornerBorderColorDark__026b90c8);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setChatImageCornerEnabled__026b90d0,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setChatImageCornerRadius__026b90e0,0xf);
  (*(code *)PTR__objc_msgSend_02578628)(0,local_38,PTR_s_setChatImageCornerBorderSize__026b90f0);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,uVar1,uVar4,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setChatImageCornerBorderColorLig_026b90f8);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,uVar5,0x3fd3333333333333,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setChatImageCornerBorderColorDar_026b9100);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setChatFileCornerEnabled__026b9108,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setChatLocationCornerEnabled__026b9110,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setChatBubbleCornerEnabled__026b9118,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setChatBubbleCornerRadius__026b9130,0xc);
  (*(code *)PTR__objc_msgSend_02578628)(0,local_38,PTR_s_setChatBubbleCornerBorderSize__026b9140);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,uVar1,uVar4,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setChatBubbleCornerBorderColorLi_026b9148);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,uVar5,0x3fd3333333333333,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setChatBubbleCornerBorderColorDa_026b9150);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setChatBubbleArrowHidden__026b9120,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setChatTimeRoundCornerEnabled__026b9158,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setChatTimeRoundCornerRadius__026b9168,8);
  (*(code *)PTR__objc_msgSend_02578628)(0,local_38,PTR_s_setChatTimeRoundCornerBorderSize_026b9178);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,uVar1,uVar4,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setChatTimeRoundCornerBorderColo_026b9180);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,uVar5,0x3fd3333333333333,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setChatTimeRoundCornerBorderColo_026b9188);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setChatTimeRoundBackgroundEnable_026b9190,0);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3fee666666666666,0x3fee666666666666,DAT_02323ff8,0x3ff0000000000000,
             PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setChatTimeRoundBackgroundColorL_026b9198);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar7,uVar7,DAT_02323c70,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setChatTimeRoundBackgroundColorD_026b91a0);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setChatTimeRoundTextColorEnabled_026b91a8,0);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar6,uVar6,DAT_02323e10,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setChatTimeRoundTextColorLight__026b91b0);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,uVar4,DAT_02324040,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setChatTimeRoundTextColorDark__026b91b8);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setMsgReferCornerEnabled__026b91c0,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setMsgReferCornerRadius__026b91d0);
  (*(code *)PTR__objc_msgSend_02578628)(0,local_38,PTR_s_setMsgReferCornerBorderSize__026b91e0);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,uVar1,uVar4,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setMsgReferCornerBorderColorLigh_026b91e8);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,uVar5,0x3fd3333333333333,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setMsgReferCornerBorderColorDark_026b91f0);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setMsgReferColorEnabled__026b91f8,0);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3fef3f3f3f3f3f3f,0x3fef3f3f3f3f3f3f,uVar3,0x3fe0000000000000,
             PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setMsgReferColorLight__026b9200);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3fef3f3f3f3f3f3f,0x3fef3f3f3f3f3f3f,uVar3,0x3fe0000000000000,
             PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setMsgReferColorDark__026b9208);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSystemMessageCornerEnabled__026b9210,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSystemMessageCornerRadius__026b9220,10);
  (*(code *)PTR__objc_msgSend_02578628)(0,local_38,PTR_s_setSystemMessageCornerBorderSize_026b9230);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,uVar2,0x3fe6666666666666,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSystemMessageCornerBorderColo_026b9238);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,uVar2,0x3fe6666666666666,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSystemMessageCornerBorderColo_026b9240);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSystemMessageColorEnabled__026b9258,0);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3fef3f3f3f3f3f3f,0x3fef3f3f3f3f3f3f,uVar3,0x3fe0000000000000,
             PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSystemMessageColorLight__026b9248);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3fef3f3f3f3f3f3f,0x3fef3f3f3f3f3f3f,uVar3,0x3fe0000000000000,
             PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSystemMessageColorDark__026b9250);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSystemNoticeCornerEnabled__026b9260,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSystemNoticeCornerRadius__026b9270,10);
  (*(code *)PTR__objc_msgSend_02578628)(0,local_38,PTR_s_setSystemNoticeCornerBorderSize__026b9280);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,uVar2,0x3fe6666666666666,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSystemNoticeCornerBorderColor_026b9288);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,uVar2,0x3fe6666666666666,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSystemNoticeCornerBorderColor_026b9290);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSystemNoticeColorEnabled__026b92a8,0);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3fef3f3f3f3f3f3f,0x3fef3f3f3f3f3f3f,uVar3,0x3fe0000000000000,
             PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSystemNoticeColorLight__026b9298);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3fef3f3f3f3f3f3f,0x3fef3f3f3f3f3f3f,uVar3,0x3fe0000000000000,
             PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSystemNoticeColorDark__026b92a0);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setVoiceTranslateCornerEnabled__026b92b0,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setVoiceTranslateCornerRadius__026b92c0,10);
  (*(code *)PTR__objc_msgSend_02578628)(0,local_38,PTR_s_setVoiceTranslateCornerBorderSiz_026b92d0);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3fe0000000000000,0x3fd3333333333333,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setVoiceTranslateCornerBorderCol_026b92d8);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3fe0000000000000,0x3fd3333333333333,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setVoiceTranslateCornerBorderCol_026b92e0);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setVoiceTranslateColorEnabled__026b92e8,0);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3ff0000000000000,0x3fe0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setVoiceTranslateColorOtherLight_026b92f0);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3ff0000000000000,0x3fe0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setVoiceTranslateColorOtherDark__026b92f8);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3ff0000000000000,0x3fe0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setVoiceTranslateColorSelfLight__026b9300);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3ff0000000000000,0x3fe0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setVoiceTranslateColorSelfDark__026b9308);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setQuickReplyMsgCornerEnabled__026b9518,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setQuickReplyMsgCornerRadius__026b9520,0x19);
  (*(code *)PTR__objc_msgSend_02578628)(0,local_38,PTR_s_setQuickReplyMsgCornerBorderSize_026b9528);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,uVar1,uVar4,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setQuickReplyMsgCornerBorderColo_026b9530);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,uVar5,0x3fd3333333333333,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setQuickReplyMsgCornerBorderColo_026b9538);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setMomentCornerEnabled__026b9310,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setMomentCornerUnifiedEnabled__026b9318,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setMomentOperateMenuCornerEnable_026b9320,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setMomentCornerRadius__026b9330,0xf);
  (*(code *)PTR__objc_msgSend_02578628)(0,local_38,PTR_s_setMomentCornerBorderSize__026b9340);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,uVar1,uVar4,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setMomentCornerBorderColorLight__026b9348);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,uVar5,0x3fd3333333333333,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setMomentCornerBorderColorDark__026b9350);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setFinderCornerEnabled__026b9358,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setFinderCornerRadius__026b9368,0xf);
  (*(code *)PTR__objc_msgSend_02578628)(0,local_38,PTR_s_setFinderCornerBorderSize__026b9378);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,uVar1,uVar4,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setFinderCornerBorderColorLight__026b9380);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,uVar5,0x3fd3333333333333,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setFinderCornerBorderColorDark__026b9388);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setServiceCornerEnabled__026b9390,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setServiceCornerRadius__026b93a0,0xf);
  (*(code *)PTR__objc_msgSend_02578628)(0,local_38,PTR_s_setServiceCornerBorderSize__026b93b0);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,uVar1,uVar4,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setServiceCornerBorderColorLight_026b93b8);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,uVar5,0x3fd3333333333333,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setServiceCornerBorderColorDark__026b93c0);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSendPublishButtonCornerEnable_026b9450,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSendPublishButtonCornerRadius_026b9460,8);
  (*(code *)PTR__objc_msgSend_02578628)(0,local_38,PTR_s_setSendPublishButtonCornerBorder_026b9470);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,uVar2,0x3fe6666666666666,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSendPublishButtonCornerBorder_026b9478);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,uVar2,0x3fe6666666666666,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSendPublishButtonCornerBorder_026b9480);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSystemPopupCornerEnabled__026b9488,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSystemPopupCornerRadius__026b94b0,0xf);
  (*(code *)PTR__objc_msgSend_02578628)(0,local_38,PTR_s_setSystemPopupCornerBorderSize__026b94c0);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,uVar2,0x3fe6666666666666,0x3fe0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSystemPopupCornerBorderColorL_026b94c8);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,uVar2,0x3fe6666666666666,0x3fe0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSystemPopupCornerBorderColorD_026b94d0);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sendSettingsChangedNotification_026b61d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTableData_0269dca8);
  pcVar9 = "WCUIAlertView";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_40 = pcVar9;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar9,PTR_s_addBtnTitle_target_sel__0269d278,&cf_gwSN,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_show_0269d280);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

