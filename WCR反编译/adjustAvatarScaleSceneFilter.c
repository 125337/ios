// adjustAvatarScaleSceneFilter @ 0181e5ec

/* Function Stack Size: 0x10 bytes */

void WCRefineAvatarCornerBeautifyViewController::adjustAvatarScaleSceneFilter
               (ID param_1,SEL param_2)

{
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_triggerHapticFeedback_0269dc78);
  local_28 = local_18;
  local_50 = PTR___NSConcreteStackBlock_02578660;
  local_48 = 0xc0000000;
  local_44 = 0;
  local_40 = FUN_0181e688;
  local_38 = &DAT_025797b0;
  local_30 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineAvatarScaleSceneFilterViewController_026cf068,
             PTR_s_presentFromHost_onChange__026b62a0,local_18,&local_50);
  return;
}

