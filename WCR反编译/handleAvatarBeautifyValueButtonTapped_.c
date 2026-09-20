// handleAvatarBeautifyValueButtonTapped: @ 0181d6f0

/* Function Stack Size: 0x18 bytes */

void WCRefineAvatarCornerBeautifyViewController::handleAvatarBeautifyValueButtonTapped_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  _objc_getAssociatedObject(local_28,DAT_028c6510);
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar1;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_integerValue_026ca750);
    if (lVar1 - 1U < 0xe || lVar1 == 0xf) {
      switch((long)(int)(&switchD_0181d794::switchdataD_02339c54)[lVar1 - 1U] + 0x181d788) {
      case 0x181d798:
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_adjustAvatarCornerChatPageRadius_026b61e0);
        break;
      case 0x181d7b4:
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_adjustAvatarCornerRadius_026b61e8);
        break;
      case 0x181d7d0:
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_adjustAvatarCornerChatPageBorder_026b61f0);
        break;
      case 0x181d7ec:
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_adjustAvatarCornerBorderSize_026b61f8);
        break;
      case 0x181d808:
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_adjustAvatarCornerScale_026b6200);
        break;
      case 0x181d824:
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_adjustAvatarCornerProfileScale_026b6208);
        break;
      case 0x181d840:
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_adjustAvatarFrameChatListOffsetX_026b6210);
        break;
      case 0x181d85c:
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_adjustAvatarFrameChatListOffsetY_026b6218);
        break;
      case 0x181d878:
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_adjustAvatarFrameChatListScale_026b6220);
        break;
      case 0x181d894:
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_adjustAvatarFrameChatPageOtherOf_026b6228);
        break;
      case 0x181d8b0:
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_adjustAvatarFrameChatPageOtherOf_026b6230);
        break;
      case 0x181d8cc:
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_adjustAvatarFrameChatPageOtherSc_026b6238);
        break;
      case 0x181d8e8:
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_adjustAvatarFrameChatPageSelfOff_026b6240);
        break;
      case 0x181d904:
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_adjustAvatarFrameChatPageSelfOff_026b6248);
        break;
      case 0x181d920:
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_adjustAvatarFrameChatPageScale_026b6250);
      }
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

