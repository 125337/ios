// FUN_00728a90 @ 00728a90

void FUN_00728a90(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined *local_28;
  long local_20;
  long local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  if (*(long *)(param_1 + 0x20) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_screenshotWatermarkDeleteOrigina_026a7650);
    if ((((ulong)puVar1 & 1) != 0) && (*(long *)(param_1 + 0x28) != 0)) {
      puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0,PTR_s_sharedPhotoLibrary_026a1730);
      _objc_retainAutoreleasedReturnValue();
      local_60 = PTR___NSConcreteStackBlock_02578660;
      local_58 = 0xc2000000;
      local_54 = 0;
      local_50 = FUN_00728ce0;
      local_48 = &DAT_02578c20;
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      (*(code *)PTR__objc_retain_02578638)();
      local_40 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_performChanges_completionHandler_026a1740,&local_60,0);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      _objc_storeStrong(&local_40,0);
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),1);
    }
    local_38 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x30) != 0) {
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
    }
    local_38 = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

