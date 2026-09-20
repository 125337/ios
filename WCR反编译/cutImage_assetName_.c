// cutImage:assetName: @ 018791d4

/* Function Stack Size: 0x20 bytes */

ID WCRBubbleCutPreviewHeaderView::cutImage_assetName_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  local_18 = local_30;
  if (local_30 == 0) {
    local_18 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_currentInsets_026b6dd0);
    (*(code *)PTR__objc_msgSend_02578628)
              (in_d0,in_d1,in_d2,in_d3,local_18,PTR_s_resizableImageWithCapInsets_resi_0269f400,1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

