// showAlertWithTitle:message:btnTitle:handler: @ 00fa25d8

/* Function Stack Size: 0x30 bytes */

ID WCRefineHelper::showAlertWithTitle_message_btnTitle_handler_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,undefined4 param_7)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *local_48;
  undefined8 local_40;
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
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_6);
  pcVar2 = "WCUIAlertView";
  _objc_getClass();
  uVar1 = local_28;
  uVar5 = local_30;
  uVar4 = local_38;
  puVar3 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_showAlertWithTitle_message_btnTi_026acdf8,uVar1,uVar5,uVar4,puVar3,
             PTR_s_action1__026acdf0);
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  uVar4 = local_40;
  _objc_retainBlock();
  puVar3 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(puVar3 + 8) = uVar4;
  (*(code *)PTR__objc_release_02578630)(uVar5);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  pcVar2 = local_48;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)pcVar2;
}

