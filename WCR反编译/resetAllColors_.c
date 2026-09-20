// resetAllColors: @ 01893718

/* Function Stack Size: 0x18 bytes */

void WCRefineChatAvatarProfileCardViewController::resetAllColors_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  uVar10 = DAT_02339d90;
  uVar9 = DAT_02339d88;
  uVar8 = DAT_023243c8;
  uVar7 = DAT_02324250;
  uVar6 = DAT_02324040;
  uVar5 = DAT_02324038;
  uVar4 = DAT_02323f78;
  uVar3 = DAT_02323f60;
  uVar2 = DAT_02323da0;
  uVar1 = DAT_02323c98;
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_triggerHapticFeedback_0269dc78);
  puVar11 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_40 = puVar11;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02339790,DAT_0232c6d8,uVar6,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setChatAvatarProfileCardBackgrou_026b7350);
  (*(code *)PTR__objc_release_02578630)(puVar12);
  puVar11 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar8,DAT_02323d70,uVar10,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setChatAvatarProfileCardBackgrou_026b7358);
  (*(code *)PTR__objc_release_02578630)();
  FUN_01894008();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setChatAvatarProfileCardRandomLi_026b7360);
  (*(code *)PTR__objc_release_02578630)();
  FUN_018940d0();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setChatAvatarProfileCardRandomDa_026b7368);
  (*(code *)PTR__objc_release_02578630)(puVar11);
  puVar11 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323ff8,0x3fee666666666666,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setChatAvatarProfileCardGlassLig_026b72e0);
  (*(code *)PTR__objc_release_02578630)(puVar11);
  puVar11 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar8,uVar10,DAT_02324258,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setChatAvatarProfileCardGlassDar_026b72e8);
  (*(code *)PTR__objc_release_02578630)(puVar11);
  puVar11 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,uVar2,uVar2,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setChatAvatarProfileCardNameLigh_026b72d0);
  (*(code *)PTR__objc_release_02578630)(puVar11);
  puVar11 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3ff0000000000000,uVar6,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setChatAvatarProfileCardNameDark_026b72d8);
  (*(code *)PTR__objc_release_02578630)(puVar11);
  puVar11 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,uVar4,uVar9,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setChatAvatarProfileCardRegionLi_026b72f0);
  (*(code *)PTR__objc_release_02578630)(puVar11);
  puVar11 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3ff0000000000000,uVar1,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setChatAvatarProfileCardRegionDa_026b72f8);
  (*(code *)PTR__objc_release_02578630)(puVar11);
  puVar11 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar7,uVar7,DAT_02323f38,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setChatAvatarProfileCardSignatur_026b7300);
  (*(code *)PTR__objc_release_02578630)(puVar11);
  puVar11 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3ff0000000000000,uVar3,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setChatAvatarProfileCardSignatur_026b7308);
  (*(code *)PTR__objc_release_02578630)(puVar11);
  puVar11 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,uVar4,uVar9,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setChatAvatarProfileCardLabelLig_026b7310);
  (*(code *)PTR__objc_release_02578630)(puVar11);
  puVar11 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3ff0000000000000,uVar1,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setChatAvatarProfileCardLabelDar_026b7318);
  (*(code *)PTR__objc_release_02578630)(puVar11);
  puVar11 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,uVar2,uVar2,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setChatAvatarProfileCardContentL_026b7320);
  (*(code *)PTR__objc_release_02578630)(puVar11);
  puVar11 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3ff0000000000000,uVar6,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setChatAvatarProfileCardContentD_026b7328);
  (*(code *)PTR__objc_release_02578630)(puVar11);
  puVar11 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,uVar2,uVar2,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setChatAvatarProfileCardButtonTi_026b7330);
  (*(code *)PTR__objc_release_02578630)(puVar11);
  puVar11 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3ff0000000000000,uVar6,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setChatAvatarProfileCardButtonTi_026b7338);
  (*(code *)PTR__objc_release_02578630)(puVar11);
  puVar11 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,uVar5,DAT_02323f80,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setChatAvatarProfileCardButtonSu_026b7340);
  (*(code *)PTR__objc_release_02578630)(puVar11);
  puVar11 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3ff0000000000000,uVar3,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setChatAvatarProfileCardButtonSu_026b7348);
  (*(code *)PTR__objc_release_02578630)(puVar11);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sendSettingsChangedNotification_026b61d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTableData_0269dca8);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__n__bgr);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

