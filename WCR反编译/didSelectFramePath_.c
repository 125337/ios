// didSelectFramePath: @ 017fbb68

/* Function Stack Size: 0x18 bytes */

void WCRefineAssistFunctionViewController::didSelectFramePath_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ID IVar7;
  ID IVar8;
  undefined *local_48;
  ulong local_40;
  long local_38;
  undefined4 local_2c;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    lVar2 = 9;
    _NSSearchPathForDirectoriesInDomains(9,1,1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_38 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    uVar5 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = uVar5;
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasPrefix__0269d320,local_38);
    uVar5 = local_28;
    if ((uVar4 & 1) != 0) {
      lVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_substringFromIndex__0269d120,lVar3 + 1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_40;
      local_40 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
    puVar6 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    IVar7 = local_18;
    local_48 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectingScreenRecordingFrameTem_026b5a08);
    IVar8 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectingScreenRecordingFrameTem_026b5a08);
    if ((IVar8 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setScreenshotFrameTemplate__026b5a18,local_40);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setScreenRecordingFrameTemplate__026b5a10,local_40);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_setSelectingScreenRecordingFrame_026b5888,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
    pcVar1 = &cf_U_O_WYX_n_;
    if ((IVar7 & 1) == 0) {
      pcVar1 = &cf_WYX_n_;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

