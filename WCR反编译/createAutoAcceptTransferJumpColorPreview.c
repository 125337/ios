// createAutoAcceptTransferJumpColorPreview @ 01a63c70

/* Function Stack Size: 0x10 bytes */

ID WCRefineGeneralFunctionViewController::createAutoAcceptTransferJumpColorPreview
             (ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_18;
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_autoAcceptTransferNotificationJu_0269d8e8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_autoAcceptTransferNotificationJu_0269d8e0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar3,PTR_s_createMessageNoRevokeDualColorPr_026bd0c8,puVar1,puVar2,&cf_800080);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar3;
}

