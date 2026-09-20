// typeChanged: @ 01c32bd4

/* Function Stack Size: 0x18 bytes */

void WCRefineNameplateBeautifyViewController::typeChanged_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar2 = PTR_WCRefineNameplateHelper_026ce5f8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineNameplateHelper_026ce5f8,PTR_s_revertSelfBuildTypeSelectionIfDe_026c1970,
             local_28);
  if (((ulong)puVar2 & 1) == 0) {
    lVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
    IVar1 = local_18;
    lVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedSegmentIndex_0269e998);
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_setType_forScene__026c1978,lVar4,lVar3 + -9000);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_postSettingsChanged_026c1808);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

