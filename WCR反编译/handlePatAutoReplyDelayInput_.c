// handlePatAutoReplyDelayInput: @ 01a5c008

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineGeneralFunctionViewController::handlePatAutoReplyDelayInput_
          (WCRefineGeneralFunctionViewController *this,ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 in_d0;
  undefined8 local_40;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_01a08fe8();
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar2;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_40 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_doubleValue_026ca608);
    local_40 = in_d0;
  }
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_40);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

