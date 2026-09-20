// handleTailDurationInput: @ 01f24650

/* Function Stack Size: 0x18 bytes */

void WCRefineTouchTrailViewController::handleTailDurationInput_(ID param_1,SEL param_2,ID param_3)

{
  double dVar1;
  undefined8 uVar2;
  undefined *puVar3;
  float fVar4;
  double dVar5;
  double local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  dVar1 = DAT_02323d18;
  local_28 = 0;
  dVar5 = DAT_02323d18;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  fVar4 = SUB84(dVar5,0);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_30 = (double)fVar4;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (local_30 < dVar1) {
    local_30 = dVar1;
  }
  if (3.0 < local_30) {
    local_30 = 3.0;
  }
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_30);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sendSettingsChangedNotification_026b61d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_28,0);
  return;
}

