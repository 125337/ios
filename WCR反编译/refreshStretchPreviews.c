// refreshStretchPreviews @ 018792cc

/* Function Stack Size: 0x10 bytes */

void WCRBubbleCutPreviewHeaderView::refreshStretchPreviews(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  ID IVar3;
  ID local_70;
  ID local_60;
  cfstringStruct *local_58;
  byte local_49;
  ID local_48;
  byte local_39;
  ID local_38;
  ID local_30;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isEditingSender_026b6da8);
  local_21 = (byte)param_1;
  local_39 = 0;
  local_49 = 0;
  local_70 = local_18;
  if ((param_1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_receiverImage_026b6db8);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    local_48 = local_70;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_senderImage_026b6db0);
    _objc_retainAutoreleasedReturnValue();
    local_39 = 1;
    local_38 = local_70;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_70;
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  pcVar1 = &cf_ChatRoom_Bubble_Text_Sender_Green;
  if ((local_21 & 1) == 0) {
    pcVar1 = &cf_ChatRoom_Bubble_Text_Receiver_White;
  }
  (*(code *)PTR__objc_retain_02578638)();
  IVar2 = local_18;
  local_58 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_cutImage_assetName__026b6df0,local_30,pcVar1)
  ;
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_18;
  local_60 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_shortSample_026b6df8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tallSample_026b6e08);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setNeedsLayout_0269deb8);
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_30,0);
  return;
}

