// FUN_0089ae98 @ 0089ae98

void FUN_0089ae98(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined *local_48;
  uint local_3c;
  undefined1 *local_38 [3];
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028cdcf8)(param_1,param_2);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  FUN_0088fb40();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    FUN_0089d19c(0);
    _objc_retainAutoreleasedReturnValue();
    local_38[0] = puVar3;
    FUN_0089d2a0(puVar3,&cf_8_0_50);
    bVar1 = ((ulong)puVar3 & 1) == 0;
    if (bVar1) {
      puVar2 = PTR__OBJC_CLASS___UIDropInteraction_026ce9f0;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_initWithDelegate__0269fde0,local_18);
      uVar4 = local_18;
      local_48 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar4);
      _objc_storeStrong(&local_48,0);
    }
    local_3c = (uint)!bVar1;
    _objc_storeStrong(local_38,0);
  }
  return;
}

