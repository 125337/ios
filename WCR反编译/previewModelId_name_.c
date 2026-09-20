// previewModelId:name: @ 01f5c848

/* Function Stack Size: 0x20 bytes */

void WCRefineVoiceCloneListViewController::previewModelId_name_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *local_50;
  ID local_48;
  undefined8 local_40;
  undefined *local_38;
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
  puVar5 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,&cf_ck_Wub_T_);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_28;
  puVar1 = PTR_WCRefineVoiceCloneHelper_026cea40;
  local_38 = puVar5;
  (*(code *)PTR__objc_retain_02578638)();
  IVar4 = local_18;
  local_50 = puVar5;
  (*(code *)PTR__objc_retain_02578638)();
  uVar3 = local_28;
  local_48 = IVar4;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_synthesizeText_voiceId_completio_026b0ae8,&cf__O_Y_fr_T0,uVar2);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

