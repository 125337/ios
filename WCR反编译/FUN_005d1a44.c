// FUN_005d1a44 @ 005d1a44

void FUN_005d1a44(long param_1,undefined1 param_2)

{
  long lVar1;
  long local_30;
  long local_28;
  undefined1 local_19;
  long local_18;
  
  lVar1 = param_1 + 0x20;
  local_28 = param_1;
  local_19 = param_2;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_30 = lVar1;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000,lVar1,PTR_s_setAlpha__026ca860);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_WCRefine_reloadTimeline_026a5830);
  }
  _objc_storeStrong(&local_30,0);
  return;
}

