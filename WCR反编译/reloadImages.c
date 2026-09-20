// reloadImages @ 01878fbc

/* Function Stack Size: 0x10 bytes */

void WCRBubbleCutPreviewHeaderView::reloadImages(ID param_1,SEL param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_WCRefineBubbleCut_026ce9c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineBubbleCut_026ce9c8,PTR_s_loadBubbleImageNamed__026b6dd8,
             &cf_ChatRoom_Bubble_Text_Receiver_White);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setReceiverImage__026b6de0);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR_WCRefineBubbleCut_026ce9c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineBubbleCut_026ce9c8,PTR_s_loadBubbleImageNamed__026b6dd8,
             &cf_ChatRoom_Bubble_Text_Sender_Green);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setSenderImage__026b6de8);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_updateGuideImage_026b6da0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_refreshStretchPreviews_026b6d88);
  return;
}

