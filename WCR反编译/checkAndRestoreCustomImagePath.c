// checkAndRestoreCustomImagePath @ 01f20a28

/* Function Stack Size: 0x10 bytes */

void WCRefineTouchTrailViewController::checkAndRestoreCustomImagePath(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  ID IVar5;
  uint local_a4;
  cfstringStruct *local_a0;
  uint local_84;
  ID local_50;
  cfstringStruct *local_48;
  undefined4 local_40;
  byte local_39;
  undefined *local_38;
  undefined1 local_29;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_29 = SUB81(puVar2,0);
  if (((ulong)puVar2 & 1) != 0) {
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    local_39 = 0;
    local_84 = 0;
    if (puVar1 != (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      local_39 = 1;
      local_38 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_84 = (uint)puVar1;
    }
    if ((local_39 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
    if ((local_84 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCustomImagePath__026c8438,local_28);
      local_40 = 1;
      goto LAB_01f20e70;
    }
    pcVar3 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_a0 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_a0 = &::cf__;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_a0;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    IVar5 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_touchTrailAbsoluteImagePathForFo_026c8440,local_48);
    _objc_retainAutoreleasedReturnValue();
    local_50 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_length_0269cca0);
    local_a4 = 0;
    if (IVar5 != 0) {
      puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_a4 = (uint)puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    if ((local_a4 & 1) != 0) {
      IVar5 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_touchTrailRelativeImagePathForFo_026c83c0,local_48);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_release_02578630)(IVar5);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCustomImagePath__026c8438,local_50);
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  local_40 = 0;
LAB_01f20e70:
  _objc_storeStrong(&local_28,0);
  return;
}

