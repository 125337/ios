// setDisplayVersion:forPluginIdentifier: @ 01776448

/* Function Stack Size: 0x20 bytes */

void WCRefinePluginHubManager::setDisplayVersion_forPluginIdentifier_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_88;
  bool local_59;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  uint local_3c;
  ulong local_38;
  undefined8 local_30;
  ulong local_28;
  SEL local_20;
  cfstringStruct *local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  uVar2 = local_28;
  FUN_0176d368();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isEqualToString__0269ccc8,&cf__0);
  if (((uVar2 & 1) == 0) &&
     (uVar2 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     uVar2 != 0)) {
    pcVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pluginWithIdentifier__026b4478,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_version_026b43b0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    pcVar5 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    local_59 = ((ulong)pcVar5 & 1) == 0;
    if (local_59) {
      local_88 = &::cf___;
    }
    else {
      local_88 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_version_026b43b0);
      _objc_retainAutoreleasedReturnValue();
      local_58 = local_88;
    }
    local_59 = !local_59;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_88;
    if (local_59) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,local_50);
    bVar1 = (uVar2 & 1) == 0;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_setOverrideValue_key_identifier__026b43c8,local_38,&cf_version,
                 local_30);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_setOverrideValue_key_identifier__026b43c8,local_50,&cf_versionBase,
                 local_30);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_setOverrideValue_key_identifier__026b43c8,0,&cf_version,local_30);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_setOverrideValue_key_identifier__026b43c8,0,&cf_versionBase,local_30
                );
    }
    local_3c = (uint)!bVar1;
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_setOverrideValue_key_identifier__026b43c8,0,&cf_version,local_30);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_setOverrideValue_key_identifier__026b43c8,0,&cf_versionBase,local_30);
    local_3c = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

