// copyPickedMediaURL:preferredName: @ 019a100c

/* Function Stack Size: 0x20 bytes */

void WCRefineFileManagerViewController::copyPickedMediaURL_preferredName_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong local_78;
  ID local_58;
  byte local_49;
  ulong local_48;
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  uVar2 = local_28;
  puVar1 = PTR__OBJC_CLASS___NSURL_026ce328;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isFileURL_026a7088),
     (uVar2 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__gS0RSYeN);
    local_34 = 1;
  }
  else {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    local_49 = 0;
    if (uVar2 == 0) {
      local_78 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lastPathComponent_026ca780);
      _objc_retainAutoreleasedReturnValue();
      local_48 = local_78;
    }
    else {
      local_78 = local_30;
    }
    uVar3 = local_28;
    local_49 = uVar2 == 0;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pathExtension_0269e090);
    _objc_retainAutoreleasedReturnValue();
    FUN_019a13e0();
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_78;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if ((local_49 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    IVar6 = local_18;
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_resolvedDirectory_026ba370);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_uniqueDestinationForPath__026ba378);
    _objc_retainAutoreleasedReturnValue();
    local_58 = IVar6;
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_28;
    puVar7 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_58);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_copyItemAtURL_toURL_error__026a22c8,uVar2,puVar7,0);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (((ulong)puVar8 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__eQ1Y_);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__cS<h_[eQ);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reload_026af6c8);
    }
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

