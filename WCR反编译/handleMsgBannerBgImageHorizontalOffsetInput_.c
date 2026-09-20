// handleMsgBannerBgImageHorizontalOffsetInput: @ 01b9c944

/* Function Stack Size: 0x18 bytes */

void WCRefineMessageBannerBeautifyViewController::handleMsgBannerBgImageHorizontalOffsetInput_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  local_38 = 0;
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  FUN_01b9caac(0,0,0);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,puVar2,PTR_s_setMsgBannerBgImageOffsetXLight__026c0140);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,local_40,PTR_s_setMsgBannerBgImageOffsetXDark__026c0148);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sendSettingsChangedNotification_026b61d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_28,0);
  return;
}

