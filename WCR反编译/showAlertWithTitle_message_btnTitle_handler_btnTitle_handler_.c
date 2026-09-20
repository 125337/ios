// showAlertWithTitle:message:btnTitle:handler:btnTitle:handler: @ 00fa27c4

/* Function Stack Size: 0x40 bytes */

ID WCRefineHelper::showAlertWithTitle_message_btnTitle_handler_btnTitle_handler_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,undefined4 param_7,
             ID param_8,ID param_9,undefined4 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_7);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_8);
  pcVar3 = "WCUIAlertView";
  _objc_getClass();
  uVar2 = local_38;
  uVar1 = local_40;
  uVar8 = local_48;
  puVar4 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = local_58;
  puVar7 = PTR_s_action1__026acdf0;
  puVar5 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar3,PTR_s_showAlertWithTitle_message_btnTi_026ace08,uVar2,uVar1,uVar8,puVar4,puVar7,
             uVar6,puVar5,PTR_s_action2__026ace00);
  _objc_retainAutoreleasedReturnValue();
  local_68 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  uVar6 = local_50;
  _objc_retainBlock();
  puVar7 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(puVar7 + 8);
  *(undefined8 *)(puVar7 + 8) = uVar6;
  (*(code *)PTR__objc_release_02578630)(uVar8);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  uVar6 = local_60;
  _objc_retainBlock();
  puVar7 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(puVar7 + 0x10);
  *(undefined8 *)(puVar7 + 0x10) = uVar6;
  (*(code *)PTR__objc_release_02578630)(uVar8);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  pcVar3 = local_68;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)pcVar3;
}

