// deleteBackgroundAtPath: @ 01f60fe4

/* Function Stack Size: 0x18 bytes */

void WCRVoiceBackgroundListViewController::deleteBackgroundAtPath_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  ID IVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined *puVar7;
  cfstringStruct *local_78;
  ID local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = (cfstringStruct *)0x0;
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = local_30;
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_30,local_38);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR_WCRefineHelper_026ce000;
  if (((ulong)puVar2 & 1) == 0) {
    pcVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    local_78 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_78 = &cf_Rd1Y_;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78,local_78);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    local_3c = 1;
  }
  else {
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pinnedNames_026c9588);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_48 = IVar5;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar4 = local_48;
    uVar6 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_removeObject__0269d678);
    (*(code *)PTR__objc_release_02578630)(uVar6);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_savePinnedNames__026c95d8,local_48);
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (((ulong)puVar7 & 1) != 0) {
      puVar1 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

