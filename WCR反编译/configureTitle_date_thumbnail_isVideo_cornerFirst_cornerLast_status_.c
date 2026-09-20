// configureTitle:date:thumbnail:isVideo:cornerFirst:cornerLast:status: @ 01be6198

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x3c bytes */

void WCRMomentsDraftRowView::configureTitle_date_thumbnail_isVideo_cornerFirst_cornerLast_status_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,bool param_6,bool param_7,
               bool param_8,ID param_9)

{
  ID IVar1;
  long lVar2;
  long local_58;
  byte local_4b;
  byte local_4a;
  undefined1 local_49;
  undefined8 local_48;
  long local_40 [3];
  ID local_28;
  
  local_40[1] = 0;
  local_40[2] = param_2;
  local_28 = param_1;
  _objc_storeStrong(local_40 + 1,param_3);
  local_40[0] = 0;
  _objc_storeStrong(local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  local_49 = (undefined1)param_6;
  local_4a = (byte)param_7;
  local_4b = (byte)param_8;
  local_58 = 0;
  _objc_storeStrong(&local_58,param_9);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_titleLabel_026caba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_dateLabel_026c09a8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_thumbView_026aa820);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_thumbView_026aa820);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_playView_026c0998);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCornerFirst__026c09c0,local_4a & 1);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCornerLast__026c09c8,local_4b & 1);
  lVar2 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_statusLabel_026c09a0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_statusLabel_026c09a0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (lVar2 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_applyStatusStyle__026c09d0,local_58);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setNeedsLayout_0269deb8);
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(local_40,0);
  _objc_storeStrong(local_40 + 1,0);
  return;
}

