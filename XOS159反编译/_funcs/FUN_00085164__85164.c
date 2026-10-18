// FUN_00085164 @0x85164


undefined8 FUN_00085164(undefined8 param_1)



{

  undefined4 uVar1;

  undefined8 uVar2;

  ulong uVar3;

  undefined8 extraout_x1;

  undefined8 uVar4;

  cfstringStruct *pcVar5;

  undefined1 auVar6 [16];

  

  _objc_retain();

  uVar2 = _objc_opt_class(&_OBJC_CLASS___NSString);

  uVar3 = _objc_opt_isKindOfClass(param_1,uVar2);

  if ((uVar3 & 1) == 0) {

LAB_000851e8:

    uVar2 = 0;

    goto switchD_000851d8_caseD_49;

  }

  auVar6 = FUN_00297fa0(param_1);

  if (auVar6._0_8_ == 0) goto LAB_000851e8;

  uVar1 = FUN_00292be0(param_1,auVar6._8_8_,0);

  uVar2 = 0;

  pcVar5 = &cf_xzy;

  uVar4 = extraout_x1;

  switch(uVar1) {

  case 0x41:

    pcVar5 = &cf_AmpLify;

    break;

  case 0x42:

    pcVar5 = &cf_BottomNav;

    break;

  case 0x43:

    auVar6 = FUN_00295f60(param_1,extraout_x1,&cf_Cadis);

    if ((auVar6._0_8_ & 1) == 0) {

      auVar6 = FUN_00295f60(param_1,auVar6._8_8_,&cf_Contacts);

      if ((auVar6._0_8_ & 1) == 0) {

        auVar6 = FUN_00295f60(param_1,auVar6._8_8_,&cf_Corner);

        uVar4 = auVar6._8_8_;

        if ((auVar6._0_8_ & 1) == 0) {

          pcVar5 = &cf_CoverSelectedCard;

          break;

        }

      }

    }

    goto LAB_000853c4;

  case 0x44:

    pcVar5 = &cf_Discovery;

    break;

  case 0x45:

    uVar2 = FUN_00297820(param_1,extraout_x1,&cf_EnablePlugin);

    goto switchD_000851d8_caseD_49;

  case 0x46:

    pcVar5 = &cf_FriendsCircle;

    break;

  case 0x47:

    pcVar5 = &cf_GroupedCorner;

    break;

  case 0x48:

    pcVar5 = &cf_Honeycomb;

    break;

  default:

    goto switchD_000851d8_caseD_49;

  case 0x4d:

    auVar6 = FUN_00295f60(param_1,extraout_x1,&cf_MorePage);

    if ((auVar6._0_8_ & 1) == 0) {

      auVar6 = FUN_00295f60(param_1,auVar6._8_8_,&cf_MMAsset);

      uVar4 = auVar6._8_8_;

      if ((auVar6._0_8_ & 1) == 0) {

        pcVar5 = &cf_MainPageCorner;

        break;

      }

    }

    goto LAB_000853c4;

  case 0x53:

    auVar6 = FUN_00295f60(param_1,extraout_x1,&cf_SHTM);

    if ((auVar6._0_8_ & 1) == 0) {

      auVar6 = FUN_00295f60(param_1,auVar6._8_8_,&cf_SectionHeader);

      uVar4 = auVar6._8_8_;

      if ((auVar6._0_8_ & 1) == 0) {

        pcVar5 = &cf_SelectedTheme;

        break;

      }

    }

    goto LAB_000853c4;

  case 0x54:

    pcVar5 = &cf_ThemeColors;

    break;

  case 0x57:

    pcVar5 = &cf_WCSearchBar;

    break;

  case 0x58:

    pcVar5 = &cf_XZY;

    break;

  case 0x61:

    auVar6 = FUN_00295f60(param_1,extraout_x1,&cf_aab);

    uVar4 = auVar6._8_8_;

    if ((auVar6._0_8_ & 1) != 0) goto LAB_000853c4;

    pcVar5 = &cf_aiChat;

    break;

  case 0x62:

    pcVar5 = &cf_bubble;

    break;

  case 99:

    auVar6 = FUN_00295f60(param_1,extraout_x1,&cf_cover);

    if ((auVar6._0_8_ & 1) == 0) {

      auVar6 = FUN_00295f60(param_1,auVar6._8_8_,&cf_cadis);

      uVar4 = auVar6._8_8_;

      if ((auVar6._0_8_ & 1) == 0) {

        pcVar5 = &cf_clg;

        break;

      }

    }

LAB_000853c4:

    uVar2 = 1;

    goto switchD_000851d8_caseD_49;

  case 0x67:

    pcVar5 = &cf_grayTest;

    break;

  case 0x69:

    pcVar5 = &cf_imageDrop;

    break;

  case 0x6d:

    pcVar5 = &cf_mes;

    break;

  case 0x70:

    auVar6 = FUN_00295f60(param_1,extraout_x1,&cf_personalCover);

    uVar4 = auVar6._8_8_;

    if ((auVar6._0_8_ & 1) != 0) goto LAB_000853c4;

    pcVar5 = &cf_peerCover;

    break;

  case 0x73:

    pcVar5 = &cf_selected;

    break;

  case 0x74:

    pcVar5 = &cf_tts;

    break;

  case 0x78:

    break;

  }

  uVar2 = FUN_00295f60(param_1,uVar4,pcVar5);

switchD_000851d8_caseD_49:

  _objc_release(param_1);

  return uVar2;

}




