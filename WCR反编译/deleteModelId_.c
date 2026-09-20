// deleteModelId: @ 01f5d2dc

/* Function Stack Size: 0x18 bytes */

void WCRefineVoiceCloneListViewController::deleteModelId_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ID IVar3;
  ID local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar3 = local_18;
  uVar2 = local_28;
  puVar1 = PTR_WCRefineVoiceCloneHelper_026cea40;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_deleteModelId_completion__026c9570,uVar2);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

