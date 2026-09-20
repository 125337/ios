// loadSavedSettings @ 01caa638

/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefinePluginTopViewController::loadSavedSettings
          (WCRefinePluginTopViewController *this,ID param_1,SEL param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID IVar6;
  double in_d0;
  double local_170;
  double local_160;
  uint local_104;
  cfstringStruct *local_100;
  cfstringStruct *local_c8;
  cfstringStruct *local_b0;
  cfstringStruct *local_98;
  cfstringStruct *local_80;
  undefined *local_60;
  undefined *local_50;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_80 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_80 = &::cf___;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTitleReplacement__026c2ed8,local_80);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_98 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_98 = &::cf___;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setNavTitleReplacement__026c2ee0,local_98);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_b0 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_b0 = &::cf___;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_setDescriptionLine1Replacement__026c2ee8,local_b0);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_c8 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_c8 = &::cf___;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_setDescriptionLine2Replacement__026c2ef0,local_c8);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  puVar4 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setAvatarEnabled__026c2ef8,puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setAvatarRandomEnabled__026c2f00,puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_100 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_100 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_100;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  IVar6 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_storedAvatarPathForPath__026c2f08,local_38);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setAvatarImagePath__026c2f10);
  (*(code *)PTR__objc_release_02578630)(IVar6);
  pcVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  pcVar2 = local_38;
  local_104 = 0;
  if (pcVar3 != (cfstringStruct *)0x0) {
    IVar6 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_avatarImagePath_026c2f18);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isEqualToString__0269ccc8);
    local_104 = (uint)pcVar2 ^ 1;
    (*(code *)PTR__objc_release_02578630)(IVar6);
  }
  if ((local_104 & 1) != 0) {
    IVar6 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_avatarImagePath_026c2f18);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(IVar6);
  }
  puVar4 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = in_d0 <= 0.0;
  if (bVar1) {
    local_160 = 1.0;
  }
  else {
    local_50 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_160 = in_d0;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setAvatarScale__026c2f28);
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = local_160 <= 0.0;
  if (bVar1) {
    local_170 = 1.0;
  }
  else {
    local_60 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_170 = local_160;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_170,local_28,PTR_s_setAvatarCornerRadius__026b6150);
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _objc_storeStrong(&local_38,0);
  return;
}

