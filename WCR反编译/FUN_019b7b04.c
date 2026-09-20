// FUN_019b7b04 @ 019b7b04

void FUN_019b7b04(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_38;
  long local_30;
  undefined8 local_28;
  long local_20;
  cfstringStruct *local_18;
  
  pcVar2 = (cfstringStruct *)(param_1 + 0x20);
  local_30 = param_1;
  local_28 = param_2;
  local_20 = param_1;
  _objc_loadWeakRetained();
  uVar1 = local_28;
  local_38 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
  }
  else {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_storedActionForTabIndex_cfg__026ba850,uVar1);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_18 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

