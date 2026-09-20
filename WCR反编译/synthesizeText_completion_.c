// synthesizeText:completion: @ 015a0f5c

/* Function Stack Size: 0x20 bytes */

void WCRefineVoiceCloneHelper::synthesizeText_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  undefined8 uVar1;
  ID IVar2;
  ID IVar3;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3,param_3,param_4,param_5);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  IVar2 = local_18;
  uVar1 = local_28;
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_activeModelId_026b0a60);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_synthesizeText_voiceId_completio_026b0ae8,uVar1,IVar3,local_30);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

