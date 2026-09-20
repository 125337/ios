// confirmToDoBackgroundMediaOpacity: @ 01ecd3e4

/* Function Stack Size: 0x18 bytes */

void WCRefineToDoListSettingsViewController::confirmToDoBackgroundMediaOpacity_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  uVar1 = DAT_02323c98;
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = uVar1;
  local_38 = uVar1;
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_currentAlertTextFromSender__026c78c8,local_28);
  _objc_retainAutoreleasedReturnValue();
  FUN_01ecc74c(uVar1,uVar1,0,0x3ff0000000000000);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,puVar3,PTR_s_setToDoCardBackgroundMediaOpacit_026c7c68);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,local_40,PTR_s_setToDoCardBackgroundMediaOpacit_026c7c70);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,local_40,PTR_s_setToDoCardBackgroundMediaOpacit_026c7b58);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sendSettingsChangedNotification_026b61d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_28,0);
  return;
}

