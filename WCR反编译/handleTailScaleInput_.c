// handleTailScaleInput: @ 01f249a4

/* Function Stack Size: 0x18 bytes */

void WCRefineTouchTrailViewController::handleTailScaleInput_(ID param_1,SEL param_2,ID param_3)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined *puVar4;
  float fVar5;
  double dVar6;
  double local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  dVar2 = DAT_02324000;
  dVar1 = DAT_02323d18;
  local_28 = 0;
  dVar6 = DAT_02324000;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  fVar5 = SUB84(dVar6,0);
  uVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_30 = (double)fVar5;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  if (local_30 < dVar1) {
    local_30 = dVar1;
  }
  if (dVar2 < local_30) {
    local_30 = dVar2;
  }
  puVar4 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_30);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sendSettingsChangedNotification_026b61d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_28,0);
  return;
}

