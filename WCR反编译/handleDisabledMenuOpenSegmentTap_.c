// handleDisabledMenuOpenSegmentTap: @ 01e1f09c

/* Function Stack Size: 0x18 bytes */

void WCRefineSuperFloatSettingsViewController::handleDisabledMenuOpenSegmentTap_
               (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  double in_d0;
  double dVar4;
  undefined8 in_d1;
  undefined8 uVar5;
  undefined8 in_d2;
  undefined8 in_d3;
  ulong local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UISegmentedControl_026ce290,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((((uVar1 & 1) != 0) &&
       (uVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_tag_026cab98),
       uVar1 == 0x1155c)) &&
      (puVar2 = PTR_WCRSuperFloatProfileStore_026cee48,
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_ballAppearance_026b18a0),
      puVar2 == (undefined *)0x0)) &&
     (uVar1 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_numberOfSegments_026b5610),
     0 < (long)uVar1)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
    _CGRectGetWidth(in_d0,in_d1);
    uVar5 = 0x3ff0000000000000;
    if (1.0 <= in_d0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
      _CGRectGetWidth(in_d0,uVar5,in_d2,in_d3);
      dVar4 = in_d0 / (double)(long)uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_locationInView__026ca798,local_30);
      lVar3 = (long)(dVar4 / (in_d0 / (double)(long)uVar1));
      if (((-1 < lVar3) && (lVar3 < (long)uVar1)) &&
         (uVar1 = local_30,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_30,PTR_s_isEnabledForSegmentAtIndex__026c5f38,lVar3), (uVar1 & 1) == 0)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,
                   &cf_el_O_u_cS,&cf_zagv_cN_uNNNbRN_uegSb,&cf_wSN,0);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

