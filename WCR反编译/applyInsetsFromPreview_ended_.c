// applyInsetsFromPreview:ended: @ 0187b64c

/* Function Stack Size: 0x34 bytes */

void WCRefineBubbleCutViewController::applyInsetsFromPreview_ended_
               (ID param_1,SEL param_2,UIEdgeInsets param_3,bool param_4)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 uVar3;
  undefined8 in_d2;
  undefined8 uVar4;
  undefined8 in_d3;
  undefined8 uVar5;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  uVar3 = in_d1;
  uVar4 = in_d2;
  uVar5 = in_d3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0,param_3.field0_0x0,param_3.field1_0x8
             ,param_3.field2_0x10,param_3.field3_0x18,param_4);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(in_d0);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(in_d1);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(in_d2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_previewHeader_026b6e18);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineBubbleCut_026ce9c8,PTR_s_normalizedConfigInsets_026ab4c0);
  (*(code *)PTR__objc_msgSend_02578628)(in_d3,uVar3,uVar4,uVar5,IVar2,PTR_s_applyInsets__026b6e28);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if ((param_3.field0_0x0._0_1_ & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_sendSettingsChangedNotification_026b61d8);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_reloadTableData_0269dca8);
  }
  return;
}

