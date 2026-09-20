// wcr_keepWrap: @ 014f1f70

/* Function Stack Size: 0x18 bytes */

bool WCRefineSessionStatsEngine::wcr_keepWrap_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ulong uVar3;
  ulong local_30;
  SEL local_28;
  ID local_20;
  bool local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar3 = local_30;
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_jobUsr_026afba0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_jobIsGroup_026afbe0);
  FUN_014f20cc(uVar3,IVar1,IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_20;
  local_11 = (uVar3 & 1) == 0;
  if (local_11) {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_jobDroppedForeign_026afc28);
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setJobDroppedForeign__026afa88,IVar2 + 1);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_jobDroppedForeign_026afc28);
  }
  local_11 = !local_11;
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

