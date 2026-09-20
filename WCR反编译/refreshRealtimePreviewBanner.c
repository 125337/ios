// refreshRealtimePreviewBanner @ 01ba3040

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineMessageBannerBeautifyViewController::refreshRealtimePreviewBanner
               (ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_d2;
  undefined8 in_d3;
  ID local_48;
  undefined4 local_3c;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_realtimePreviewBanner_026bfe68);
  _objc_retainAutoreleasedReturnValue();
  local_38 = param_1;
  if (param_1 == 0) {
    local_3c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    local_48 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_msgBannerDisableOfficialNotifyIn_026c0230,local_38);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_msgBannerApplyOfficialPreviewLay_026c0238,local_38,local_48);
    bVar1 = false;
    if (local_48 != 0) {
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_stickyPreviewHost_026b7f50);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = IVar2 != 0;
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_frame_026ca640);
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_stickyPreviewHost_026b7f50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_stickyPreviewHost_026b7f50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_stickyPreviewHost_026b7f50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      uVar4 = 0;
      uVar3 = 0;
      FUN_01b8eba0();
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,uVar4,in_d2,in_d3,local_48,PTR_s_setFrame__026ca960);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setAutoresizingMask__026ca878,2);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layoutStickyPreviewHost_026b7e98);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

