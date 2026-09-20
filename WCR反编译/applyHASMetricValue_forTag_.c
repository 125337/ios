// applyHASMetricValue:forTag: @ 01ae6658

/* Function Stack Size: 0x20 bytes */

void WCRefineHomeAvatarStripSettingsViewController::applyHASMetricValue_forTag_
               (ID param_1,SEL param_2,double param_3,long_long param_4)

{
  undefined *puVar1;
  undefined *local_38;
  long_long local_30;
  double local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_30 = param_4;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  switch(local_30) {
  case 0x835:
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,puVar1,PTR_s_setHomeAvatarStripAvatarSize__026be3c8);
    break;
  case 0x836:
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,puVar1,PTR_s_setHomeAvatarStripItemSpacing__026be3d0);
    break;
  case 0x837:
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,puVar1,PTR_s_setHomeAvatarStripSideMargin__026be3e0);
    break;
  case 0x838:
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,puVar1,PTR_s_setHomeAvatarStripCornerRadius__026be3e8);
    break;
  case 0x839:
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,puVar1,PTR_s_setHomeAvatarStripCardHeight__026be3f0);
    break;
  case 0x83a:
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,puVar1,PTR_s_setHomeAvatarStripCardWidth__026be3f8);
    break;
  case 0x83b:
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,puVar1,PTR_s_setHomeAvatarStripNameSpacing__026be3d8);
    break;
  default:
    break;
  case 0x898:
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,puVar1,PTR_s_setHomeAvatarStripTopSpacing_for_026be400,0);
    break;
  case 0x899:
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,puVar1,PTR_s_setHomeAvatarStripTopSpacing_for_026be400,1);
    break;
  case 0x89a:
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,puVar1,PTR_s_setHomeAvatarStripTopSpacing_for_026be400,2);
    break;
  case 0x8a2:
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,puVar1,PTR_s_setHomeAvatarStripBottomSpacing__026be408,0);
    break;
  case 0x8a3:
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,puVar1,PTR_s_setHomeAvatarStripBottomSpacing__026be408,1);
    break;
  case 0x8a4:
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,puVar1,PTR_s_setHomeAvatarStripBottomSpacing__026be408,2);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

