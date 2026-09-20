// FUN_006a07ec @ 006a07ec

void FUN_006a07ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR_WCRefinePluginHubManager_026ce800;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePluginHubManager_026ce800,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    (*DAT_028cbe00)(local_18,local_20,local_28);
  }
  else {
    lVar3 = DAT_028cbdd0;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028cbdd0,PTR_s_length_0269cca0);
    if (lVar3 == 0) {
      (*DAT_028cbe00)(local_18,local_20,local_28);
    }
    else {
      (*DAT_028cbe00)(local_18,local_20,DAT_028cbdd0);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

