// applyPickedPath:type:variant: @ 01aee8e8

/* Function Stack Size: 0x28 bytes */

void WCRefineHomeAvatarStripSettingsViewController::applyPickedPath_type_variant_
               (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5)

{
  undefined *puVar1;
  ID IVar2;
  ulong uVar3;
  ID local_48;
  undefined *local_40;
  ulong local_38;
  long_long local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_38 = 0;
  local_30 = param_4;
  _objc_storeStrong(&local_38,param_5);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_relativeBackgroundPathFromAbsolu_026be508,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_48 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setHomeAvatarStripBackgroundUseM_026be498,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setHomeAvatarStripBackgroundEnab_026be248,1);
  uVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_dark);
  if ((uVar3 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_setHomeAvatarStripBackgroundMedi_026be510,local_48);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_setHomeAvatarStripBackgroundMedi_026be520,local_30);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_setHomeAvatarStripBackgroundMedi_026be528,local_48);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_setHomeAvatarStripBackgroundMedi_026be530,local_30);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

