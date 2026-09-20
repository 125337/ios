// hook_isOpenNewBackup @ 0088f998

/* hook_isOpenNewBackup(objc_object*, objc_selector*) */

undefined8 hook_isOpenNewBackup(objc_object *param_1,objc_selector *param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  FUN_0088fb40();
  if (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    local_18 = 1;
  }
  else if (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
    local_18 = 0;
  }
  else if (DAT_028cd908 == (code *)0x0) {
    local_18 = 0;
  }
  else {
    uVar3 = local_20;
    (*DAT_028cd908)(local_20,param_2);
    local_18 = uVar3;
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

