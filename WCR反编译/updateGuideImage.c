// updateGuideImage @ 01878d8c

/* Function Stack Size: 0x10 bytes */

void WCRBubbleCutPreviewHeaderView::updateGuideImage(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  ID local_98;
  ID local_40;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isEditingSender_026b6da8);
  bVar1 = (param_1 & 1) == 0;
  local_98 = local_18;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_receiverImage_026b6db8);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_98;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_senderImage_026b6db0);
    _objc_retainAutoreleasedReturnValue();
    local_30 = local_98;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_98;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_guideView_026b6dc0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentInsets_026b6dd0);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_guideView_026b6dc0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(in_d0,in_d1,in_d2,in_d3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_storeStrong(&local_28,0);
  return;
}

