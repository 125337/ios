// titleForAvatarBeautifyValueButtonWithKind: @ 0181b580

/* Function Stack Size: 0x18 bytes */

ID WCRefineAvatarCornerBeautifyViewController::titleForAvatarBeautifyValueButtonWithKind_
             (ID param_1,SEL param_2,long_long param_3)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_48;
  long_long local_40;
  SEL local_38;
  ID local_30;
  cfstringStruct *local_28;
  
  pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  local_40 = param_3;
  local_38 = param_2;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_30;
  pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
  local_48 = pcVar2;
  switch(local_40) {
  case 1:
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_avatarCornerChatPageRadius_0269dff8);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_stringWithFormat__0269cca8,&cf__ld__);
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar3;
    break;
  case 2:
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_avatarCornerRadius_0269dfc0);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_stringWithFormat__0269cca8,&cf__ld__);
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar3;
    break;
  case 3:
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_avatarCornerChatPageBorderSize_0269e008);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_stringWithFormat__0269cca8,&cf___1f);
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar3;
    break;
  case 4:
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_avatarCornerBorderSize_0269dfd0);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_stringWithFormat__0269cca8,&cf___1f);
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar3;
    break;
  case 5:
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_normalizedAvatarCornerScaleValue_026b60a0);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_stringWithFormat__0269cca8,&cf___2fx);
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar3;
    break;
  case 6:
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_normalizedAvatarCornerProfileSca_026b6110);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_stringWithFormat__0269cca8,&cf___2fx);
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar3;
    break;
  case 7:
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_avatarFrameChatListOffsetX_0269df70);
    FUN_0181bd98();
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar2;
    break;
  case 8:
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_avatarFrameChatListOffsetY_0269df78);
    FUN_0181bd98();
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar2;
    break;
  case 9:
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_avatarFrameChatListScale_0269df80);
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_effectiveAvatarFrameScaleFromSto_026b6118);
    pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___0f__);
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar3;
    break;
  case 10:
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_avatarFrameChatPageOtherOffsetX_0269df88);
    FUN_0181bd98();
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar2;
    break;
  case 0xb:
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_avatarFrameChatPageOtherOffsetY_0269df90);
    FUN_0181bd98();
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar2;
    break;
  case 0xc:
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_avatarFrameChatPageOtherScale_0269df98);
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_effectiveAvatarFrameScaleFromSto_026b6118);
    pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___0f__);
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar3;
    break;
  case 0xd:
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_avatarFrameChatPageSelfOffsetX_0269dfa0);
    FUN_0181bd98();
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar2;
    break;
  case 0xe:
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_avatarFrameChatPageSelfOffsetY_0269dfa8);
    FUN_0181bd98();
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar2;
    break;
  case 0xf:
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_avatarFrameChatPageScale_0269dfb0);
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_effectiveAvatarFrameScaleFromSto_026b6118);
    pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___0f__);
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar3;
    break;
  default:
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &::cf_format_s_;
  }
  _objc_storeStrong(&local_48,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

