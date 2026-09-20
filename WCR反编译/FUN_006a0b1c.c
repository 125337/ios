// FUN_006a0b1c @ 006a0b1c

void FUN_006a0b1c(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  (*DAT_028cbe10)(param_1,param_2,param_3 & 1);
  puVar1 = PTR_WCRefinePluginHubManager_026ce800;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePluginHubManager_026ce800,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) != 0) {
    lVar3 = DAT_028cbdd0;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028cbdd0,PTR_s_length_0269cca0);
    if (lVar3 != 0) {
      uVar4 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_navigationItem_0269cf08);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
    FUN_006a2c2c();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_replacePluginTopAvatar_026a6588);
  }
  return;
}

