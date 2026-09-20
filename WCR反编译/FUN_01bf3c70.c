// FUN_01bf3c70 @ 01bf3c70

void FUN_01bf3c70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR_WCRefineMomentsDraftManager_026ce740;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineMomentsDraftManager_026ce740,PTR_s_sharedManager_0269db78);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_row_0269e210);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_deleteDraftAtIndex__026a4dc8,uVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}

